// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_interface_pkg:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__COORDINATES__STRUCT_H_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__COORDINATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Coordinates in the package camera_interface_pkg.
typedef struct camera_interface_pkg__msg__Coordinates
{
  int32_t node_id;
  double x;
  double y;
  double z;
} camera_interface_pkg__msg__Coordinates;

// Struct for a sequence of camera_interface_pkg__msg__Coordinates.
typedef struct camera_interface_pkg__msg__Coordinates__Sequence
{
  camera_interface_pkg__msg__Coordinates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface_pkg__msg__Coordinates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__COORDINATES__STRUCT_H_
