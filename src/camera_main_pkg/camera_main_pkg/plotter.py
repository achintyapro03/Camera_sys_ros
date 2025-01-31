import rclpy
from rclpy.node import Node
from camera_interface_pkg.msg import Coordinates, CoordinatesList
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib.animation import FuncAnimation
import threading

edge_list = [[0, 11], [0, 12], [11, 12], [11, 13], [12, 14], [13, 15], [14, 16], [12, 24], [11, 23], [24, 23], [24, 26], [23, 25]]
# [0, 11, 12, 13, 14, 15, 16]

class PlotterNode(Node):
    def __init__(self):
        super().__init__('plotter_node')
        self.subscription = self.create_subscription(
            CoordinatesList,
            '/coordinates_list',
            self.listener_callback,
            10
        )
        self.coordinates = []

    def listener_callback(self, msg):
        self.coordinates = msg.coordinates_list
        # self.get_logger().info(self.coordinates)

def plot_coordinates(node):
    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')

    # Define maximum and minimum thresholds for the axes
    MAX_THRESHOLD = 10
    MIN_THRESHOLD = -10

    def update(frame):
        ax.clear()
        ax.set_title('Real-time 3D Coordinates')
        ax.set_xlabel('X')
        ax.set_ylabel('Y')
        ax.set_zlabel('Z')

        x_vals = []
        y_vals = []
        z_vals = []
        id_map = {}

        # Map node IDs to their coordinates
        for coord in node.coordinates:
            x_vals.append(coord.x)
            y_vals.append(coord.y)
            z_vals.append(coord.z)
            id_map[coord.node_id] = (coord.x, coord.y, coord.z)

        # Auto-adjust axis limits with thresholds
        if x_vals and y_vals and z_vals:
            x_min, x_max = max(min(x_vals) - 0.1, MIN_THRESHOLD), min(max(x_vals) + 0.1, MAX_THRESHOLD)
            y_min, y_max = max(min(y_vals) - 0.1, MIN_THRESHOLD), min(max(y_vals) + 0.1, MAX_THRESHOLD)
            z_min, z_max = max(min(z_vals) - 0.1, MIN_THRESHOLD), min(max(z_vals) + 0.1, MAX_THRESHOLD)

            ax.set_xlim([x_min, x_max])
            ax.set_ylim([y_min, y_max])
            ax.set_zlim([z_min, z_max])

        # Plot nodes with specific coloring
        for i, coord in enumerate(node.coordinates):
            if coord.node_id == 0:
                ax.scatter(coord.x, coord.y, coord.z, c='orange', marker='o')
            else:
                ax.scatter(coord.x, coord.y, coord.z, c='r', marker='o')

        # Plot edges only if both nodes are present
        for edge in edge_list:
            if edge[0] in id_map and edge[1] in id_map:
                x0, y0, z0 = id_map[edge[0]]
                x1, y1, z1 = id_map[edge[1]]
                ax.plot(
                    [x0, x1],
                    [y0, y1],
                    [z0, z1],
                    'b-', alpha=0.5)

        ax.legend()

    ani = FuncAnimation(fig, update, interval=10)
    plt.show()


def ros_thread(node):
    rclpy.spin(node)

def main(args=None):
    rclpy.init(args=args)
    node = PlotterNode()

    # Start ROS spinning in a separate thread
    ros_thread_instance = threading.Thread(target=ros_thread, args=(node,))
    ros_thread_instance.start()

    try:
        plot_coordinates(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
        ros_thread_instance.join()

if __name__ == '__main__':
    main()
