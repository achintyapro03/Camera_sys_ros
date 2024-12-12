// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_interface_pkg:srv/UpdateN20SetPoints.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__STRUCT_H_
#define CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'setpoints'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/UpdateN20SetPoints in the package camera_interface_pkg.
typedef struct camera_interface_pkg__srv__UpdateN20SetPoints_Request
{
  rosidl_runtime_c__int32__Sequence setpoints;
} camera_interface_pkg__srv__UpdateN20SetPoints_Request;

// Struct for a sequence of camera_interface_pkg__srv__UpdateN20SetPoints_Request.
typedef struct camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence
{
  camera_interface_pkg__srv__UpdateN20SetPoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/UpdateN20SetPoints in the package camera_interface_pkg.
typedef struct camera_interface_pkg__srv__UpdateN20SetPoints_Response
{
  bool success;
} camera_interface_pkg__srv__UpdateN20SetPoints_Response;

// Struct for a sequence of camera_interface_pkg__srv__UpdateN20SetPoints_Response.
typedef struct camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence
{
  camera_interface_pkg__srv__UpdateN20SetPoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__STRUCT_H_
