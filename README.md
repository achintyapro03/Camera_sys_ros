# **README.md**

# Biomimetic Convergence-Based High-Resolution Depth Estimation (ROS 2 Implementation)

This repository contains the complete **ROS 2 implementation** of a biomimetic stereo-vision system that uses **two independently actuated cameras** to dynamically converge on a target.
Unlike fixed-baseline stereo rigs, this system continuously updates each camera’s extrinsic matrix using **real-time motor encoder feedback**, enabling **high-resolution 3D depth estimation** (millimeter-level accuracy over several meters).

This repository includes:

* ROS 2 nodes for image processing, triangulation, TF publishing, and visualization
* Real-time MediaPipe pose tracking
* ArUco-based self-calibration system
* Arduino-based motor control firmware (3 DOF)
* Full URDF model and RViz setup
* Tools for debugging TF, skeleton display, and manual motor override

---

# **1. Directory Structure **

The workspace follows the standard ROS 2 layout:

```
camera_ws_main/
├── README.md
│
├── assets/                      # Robot model & RViz configs
│   ├── camera.urdf
│   ├── camera.xacro
│   └── camera_config.rviz
│
├── hardware_code/               # Arduino firmware
│   ├── Main/
│   │   └── Main.ino
│   └── stepper_tester/
│       └── stepper_tester.ino
│
├── src/                         # ALL ROS PACKAGES LIVE HERE
│   ├── camera_main_pkg/         # Core Python ROS2 nodes
│   ├── camera_interface_pkg/    # Custom msg/srv definitions
│   ├── camera_bringup_pkg/      # Launch files
│   └── camera_cpp_pkg/          # Optional C++ package
│
├── install/                     # colcon install output
├── build/                       # colcon intermediate output
├── log/                         # execution logs
│
├── setup.sh / setup.bash / etc  # ROS environment helpers
└── .idea, .vscode                # IDE configs (optional)
```

---

# **2. System Overview**

The system mimics human binocular convergence:

* Each camera sits on its own **yaw stepper**.
* A base **pitch joint** tilts the entire rig.
* Sensors:

  * **AS5600 magnetic encoders** provide absolute angle feedback.
  * **MPU6050 IMU** provides rig pitch angle (filtered).
* A host computer runs ROS 2 nodes:

  * Captures video from both webcams.
  * Detects either ArUco tags (calibration mode) or MediaPipe pose landmarks (tracking mode).
  * Receives motor angles from Arduino.
  * Continuously updates TF transforms for each camera.
  * Performs triangulation to compute 3D positions.

Outputs include:

* `/coordinates_list`: list of real-time 3D keypoints
* URDF camera-rig animation in RViz
* Live matplotlib stick-figure skeleton

---

# **3. ROS Packages (inside `src/`)**

---

## **3.1 camera_main_pkg — Core Runtime Logic**

This is the main package that runs the entire pipeline.

### **Nodes**

---

### **1. `video_processor.py` — Image Processing Node**

Modes:

#### **Calibration Mode**

* Detects ArUco ID 3 from each camera.
* Publishes the tag’s horizontal offset.
* When centered, calls `/set_calibration` to lock yaw zero.

#### **Tracking Mode**

* Runs MediaPipe Pose on RGB frames.
* Extracts 33 human landmarks.
* Publishes all pixel coordinates to:

  * `cam_neg/points_list`
  * `cam_pos/points_list`

Also displays:

* Raw feed with markers (OpenCV window)
* Pose skeleton overlay

---

### **2. `interpolator.py` — Brain of the System**

This node integrates **motors + TF + triangulation + service handling**.

#### Responsibilities:

* Opens **serial communication** to Arduino:

  * Receives: stepper angles + pitch IMU
  * Sends: desired stepper setpoints

* Maintains real-time **CameraState** for:

  * `cam_neg`
  * `cam_pos`

* Updates TF frames:

  * `base_link → pitch_joint`
  * `pitch_joint → cam_neg`
  * `pitch_joint → cam_pos`

* Computes **camera extrinsics** from:

  * Encoder yaw angles
  * IMU pitch angle
  * Rig geometry

* Performs **triangulation**:

  * Builds projection matrices `P_left` and `P_right`
  * Uses DLT style least squares
  * Outputs 3D coordinates

* Publishes:

  * `/coordinates_list` — 3D keypoints
  * `/joint_states` — URDF-driven animation
  * calibration state responses

This node is the heart of 3D depth computation.

---

### **3. `controller.py` — Manual Motor Control (GUI)**

A PyQt5 interface for debugging motors:

* Three sliders:

  * pitch
  * left yaw
  * right yaw
* Publishes to `/robot_angles`.

Allows verifying hardware motion without running the auto-tracking loop.

---

### **4. `plotter.py` — Real-Time 3D Skeleton Viewer**

* Subscribes to `/coordinates_list`.
* Renders a **3D human skeleton** using matplotlib.
* Plots keypoints + joint connections live (updating every few ms).
* Useful for:

  * evaluating triangulation quality
  * debugging convergence
  * testing tracking stability

---

### **5. `tf_test.py` — TF Visualization Tool**

