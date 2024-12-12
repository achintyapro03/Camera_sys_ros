// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_interface_pkg:msg/PointsList.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__TRAITS_HPP_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_interface_pkg/msg/detail/points_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points_list'
#include "camera_interface_pkg/msg/detail/points__traits.hpp"

namespace camera_interface_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointsList & msg,
  std::ostream & out)
{
  out << "{";
  // member: points_list
  {
    if (msg.points_list.size() == 0) {
      out << "points_list: []";
    } else {
      out << "points_list: [";
      size_t pending_items = msg.points_list.size();
      for (auto item : msg.points_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PointsList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: points_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points_list.size() == 0) {
      out << "points_list: []\n";
    } else {
      out << "points_list:\n";
      for (auto item : msg.points_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointsList & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace camera_interface_pkg

namespace rosidl_generator_traits
{

[[deprecated("use camera_interface_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_interface_pkg::msg::PointsList & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_interface_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_interface_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const camera_interface_pkg::msg::PointsList & msg)
{
  return camera_interface_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<camera_interface_pkg::msg::PointsList>()
{
  return "camera_interface_pkg::msg::PointsList";
}

template<>
inline const char * name<camera_interface_pkg::msg::PointsList>()
{
  return "camera_interface_pkg/msg/PointsList";
}

template<>
struct has_fixed_size<camera_interface_pkg::msg::PointsList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_interface_pkg::msg::PointsList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_interface_pkg::msg::PointsList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__TRAITS_HPP_
