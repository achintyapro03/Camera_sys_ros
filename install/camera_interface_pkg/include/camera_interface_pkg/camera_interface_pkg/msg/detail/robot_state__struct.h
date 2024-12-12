// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_interface_pkg:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotState in the package camera_interface_pkg.
typedef struct camera_interface_pkg__msg__RobotState
{
  bool on_off;
  double n20_angle1;
  double n20_angle2;
  double n20_angle3;
  double n20_angle4;
  double n20_angle5;
  double wrist_servo_angle;
  double thumb_servo_angle;
  double wrist_stepper_angle;
} camera_interface_pkg__msg__RobotState;

// Struct for a sequence of camera_interface_pkg__msg__RobotState.
typedef struct camera_interface_pkg__msg__RobotState__Sequence
{
  camera_interface_pkg__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface_pkg__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
