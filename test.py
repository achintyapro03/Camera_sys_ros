import cv2

# Use the webcam as the video source
video_path = 4

# Open the webcam
cap = cv2.VideoCapture(video_path)

# Check if the webcam opened successfully
if not cap.isOpened():
    print("Error: Cannot open webcam.")
    exit()

while True:
    # Read a frame from the webcam
    ret, frame = cap.read()

    # Break the loop if there are no more frames
    if not ret:
        print("Cannot fetch frame from webcam.")
        break

    # Display the frame
    cv2.imshow("Video", frame)

    # Break the loop if the 'q' key is pressed
    if cv2.waitKey(25) & 0xFF == ord('q'):
        break

# Release the video capture object and close the display window
cap.release()
cv2.destroyAllWindows()
