// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_interface_pkg:srv/SetCalibration.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__SRV__DETAIL__SET_CALIBRATION__STRUCT_H_
#define CAMERA_INTERFACE_PKG__SRV__DETAIL__SET_CALIBRATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetCalibration in the package camera_interface_pkg.
typedef struct camera_interface_pkg__srv__SetCalibration_Request
{
  /// True if calibration is successful, False otherwise
  bool calibrated;
} camera_interface_pkg__srv__SetCalibration_Request;

// Struct for a sequence of camera_interface_pkg__srv__SetCalibration_Request.
typedef struct camera_interface_pkg__srv__SetCalibration_Request__Sequence
{
  camera_interface_pkg__srv__SetCalibration_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface_pkg__srv__SetCalibration_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetCalibration in the package camera_interface_pkg.
typedef struct camera_interface_pkg__srv__SetCalibration_Response
{
  /// Returns whether the operation was successful
  bool success;
} camera_interface_pkg__srv__SetCalibration_Response;

// Struct for a sequence of camera_interface_pkg__srv__SetCalibration_Response.
typedef struct camera_interface_pkg__srv__SetCalibration_Response__Sequence
{
  camera_interface_pkg__srv__SetCalibration_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface_pkg__srv__SetCalibration_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE_PKG__SRV__DETAIL__SET_CALIBRATION__STRUCT_H_
