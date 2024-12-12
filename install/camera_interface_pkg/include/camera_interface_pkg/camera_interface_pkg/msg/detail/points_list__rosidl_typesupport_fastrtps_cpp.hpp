// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from camera_interface_pkg:msg/PointsList.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "camera_interface_pkg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "camera_interface_pkg/msg/detail/points_list__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace camera_interface_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_interface_pkg
cdr_serialize(
  const camera_interface_pkg::msg::PointsList & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_interface_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  camera_interface_pkg::msg::PointsList & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_interface_pkg
get_serialized_size(
  const camera_interface_pkg::msg::PointsList & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_interface_pkg
max_serialized_size_PointsList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace camera_interface_pkg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_interface_pkg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, camera_interface_pkg, msg, PointsList)();

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
