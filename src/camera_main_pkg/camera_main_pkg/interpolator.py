import rclpy
from rclpy.node import Node
from camera_interface_pkg.msg import PointsList, Points, Coordinates, CoordinatesList
from camera_interface_pkg.srv import SetCalibration
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
from scipy import linalg
from copy import deepcopy


camera_width = 1280.0
camera_height = 960.0
fx = 1430.0
fy = 1430.0
cx = 480.0
cy = 620.0

frame_shape_x = 640
frame_shape_y = 480

K = np.array([
    [fx, 0, cx],
    [0, fy, cy],
    [0, 0, 1]
], dtype=float)

dist = np.array([0, 0, 0, 0, 0], dtype=float)

# mp_keypoints = [0, 11, 12, 13, 14, 15, 16]
mp_keypoints = [0, 11, 12]


class CameraState():
    def __init__(self, cam_name, mode):
        self.cam_name = cam_name
        self.angles = [0, 0, 0]  # yaw, pitch, roll (in degrees)
        self.offset = [0, 0, 0]  # constant angle offsets (in radians)
        self.radians = [0, 0, 0]  # store the angles in radians
        self.calibrated = False if mode == 1 else True
        self.points_list = []
        self.R = np.eye(3)  # Identity matrix for initial rotation
        self.t = np.zeros(3)  # Zero translation vector
        self.M = np.eye(4) # Identity matrix
        # self.frame_shape = (1280, 640)  # X, Y
    
    def update(self, yaw=None, pitch=None, roll=None):
        if yaw is not None:
            self.angles[0] = yaw  # Update yaw (in degrees)
        if pitch is not None:
            self.angles[1] = pitch  # Update pitch (in degrees)
        if roll is not None:
            self.angles[2] = roll  # Update roll (in degrees)
        
        # Convert angles from degrees to radians and store in self.radians
        self.radians[0] = np.radians(self.angles[0] - self.offset[0])  # yaw
        self.radians[1] = np.radians(self.angles[1] - self.offset[1])  # pitch
        self.radians[2] = np.radians(self.angles[2] - self.offset[2])  # roll


