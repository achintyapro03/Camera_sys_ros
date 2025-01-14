import cv2

def list_cameras():
    for i in range(5):  # Check the first 5 indices (0 to 4)
        cap = cv2.VideoCapture(i)
        if cap.isOpened():
            print(f"Camera available at index {i}")
            cap.release()
        else:
            print(f"No camera at index {i}")

list_cameras()
