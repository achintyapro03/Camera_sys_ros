import rclpy
from rclpy.node import Node
from camera_interface_pkg.msg import PointsList, Points
import cv2
from cv2 import aruco
import mediapipe as mp
from mediapipe.python.solutions import pose as mp_pose
from mediapipe.python.solutions import drawing_utils as mp_drawing

class CameraNode(Node):
    def __init__(self):
        super().__init__('video_processor')

        # Declare and get parameters
        self.declare_parameter('camera_id', 0)
        self.declare_parameter('camera_name', 'camera')
        self.declare_parameter('starting_mode', 1)

        self.cam_id = self.get_parameter('camera_id').get_parameter_value().integer_value
        self.cam_name = self.get_parameter('camera_name').get_parameter_value().string_value
        self.starting_mode = self.get_parameter('starting_mode').get_parameter_value().integer_value

        self.calibrated = False  # Initially set to False
        self.points_list = []
        # self.cap = cv2.VideoCapture(self.cam_id, cv2.CAP_DSHOW)
        self.cap = cv2.VideoCapture(self.cam_id)

        self.running = True

        # Publisher for points_list
        self.points_publisher = self.create_publisher(PointsList, f'{self.cam_name}/points_list', 10)
        self.get_logger().warning(f"node started")

        self.run()

    def publish_points_list(self):
        msg = PointsList()
        # Convert the points list into a list of Points messages
        msg.points_list = [Points(x=float(point[0]), y=float(point[1])) for point in self.points_list]

        self.get_logger().info(f"Points List: {msg.points_list}")
        self.points_publisher.publish(msg)

    def find_aruco(self):
        while not self.calibrated:  # Check if calibration is done
            ret, frame = self.cap.read()
            if not ret:
                self.get_logger().error("Failed to grab frame")
                break

            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            aruco_dict = aruco.Dictionary_get(aruco.DICT_6X6_250)
            parameters = aruco.DetectorParameters_create()
            corners, ids, _ = aruco.detectMarkers(gray, aruco_dict, parameters=parameters)
            frame_markers = aruco.drawDetectedMarkers(frame.copy(), corners, ids)

            flag = False

            if ids is not None:
                self.points_list.clear()
                for i in range(len(ids)):
                    if ids[i] == 3:
                        c = corners[i][0]
                        center_x = int(c[:, 0].mean())
                        center_y = int(c[:, 1].mean())
                        x_diff = int(center_x - frame.shape[1] / 2.0)
                        if abs(x_diff) == 0:
                            self.calibrated = True  # Set the camera as calibrated if condition met
                        self.points_list.append([x_diff, 0])
                        break
                if(not flag):
                    self.points_list.clear()
                    self.points_list.append([6969, 6969])
            else:
                self.points_list.clear()
                self.points_list.append([6969, 6969])

            # Publish the points list
            self.publish_points_list()
            cv2.imshow(f'Frame {self.cam_id}', frame_markers)
            if cv2.waitKey(10) & 0xFF == ord('q'):
                self.running = False
                break

        cv2.destroyWindow(f'Frame {self.cam_id}')

    def track_person(self):
        with mp_pose.Pose(min_detection_confidence=0.5, min_tracking_confidence=0.5, model_complexity=1, smooth_landmarks=True) as pose:
            while self.cap.isOpened() and self.running:

                ret, frame = self.cap.read()
                
                if not ret:
                    break

                image = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
                image.flags.writeable = False
                results = pose.process(image)
                image.flags.writeable = True
                image = cv2.cvtColor(image, cv2.COLOR_RGB2BGR)
                
                if results.pose_landmarks:
                    self.points_list.clear()
                    landmarks = results.pose_landmarks.landmark
                    for landmark in landmarks:
                        self.points_list.append([int((landmark.x - 0.5) * frame.shape[1]), int((landmark.y - 0.2) * frame.shape[0])])

                    mp_drawing.draw_landmarks(
                        image, results.pose_landmarks, mp_pose.POSE_CONNECTIONS,
                        mp_drawing.DrawingSpec(color=(245, 117, 66), thickness=2, circle_radius=2),
                        mp_drawing.DrawingSpec(color=(245, 66, 230), thickness=2, circle_radius=2)
                    )

                cv2.imshow(f'Mediapipe Feed - {self.cam_name}', image)
                self.publish_points_list()

                if cv2.waitKey(10) & 0xFF == ord('q'):
                    self.running = False
                    break
            cv2.destroyWindow(f'Mediapipe Feed - {self.cam_name}')

    def track_multi_aruco(self, tracking_id):
        while self.running:
            ret, frame = self.cap.read()
            if not ret:
                self.get_logger().error("Failed to grab frame")
                break

            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            aruco_dict = aruco.Dictionary_get(aruco.DICT_6X6_250)
            parameters = aruco.DetectorParameters_create()
            corners, ids, _ = aruco.detectMarkers(gray, aruco_dict, parameters=parameters)
            frame_markers = aruco.drawDetectedMarkers(frame.copy(), corners, ids)

            if ids is not None:
                self.points_list.clear()
                for i in range(len(ids)):
                    c = corners[i][0]
                    center_x = int(c[:, 0].mean())
                    center_y = int(c[:, 1].mean())
                    if ids[i] == tracking_id:
                        x_diff = int(center_x - frame.shape[1] / 2.0)
                        y_diff = int(center_y - frame.shape[0] / 2.0)
                        self.points_list.append([x_diff, y_diff])
            else:
                self.points_list.clear()
                self.points_list.append([6969, 6969])

            # Publish the points list
            self.publish_points_list()
            cv2.imshow(f'MultiAruco {self.cam_id}', frame_markers)
            if cv2.waitKey(10) & 0xFF == ord('q'):
                self.running = False
                break

        cv2.destroyWindow(f'MultiAruco {self.cam_id}')

    def run(self):
        if self.starting_mode == 1:
            self.find_aruco()
        elif self.starting_mode == 2:
            self.find_aruco()
            tracking_id = int(input("Enter id of aruco to be tracked: "))
            self.track_multi_aruco(tracking_id)
        elif self.starting_mode == 3:
            self.track_person()

        self.cap.release()


def main(args=None):
    rclpy.init(args=args)
    camera_node = CameraNode()
    rclpy.spin(camera_node)
    camera_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()