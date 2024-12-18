import sys
import threading
from PyQt5.QtWidgets import QApplication, QMainWindow, QSlider, QHBoxLayout, QVBoxLayout, QWidget, QLabel, QPushButton, QSizePolicy
from PyQt5.QtCore import Qt
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray  # Use standard message for an array of floats

class RobotControllerNode(Node):
    def __init__(self):
        super().__init__('robot_controller')
        self.state_publisher = self.create_publisher(Float32MultiArray, 'robot_angles', 10)
        self.angles = [0.0, 0.0, 0.0]  # Only three angles now
        self.timer = self.create_timer(2.0, self.publish_state)  # Timer to publish state every 2 seconds
        self.get_logger().info('RobotController node started.')

    def set_angles(self, angles):
        # Ensure all data is float and we only deal with 3 angles
        self.angles = [float(angle) for angle in angles[:3]]
        self.publish_state()

    def publish_state(self):
        msg = Float32MultiArray()
        msg.data = self.angles  # Send the three angles in the 'data' field
        self.state_publisher.publish(msg)

class MainWindow(QMainWindow):
    def __init__(self, node):
        super().__init__()
        self.node = node
        self.initUI()

    def initUI(self):
        self.setWindowTitle('Robot Controller')
        central_widget = QWidget()
        self.setCentralWidget(central_widget)
        main_layout = QVBoxLayout()  # Main layout is vertical

        finger_layout = QHBoxLayout()  # Horizontal layout for angle sliders

        self.sliders = []
        self.slider_labels = []
        self.angle_labels = []  # To show the current value over the slider

        for i in range(3):  # Only 3 sliders for 3 angles
            vbox = QVBoxLayout()

            label = QLabel(f'Angle {i+1}')
            label.setAlignment(Qt.AlignCenter)
            vbox.addWidget(label)
            self.slider_labels.append(label)

            slider = QSlider(Qt.Vertical)
            slider.setMinimum(-50)  # Set minimum to -50
            slider.setMaximum(50)   # Set maximum to 50
            slider.setValue(0)      # Set the initial value to 0 (default position)
            slider.setSizePolicy(QSizePolicy.Minimum, QSizePolicy.Expanding)
            slider.setMinimumHeight(200)  # Make the slider taller (increase the height)
            slider.valueChanged.connect(self.slider_changed)  # Connect slider value change to method
            vbox.addWidget(slider, alignment=Qt.AlignCenter)
            self.sliders.append(slider)

            # Label to display the current value over the slider
            angle_value_label = QLabel('0.00')
            angle_value_label.setAlignment(Qt.AlignCenter)
            vbox.addWidget(angle_value_label)
            self.angle_labels.append(angle_value_label)

            vbox.setAlignment(Qt.AlignCenter)
            finger_layout.addLayout(vbox)

        reset_button = QPushButton('Reset to 0')
        reset_button.clicked.connect(self.reset_sliders)  # Connect the reset button to the reset function
        main_layout.addWidget(reset_button)

        main_layout.addLayout(finger_layout)
        central_widget.setLayout(main_layout)

    def slider_changed(self):
        # When slider value changes, update angles and labels
        angles = [self.slider_to_angle(slider.value()) for slider in self.sliders]
        for i, label in enumerate(self.slider_labels):
            label.setText(f'Angle {i+1}: {angles[i]:.2f}')
            # Update the label with the current angle value over the slider
            self.angle_labels[i].setText(f'{angles[i]:.2f}')
        self.node.set_angles(angles)

    def slider_to_angle(self, slider_value):
        # Scale the slider value from -50 to 50 to -180 to 180
        return (slider_value * 180.0) / 50.0

    def reset_sliders(self):
        # Reset the sliders to the default position (0)
        for slider in self.sliders:
            slider.setValue(0)

        # Also reset the displayed angle labels
        for label in self.angle_labels:
            label.setText('0.00')

        # Send the reset angles to the robot
        self.node.set_angles([0.0, 0.0, 0.0])

def ros2_spin(node):
    rclpy.spin(node)

def main(args=None):
    rclpy.init(args=args)
    node = RobotControllerNode()

    app = QApplication(sys.argv)
    main_window = MainWindow(node)
    main_window.resize(400, 300)
    main_window.show()

    # Start a separate thread for ROS2 spinning
    ros_thread = threading.Thread(target=ros2_spin, args=(node,))
    ros_thread.start()

    try:
        sys.exit(app.exec_())
    finally:
        rclpy.shutdown()

if __name__ == '__main__':
    main()