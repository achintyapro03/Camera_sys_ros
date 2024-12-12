// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_interface_pkg:msg/PointsList.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__STRUCT_H_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points_list'
#include "camera_interface_pkg/msg/detail/points__struct.h"

/// Struct defined in msg/PointsList in the package camera_interface_pkg.
typedef struct camera_interface_pkg__msg__PointsList
{
  camera_interface_pkg__msg__Points__Sequence points_list;
} camera_interface_pkg__msg__PointsList;

// Struct for a sequence of camera_interface_pkg__msg__PointsList.
typedef struct camera_interface_pkg__msg__PointsList__Sequence
{
  camera_interface_pkg__msg__PointsList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface_pkg__msg__PointsList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__STRUCT_H_
