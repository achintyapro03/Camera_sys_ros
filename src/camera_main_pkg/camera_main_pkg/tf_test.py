import rclpy
from rclpy.node import Node
from tf2_ros import Buffer, TransformListener
from tf2_ros import LookupException, ConnectivityException, ExtrapolationException
import tf_transformations  # For quaternion to RPY conversion
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
                'cam_left', 'base_link', rclpy.time.Time())
            
            # Extract quaternion and translation from the transform
            quat_left = transform_cam_left.transform.rotation
            translation_left = transform_cam_left.transform.translation

            # Convert quaternion to RPY (roll, pitch, yaw)
            rpy_left = tf_transformations.euler_from_quaternion(
                [quat_left.x, quat_left.y, quat_left.z, quat_left.w])
            
            # Convert RPY to degrees
            rpy_left_deg = [round(np.degrees(angle), 3) for angle in rpy_left]

            # Create the transformation matrix (4x4)
            transform_matrix_left = self.create_transform_matrix(translation_left, quat_left)

            # Print the formatted output
            self.get_logger().info(f"Translation: [{translation_left.x:.3f}, {translation_left.y:.3f}, {translation_left.z:.3f}]")
            self.get_logger().info(f"Rotation: in Quaternion [{quat_left.x:.3f}, {quat_left.y:.3f}, {quat_left.z:.3f}, {quat_left.w:.3f}]")
            self.get_logger().info(f"Rotation: in RPY (radian) [{rpy_left[0]:.3f}, {rpy_left[1]:.3f}, {rpy_left[2]:.3f}]")
            self.get_logger().info(f"Rotation: in RPY (degree) [{rpy_left_deg[0]:.3f}, {rpy_left_deg[1]:.3f}, {rpy_left_deg[2]:.3f}]")
            self.get_logger().info(f"Matrix:\n{np.array2string(transform_matrix_left, precision=3, suppress_small=True)}")

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
