import rclpy
from rclpy.node import Node
from camera_interface_pkg.msg import Coordinates, CoordinatesList
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib.animation import FuncAnimation
import threading

edge_list = [[0, 11], [0, 12], [11, 12], [11, 13], [12, 14], [13, 15], [14, 16]]
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

    def update(frame):
        ax.clear()
        ax.set_title('Real-time 3D Coordinates')
        ax.set_xlabel('X')
        ax.set_ylabel('Y')
        ax.set_zlabel('Z')

        ax.set_xlim([-2, 2])
        ax.set_ylim([-2, 2])
        ax.set_zlim([-2, 2])

        x_vals = []
        y_vals = []
        z_vals = []
        id_map = {}

        # print(node.coordinates)
        
        # Map node IDs to their coordinates
        for coord in node.coordinates:
            x_vals.append(coord.x)
            y_vals.append(coord.y)
            z_vals.append(coord.z)
            id_map[coord.node_id] = (coord.x, coord.y, coord.z)

        # Plot nodes
        ax.scatter(x_vals, y_vals, z_vals, c='r', marker='o', label='Nodes')

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

    ani = FuncAnimation(fig, update, interval=100)
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
