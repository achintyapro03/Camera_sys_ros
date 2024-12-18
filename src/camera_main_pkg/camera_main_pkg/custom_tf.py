import rclpy
from rclpy.node import Node
from tf2_ros import Buffer, TransformListener
from tf2_ros import LookupException, ConnectivityException, ExtrapolationException
import tf_transformations  # Import this for quaternion to RPY conversion
import numpy as np  # For matrix manipulation

class TFListener(Node):
    def __init__(self):
        super().__init__('tf_listener')
        
        # Create a Buffer and TransformListener
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        
        # Timer to periodically fetch transforms
        self.timer = self.create_timer(1.0, self.get_transforms)

    def get_transforms(self):
        try:
            # Get the transform from base_link to cam_left
            transform_cam_left = self.tf_buffer.lookup_transform(
                'base_link', 'cam_left', rclpy.time.Time())
            
            # Get the transform from base_link to cam_right
            transform_cam_right = self.tf_buffer.lookup_transform(
                'base_link', 'cam_right', rclpy.time.Time())
            
            # Extract quaternion from the transform
            quat_left = transform_cam_left.transform.rotation
            quat_right = transform_cam_right.transform.rotation

            # Convert quaternion to roll, pitch, and yaw
            rpy_left = tf_transformations.euler_from_quaternion(
                [quat_left.x, quat_left.y, quat_left.z, quat_left.w])
            rpy_right = tf_transformations.euler_from_quaternion(
                [quat_right.x, quat_right.y, quat_right.z, quat_right.w])

            # Log the RPY values
            self.get_logger().info(f"RPY to cam_left: Roll={rpy_left[0]}, Pitch={rpy_left[1]}, Yaw={rpy_left[2]}")
            # self.get_logger().info(f"RPY to cam_right: Roll={rpy_right[0]}, Pitch={rpy_right[1]}, Yaw={rpy_right[2]}")

            # Get the translation (x, y, z)
            translation_left = transform_cam_left.transform.translation
            translation_right = transform_cam_right.transform.translation

            # Create the transformation matrix (4x4)
            transform_matrix_left = self.create_transform_matrix(translation_left, quat_left)
            transform_matrix_right = self.create_transform_matrix(translation_right, quat_right)

            # Log the transformation matrices
            self.get_logger().info(f"Transformation matrix to cam_left:\n{transform_matrix_left}")
            # self.get_logger().info(f"Transformation matrix to cam_right:\n{transform_matrix_right}")

        except (LookupException, ConnectivityException, ExtrapolationException) as e:
            self.get_logger().error(f"Failed to get transform: {e}")

    def create_transform_matrix(self, translation, quaternion):
        """
        Convert translation and quaternion into a 4x4 transformation matrix.
        """
        # Convert quaternion to rotation matrix
        rotation_matrix = tf_transformations.quaternion_matrix([quaternion.x, quaternion.y, quaternion.z, quaternion.w])

        # Insert translation into the matrix
        transform_matrix = rotation_matrix
        transform_matrix[0][3] = translation.x
        transform_matrix[1][3] = translation.y
        transform_matrix[2][3] = translation.z

        return transform_matrix

def main(args=None):
    rclpy.init(args=args)
    node = TFListener()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
