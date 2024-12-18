import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
import random
import math

class JointStatePublisher(Node):
    def __init__(self):
        super().__init__('joint_state_publisher')
        self.joint_state_publisher_ = self.create_publisher(JointState, '/joint_states', 10)
        self.timer = self.create_timer(0.1, self.publish_joint_states)

        # Initialize joint state message
        self.joint_state = JointState()
        self.joint_state.name = ['pitch_inclination', 'cam_left_yaw', 'cam_right_yaw']
        self.joint_state.position = [0.0, 0.0, 0.0]  # Initial positions

    def publish_joint_states(self):
        # Generate random values within joint limits
        self.joint_state.position = [
            random.uniform(-math.pi, math.pi),  # pitch_inclination
            random.uniform(-math.pi, math.pi),  # cam_left_yaw
            random.uniform(-math.pi, math.pi)   # cam_right_yaw
        ]
        self.joint_state.header.stamp = self.get_clock().now().to_msg()
        self.joint_state_publisher_.publish(self.joint_state)
        self.get_logger().info(f"Publishing: {self.joint_state.position}")

def main(args=None):
    rclpy.init(args=args)
    node = JointStatePublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
