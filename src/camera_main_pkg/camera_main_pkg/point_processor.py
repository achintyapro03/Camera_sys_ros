import rclpy
from rclpy.node import Node
from camera_interface_pkg.msg import PointsList, Points
import serial
import time
import numpy as np

class CameraState():
    def __init__(self, d, camera_stalk_height, platform_height, foot_to_camera_base, xpos):
        self.angles = [0, 0, 0]  # yaw, pitch, roll (in degrees)
        self.offset = [0, 0, 0]  # constant angle offsets (in radians)
        self.calibrated = False
        self.points_list = []
        self.R = []
        self.t = []
        self.xpos = xpos
        self.d = d
        self.camera_stalk_height = camera_stalk_height
        self.platform_height = platform_height
        self.foot_to_camera_base = foot_to_camera_base
    
    def update(self, yaw=None, pitch=None, roll=None):
        if yaw is not None:
            self.angles[0] = yaw  # Update yaw (in degrees)
        if pitch is not None:
            self.angles[1] = pitch  # Update pitch (in degrees)
        if roll is not None:
            self.angles[2] = roll  # Update roll (in degrees)
        
        # Convert angles from degrees to radians
        yaw_rad = np.radians(self.angles[0])
        pitch_rad = np.radians(self.angles[1])
        roll_rad = np.radians(self.angles[2])

        # Apply the rotation matrix and translation updates
        self.R = self.rotation_matrix(yaw_rad, pitch_rad, roll_rad)
        self.t = self.translation_vector(roll_rad)

    def rotation_matrix(self, yaw, pitch, roll):
        yaw += self.offset[0]
        pitch += self.offset[1]
        roll += self.offset[2]
        
        Rz = np.array([[np.cos(yaw), -np.sin(yaw), 0],
                       [np.sin(yaw), np.cos(yaw), 0],
                       [0, 0, 1]])

        Ry = np.array([[np.cos(pitch), 0, np.sin(pitch)],
                       [0, 1, 0],
                       [-np.sin(pitch), 0, np.cos(pitch)]])

        Rx = np.array([[1, 0, 0],
                       [0, np.cos(roll), -np.sin(roll)],
                       [0, np.sin(roll), np.cos(roll)]])

        R = np.dot(Rz, np.dot(Ry, Rx))

        return R

    def translation_vector(self, roll):
        t = np.array([
            self.xpos * self.d / 2,
            self.platform_height + self.foot_to_camera_base + self.camera_stalk_height * np.cos(roll),
            self.camera_stalk_height * np.sin(roll)
        ])
        return t

class SerialCommunicationNode(Node):
    def __init__(self):
        super().__init__('serial_communication_node')
        self.declare_parameters(
            namespace='',
            parameters=[
                ('serial_port', '/dev/ttyUSB0'),
                ('baud_rate', 9600),
                ('send_interval', 0.05),
                ('starting_mode', 1)
            ]
        )

        serial_port = self.get_parameter('serial_port').value
        baud_rate = self.get_parameter('baud_rate').value
        self.mode = self.get_parameter('starting_mode').value

        try:
            self.ser = serial.Serial(serial_port, baud_rate, timeout=1)
        except serial.SerialException as e:
            self.get_logger().error(f"Failed to open serial port: {e}")
            raise

        self.cam_left = CameraState(d, camera_stalk_height, platform_height, foot_to_camera_base)
        self.cam_right = CameraState(d, camera_stalk_height, platform_height, foot_to_camera_base)
        
        self.coordinates = np.zeros((100, 3))  # Adjust size as needed
        self.last_send_time = time.time()

        # Subscribers
        self.create_subscription(PointsList, 'cam_left/points_list', self.points_left_callback, 10)
        self.create_subscription(PointsList, 'cam_right/points_list', self.points_right_callback, 10)

        # Timer for periodic tasks
        self.timer = self.create_timer(0.01, self.loop)

    def points_left_callback(self, msg):
        self.cam_left.points_list = msg.points_list  # Assuming PointsList contains a list of Points

    def points_right_callback(self, msg):
        self.cam_right.points_list = msg.points_list

    

d = 0.1625
platform_height = 0
foot_to_camera_base = 0.16
camera_stalk_height = 0.04

def main(args=None):
    rclpy.init(args=args)
    node = SerialCommunicationNode()

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()