#include <AccelStepper.h>

// Define the step and direction pins for two motors
AccelStepper leftStepper(AccelStepper::DRIVER, 13, 12); // Left motor
AccelStepper rightStepper(AccelStepper::DRIVER, 5, 4);  // Right motor

// Steps per revolution (adjust this for your motor)
const int stepsPerRevolution = 1600; // Example for 1.8° motors

void setup() {
  // Set the maximum speed and acceleration for both motors
  leftStepper.setMaxSpeed(1000);    // Max speed in steps/second
  leftStepper.setAcceleration(500); // Acceleration in steps/second^2

  rightStepper.setMaxSpeed(1000);    // Max speed in steps/second
  rightStepper.setAcceleration(500); // Acceleration in steps/second^2
}

void loop() {
  // Calculate the steps for 180 degrees
  int stepsFor180 = stepsPerRevolution / 2; // 180 degrees

  // Rotate both motors 180 degrees forward
  leftStepper.moveTo(stepsFor180);
  rightStepper.moveTo(stepsFor180);

  // Run both motors to their target positions
  while (leftStepper.distanceToGo() != 0 || rightStepper.distanceToGo() != 0) {
    leftStepper.run();
    rightStepper.run();
  }

  delay(1000); // Pause for 1 second

  // Rotate both motors back to their original positions
  leftStepper.moveTo(0);
  rightStepper.moveTo(0);

  // Run both motors back to their target positions
  while (leftStepper.distanceToGo() != 0 || rightStepper.distanceToGo() != 0) {
    leftStepper.run();
    rightStepper.run();
  }

  delay(1000); // Pause for 1 second
}