class InterpolatorNode(Node):
    def __init__(self):
        super().__init__('interpolator_node')


        self.declare_parameter('serial_port', '/dev/ttyACM0')
        self.declare_parameter('baud_rate', 9600)
        self.declare_parameter('send_interval', 0.05)
        self.declare_parameter('rcv_interval', 0.05)
        self.declare_parameter('starting_mode', 1)

        serial_port = self.get_parameter('serial_port').value
        baud_rate = self.get_parameter('baud_rate').value
        send_interval = self.get_parameter('send_interval').value
        rcv_interval = self.get_parameter('rcv_interval').value
        self.mode = int(self.get_parameter('starting_mode').value)

        try:
            self.ser = serial.Serial(serial_port, baud_rate, timeout=1)
            self.get_logger().info(f"success")

        except serial.SerialException as e:
            self.get_logger().error(f"Failed to open serial port: {e}")
            # raise

        self.cam_neg = CameraState(cam_name="cam_neg", mode = self.mode)
        self.cam_pos = CameraState(cam_name="cam_pos", mode = self.mode)

        self.srv_left = self.create_service(SetCalibration, 'cam_neg/set_calibration', self.set_calibration_neg_callback)
        self.srv_right = self.create_service(SetCalibration, 'cam_pos/set_calibration', self.set_calibration_right_callback)
        
        self.coordinates = np.zeros((100, 3))
        self.received_data = None

        self.temp = [0.0, 0.0, 0.0]

        self.joint_state_publisher_ = self.create_publisher(JointState, '/joint_states', 10)
        self.joint_state_timer = self.create_timer(0.1, self.publish_joint_states)
        self.joint_state = JointState()
        self.joint_state.name = ['pitch_inclination', 'cam_neg_yaw', 'cam_pos_yaw']
        self.joint_state.position = [0.0, 0.0, 0.0]  # Initial positions

        self.coordinates_publisher = self.create_publisher(CoordinatesList, '/coordinates_list', 10)

        # Initialize joint state message
        self.pitch_inclination = 0.0

        # Subscribers
        self.create_subscription(PointsList, 'cam_neg/points_list', self.points_left_callback, 10)
        self.create_subscription(PointsList, 'cam_pos/points_list', self.points_right_callback, 10)

        # Timer for sending data to arduino
        self.send_timer = self.create_timer(send_interval, self.write_to_stream)
        self.rcv_timer = self.create_timer(rcv_interval, self.run)

        self.create_subscription(Float32MultiArray, '/robot_angles', self.temp_callback, 10)

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.transform_timer = self.create_timer(0.05, self.get_transforms)

    def set_calibration_neg_callback(self, request, response):
        self.cam_neg.calibrated = request.calibrated
        self.cam_neg.offset[0] = self.cam_neg.angles[0] + 90
        response.success = True
        return response

    def set_calibration_right_callback(self, request, response):
        self.cam_pos.calibrated = request.calibrated
        self.cam_pos.offset[0] = self.cam_pos.angles[0] - 90
        response.success = True
        return response

    def get_transforms(self):
        try:
            self.cam_neg.M, self.cam_neg.R, self.cam_neg.t = self.process_transform('cam_neg')
            self.cam_pos.M, self.cam_pos.R, self.cam_pos.t = self.process_transform('cam_pos')

            # Format the translation vectors to 2 decimal places
            neg_t_formatted = f"[{self.cam_neg.t.x:.2f}, {self.cam_neg.t.y:.2f}, {self.cam_neg.t.z:.2f}]"
            pos_t_formatted = f"[{self.cam_pos.t.x:.2f}, {self.cam_pos.t.y:.2f}, {self.cam_pos.t.z:.2f}]"

            # Format the rotation matrices to 2 decimal places
            neg_R_formatted = "\n".join(["[" + ", ".join([f"{value:.2f}" for value in row]) + "]" for row in self.cam_neg.R])
            pos_R_formatted = "\n".join(["[" + ", ".join([f"{value:.2f}" for value in row]) + "]" for row in self.cam_pos.R])

            # Log the information
            self.get_logger().info(f"Camera neg:\nTranslation: {neg_t_formatted}\nRotation:\n{neg_R_formatted}")
            self.get_logger().info(f"Camera pos:\nTranslation: {pos_t_formatted}\nRotation:\n{pos_R_formatted}")

            
        except (LookupException, ConnectivityException, ExtrapolationException) as e:
            self.get_logger().error(f"Failed to get transform: {e}")


    def process_transform(self, cam_name):
        transform = self.tf_buffer.lookup_transform('base_link', cam_name, rclpy.time.Time())
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

    def DLT(self, point_neg, point_pos):
        P_left = K @ self.cam_neg.M[:3,:]
        P_right = K @ self.cam_pos.M[:3,:]

        A = [point_neg.y*P_left[2,:] - P_left[1,:],
         P_left[0,:] - point_neg.x*P_left[2,:],
         point_pos.y*P_right[2,:] - P_right[1,:],
         P_right[0,:] - point_pos.x*P_right[2,:]
        ]
        A = np.array(A).reshape((4,4))
        #print('A: ')
        #print(A)

        B = A.transpose() @ A
        U, s, Vh = linalg.svd(B, full_matrices = False)

        #print('Triangulated point: ')
        #print(Vh[3,0:3]/Vh[3,3])
        return Vh[3,0:3]/Vh[3,3]


    def publish_joint_states(self):
        # Generate random values within joint limits
        self.joint_state.position = [
            self.pitch_inclination,
            self.cam_neg.radians[0],
            self.cam_pos.radians[0]
        ]
        self.joint_state.header.stamp = self.get_clock().now().to_msg()
        self.joint_state_publisher_.publish(self.joint_state)


    def points_left_callback(self, msg):
        self.cam_neg.points_list = msg.points_list

    def points_right_callback(self, msg):
        self.cam_pos.points_list = msg.points_list

    def write_to_stream(self):
        try:
            if self.cam_neg.points_list and self.cam_pos.points_list:
                l = deepcopy(self.cam_neg.points_list[0]) 
                r = deepcopy(self.cam_pos.points_list[0])

                if l.x > 6000:
                    l.x = 6969.0
                else:
                    l.x = l.x - 0.5 * frame_shape_x
                if r.x > 6000:
                    r.x = 6969.0
                else:
                    r.x = r.x - 0.5 * frame_shape_x

                l.y = l.y - 0.2 * frame_shape_y 
                r.y = r.y - 0.2 * frame_shape_y 
                a = math.degrees(self.cam_neg.radians[0]) % 360
                b = math.degrees(self.cam_pos.radians[0]) % 360
                x = 1
                if((a < 90 or a > 270) and (b < 90 or b > 270)):
                    x = -1;
                data = f"{(x * int(r.y + l.y) // 2)},{int(l.x)},{int(r.x)},{self.mode}\n"
                self.ser.write(data.encode())
                self.get_logger().info(f"{data}")

        except Exception as e:
            self.get_logger().info(f"{e}")  

            

    def read_from_stream(self):
        try:
            if self.ser.in_waiting > 0:
                data = self.ser.readline().decode('utf-8', errors='ignore').strip()
                try:
                    data_list = list(map(float, data.split(',')))
                    if(len(data_list) != 3):
                        return [0.0, 0.0, 0.0]
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
                self.cam_neg.update(yaw=self.received_data[1], pitch=self.received_data[0], roll=0)
                self.cam_pos.update(yaw=self.received_data[2], pitch=self.received_data[0], roll=0)

        except Exception as e: 
            self.get_logger().error("read exception : " + str(e))


        if(self.cam_neg.calibrated and self.cam_pos.calibrated):
            self.mode = 2

            if(self.cam_neg.points_list and self.cam_pos.points_list):

                # self.get_logger().info(f"{(math.degrees(self.cam_neg.radians[0]) % 360):.2f} {(math.degrees(self.cam_pos.radians[0]) % 360):.2f}")
                msg = CoordinatesList()
                for i, (point_neg, point_pos) in enumerate(zip(self.cam_neg.points_list, self.cam_pos.points_list)):
                    if i in mp_keypoints:
                        point_neg_cpy = deepcopy(point_neg)
                        point_pos_cpy = deepcopy(point_pos)
                        # point_neg_cpy.x = 320.0
                        # point_neg_cpy.y = 192.0
                        # point_pos_cpy.x = 320.0
                        # point_pos_cpy.y = 192.0

                        coordinates = self.DLT(point_neg_cpy, point_pos_cpy)
                        temp = Coordinates()    
                        temp.node_id = i
                        temp.x = coordinates[0]
                        temp.y = coordinates[1]
                        temp.z = coordinates[2]
                        msg.coordinates_list.append(temp)
                        # if(i == 0):
                        #     self.get_logger().info(f"{point_neg.x}\t{point_pos.x}\t{point_neg.y}\t{point_pos.y}")
                if(len(msg.coordinates_list)):
                    self.coordinates_publisher.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = InterpolatorNode()

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()