Utility node that prints:

* Translation
* Quaternion
* Euler angles (deg & rad)
* Homogeneous 4×4 transform

Used to validate:

* URDF
* Joint states
* TF tree correctness
* Extrinsic matrix generation

---

## **3.2 camera_interface_pkg — ROS 2 Interfaces**

Defines custom messages and services used across the system.

### **Messages**

* `Points.msg`
* `PointsList.msg`
* `Coordinates.msg`
* `CoordinatesList.msg`
* `RobotState.msg`

### **Services**

* `SetCalibration.srv`
* `UpdateN20SetPoints.srv`

These are used by image processors, triangulation nodes, and Arduino communication logic.

---

## **3.3 camera_bringup_pkg — System Launch Files**

The central launch file:

### `main_launch.py`

Starts:

* Left & right `video_processor` nodes
* `interpolator`
* RViz2 + URDF
* robot_state_publisher
* plotter
* optional GUI controller (based on mode)

You can switch between:

* **Calibration Mode** (`starting_mode = 1`)
* **Human Tracking Mode** (`starting_mode = 3`)

---

## **3.4 camera_cpp_pkg — (Optional)**

Placeholder for future C++ extensions.

---

# **4. Hardware Code (root-level)**

Located under:

```
hardware_code/
```

---

## **Main.ino — Arduino Firmware**

Implements:

### **Motor Control**

* 3 × NEMA17 steppers
* TMC2208 drivers

### **Feedback Sensors**

* AS5600 magnetic encoders → yaw angles
* MPU6050 IMU → pitch angle (EWMA filtered)

### **Control Logic**

* MRAC loops to reach desired angles
* Packet-based serial protocol

### **ROS Communication**

Receives:

* target angles from interpolator

Sends:

* current angles
* IMU pitch
* debugging info

---

## **stepper_tester.ino**

Simple standalone script to:

* test wiring
* confirm correct stepper rotation
* validate motor drivers

---

# **5. Assets (root-level)**

```
assets/
├── camera.urdf
├── camera.xacro
└── camera_config.rviz
```

### **camera.urdf**

Includes joints:

* `pitch`
* `left_yaw`
* `right_yaw`

URDF is live-updated using `/joint_states` from `interpolator.py`, allowing real-time visualization of the rig.

### **camera_config.rviz**

Preconfigured view:

* TF tree
* URDF model
* Camera frames
* Axes, grid, view settings

---

# **6. Installation**

## **Dependencies**

### Python:

```
pip install opencv-python mediapipe scipy pyserial PyQt5 matplotlib
```

### ROS 2:

* Humble/Foxy recommended
* tf2_ros
* robot_state_publisher
* sensor_msgs
* ament_python

---

# **7. Building the Workspace**

From workspace root:

```bash
cd camera_ws_main
colcon build --symlink-install
source install/setup.bash
```

Make sure `src/` contains exactly the ROS packages described earlier.

---

# **8. Flashing Arduino Firmware**

Using Arduino IDE:

1. Open:
   `hardware_code/Main/Main.ino`
2. Upload to Arduino
3. Confirm serial port (e.g., `/dev/ttyACM0`)

You may need permissions:

```
sudo usermod -a -G dialout $USER
```

---

# **9. Running the System**

---

## **Calibration Mode (ArUco-Based)**

Set in launch file:

```python
starting_mode = 1
```

Run:

```bash
ros2 launch camera_main_pkg main_launch.py
```

Behavior:

1. Both cameras rotate until each sees the other’s ArUco marker.
2. Tag is centered automatically.
3. Calibration service called → yaw zero set for each camera.
4. System becomes fully geometrically consistent.

---

## **Human Tracking Mode (MediaPipe)**

Set:

```python
starting_mode = 3
```

Launch again:

```bash
ros2 launch camera_main_pkg main_launch.py
```

Outputs:

* Real-time MediaPipe 2D tracking
* Triangulated 3D skeleton
* RViz camera rig animation
* Live matplotlib 3D plot

---

## **GUI Motor Control (Optional)**

If enabled in launch file:

* Opens a PyQt5 GUI providing manual sliders for all 3 DOF.

Debug tool used for:

* verifying motor wiring
* testing encoder response
* checking TF alignment

---

# **10. Topics Overview**

### Input Topics

* `/cam_neg/points_list` — 2D keypoints (left)
* `/cam_pos/points_list` — 2D keypoints (right)

### Output Topics

* `/coordinates_list` — triangulated 3D coordinates
* `/joint_states` — URDF animation
* `/robot_angles` — GUI → motors

### Services

* `/cam_neg/set_calibration`
* `/cam_pos/set_calibration`

---

# **11. Citation**

```bibtex
@inproceedings{harsha2024biomimetic,
  title={Biomimetic Convergence-based High resolution Depth Estimation},
  author={Harsha, Achintya and Jonna, Prashanth and R, Nitheezkant and Rao, Madhav},
  booktitle={2024 18th International Conference on Control, Automation, Robotics and Vision (ICARCV)},
  pages={679--683},
  year={2024},
  organization={IEEE}
}
```

---
