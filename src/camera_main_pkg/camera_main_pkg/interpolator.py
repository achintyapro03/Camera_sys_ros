import rclpy
from rclpy.node import Node
from camera_interface_pkg.msg import PointsList, Points
import serial
import time
import numpy as np
from std_msgs.msg import Float32MultiArray
from sensor_msgs.msg import JointState
import random
import math 
from tf2_ros import Buffer, TransformListener
from tf2_ros import LookupException, ConnectivityException, ExtrapolationException
import tf_transformations

import numpy as np

class CameraState():
    def __init__(self, d, camera_stalk_height, platform_height, foot_to_camera_base, xpos):
        self.angles = [0, 0, 0]  # yaw, pitch, roll (in degrees)
        self.offset = [0, 0, 0]  # constant angle offsets (in radians)
        self.radians = [0, 0, 0]  # store the angles in radians
        self.calibrated = False
        self.points_list = []
        self.R = np.eye(3)  # Identity matrix for initial rotation
        self.t = np.zeros(3)  # Zero translation vector
        self.M = np.eye(4) # Identity matrix
        self.xpos = xpos
        self.d = d
        self.camera_stalk_height = camera_stalk_height
        self.platform_height = platform_height
        self.foot_to_camera_base = foot_to_camera_base
        self.frame_shape = (1280, 640)  # X, Y
    
    def update(self, yaw=None, pitch=None, roll=None):
        if yaw is not None:
            self.angles[0] = yaw  # Update yaw (in degrees)
        if pitch is not None:
            self.angles[1] = pitch  # Update pitch (in degrees)
        if roll is not None:
            self.angles[2] = roll  # Update roll (in degrees)
        
        # Convert angles from degrees to radians and store in self.radians
        self.radians[0] = np.radians(self.angles[0] + self.offset[0])  # yaw
        self.radians[1] = np.radians(self.angles[1] + self.offset[1])  # pitch
        self.radians[2] = np.radians(self.angles[2] + self.offset[2])  # roll


class InterpolatorNode(Node):
    def __init__(self):
        super().__init__('interpolator_node')


        self.declare_parameter('serial_port', '/dev/ttyUSB0')
        self.declare_parameter('baud_rate', 9600)
        self.declare_parameter('send_interval', 0.05)
        self.declare_parameter('rcv_interval', 0.05)
        self.declare_parameter('starting_mode', 1)

        serial_port = self.get_parameter('serial_port').value
        baud_rate = self.get_parameter('baud_rate').value
        send_interval = self.get_parameter('send_interval').value
        rcv_interval = self.get_parameter('rcv_interval').value
        self.mode = self.get_parameter('starting_mode').value

        try:
            self.ser = serial.Serial(serial_port, baud_rate, timeout=1)
        except serial.SerialException as e:
            self.get_logger().error(f"Failed to open serial port: {e}")
            # raise

        self.cam_left = CameraState(d, camera_stalk_height, platform_height, foot_to_camera_base, -1)
        self.cam_right = CameraState(d, camera_stalk_height, platform_height, foot_to_camera_base, 1)
        
        self.coordinates = np.zeros((100, 3))
        self.received_data = None
        self.mode = 0
        self.temp = [0.0, 0.0, 0.0]
        self.joint_state_publisher_ = self.create_publisher(JointState, '/joint_states', 10)
        self.joint_state_timer = self.create_timer(0.1, self.publish_joint_states)

        # Initialize joint state message
        self.pitch_inclination = 0

        self.joint_state = JointState()
        self.joint_state.name = ['pitch_inclination', 'cam_left_yaw', 'cam_right_yaw']
        self.joint_state.position = [0.0, 0.0, 0.0]  # Initial positions
        # Subscribers
        self.create_subscription(PointsList, 'cam_left/points_list', self.points_left_callback, 10)
        self.create_subscription(PointsList, 'cam_right/points_list', self.points_right_callback, 10)

        # Timer for sending data to arduino
        self.send_timer = self.create_timer(send_interval, self.write_to_stream)
        self.rcv_timer = self.create_timer(rcv_interval, self.run)

        self.create_subscription(Float32MultiArray, '/robot_angles', self.temp_callback, 10)

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.transform_timer = self.create_timer(0.05, self.get_transforms)


    def get_transforms(self):
        try:
            self.cam_left.M, self.cam_left.R, self.cam_left.t = self.process_transform('cam_left')
            self.cam_right.M, self.cam_right.R, self.cam_right.t = self.process_transform('cam_right')

        except (LookupException, ConnectivityException, ExtrapolationException) as e:
            self.get_logger().error(f"Failed to get transform: {e}")


    def process_transform(self, cam_name):
        transform = self.tf_buffer.lookup_transform(cam_name, 'base_link', rclpy.time.Time())
        quat = transform.transform.rotation
        translation = transform.transform.translation

        rotation_matrix = tf_transformations.quaternion_matrix([quat.x, quat.y, quat.z, quat.w])

        transform_matrix = rotation_matrix
        transform_matrix[0][3] = translation.x
        transform_matrix[1][3] = translation.y
        transform_matrix[2][3] = translation.z

        rotation_matrix_3x3 = rotation_matrix[:3, :3]

        return transform_matrix, rotation_matrix_3x3, translation
        

    def temp_callback(self, msg):
        self.temp = msg.data

    def publish_joint_states(self):
        # Generate random values within joint limits
        self.joint_state.position = [
            self.pitch_inclination,
            self.cam_left.radians[0],
            self.cam_right.radians[0]
        ]
        self.joint_state.header.stamp = self.get_clock().now().to_msg()
        self.joint_state_publisher_.publish(self.joint_state)
        # self.get_logger().info(f"Publishing points: {self.joint_state.position}")


    def points_left_callback(self, msg):
        self.cam_left.points_list = msg.points_list
        # self.get_logger().info(f"x: {self.cam_left.points_list[0].x}, y: {self.cam_left.points_list[0].y}")

    def points_right_callback(self, msg):
        self.cam_right.points_list = msg.points_list

    def write_to_stream(self):
        try:
            if self.cam_left.points_list and self.cam_right.points_list:
                data = f"{(self.cam_right.points_list[0].y + self.cam_left.points_list[0].y)//2},{self.cam_left.points_list[0].x},{self.cam_right.points_list[0].x},{self.mode}\n"
                self.ser.write(data.encode())
        except:
            pass

    def read_from_stream(self):
        try:
            if self.ser.in_waiting > 0:
                data = self.ser.readline().decode('utf-8', errors='ignore').strip()
                # print(data)
                try:
                    data_list = list(map(float, data.split(',')))
                    return data_list
                except ValueError as e:
                    pass
            return None
        
        except: 
            return self.temp

        
    def run(self):
        self.received_data = self.read_from_stream()

        try:
            if self.received_data:
                self.pitch_inclination = self.received_data[0] * math.pi / 180
                self.cam_left.update(yaw=self.received_data[1], pitch=self.received_data[0], roll=0)
                self.cam_right.update(yaw=self.received_data[2], pitch=self.received_data[0], roll=0)

        except Exception as e: 
            self.get_logger().error("read exception : " + str(e))
    

d = 0.1625
platform_height = 0
foot_to_camera_base = 0.16
camera_stalk_height = 0.04

def main(args=None):
    rclpy.init(args=args)
    node = InterpolatorNode()

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()