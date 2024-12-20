// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_interface_pkg:msg/CoordinatesList.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__COORDINATES_LIST__TRAITS_HPP_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__COORDINATES_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_interface_pkg/msg/detail/coordinates_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'coordinates_list'
#include "camera_interface_pkg/msg/detail/coordinates__traits.hpp"

namespace camera_interface_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const CoordinatesList & msg,
  std::ostream & out)
{
  out << "{";
  // member: coordinates_list
  {
    if (msg.coordinates_list.size() == 0) {
      out << "coordinates_list: []";
    } else {
      out << "coordinates_list: [";
      size_t pending_items = msg.coordinates_list.size();
      for (auto item : msg.coordinates_list) {
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
  const CoordinatesList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coordinates_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coordinates_list.size() == 0) {
      out << "coordinates_list: []\n";
    } else {
      out << "coordinates_list:\n";
      for (auto item : msg.coordinates_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CoordinatesList & msg, bool use_flow_style = false)
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
  const camera_interface_pkg::msg::CoordinatesList & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_interface_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_interface_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const camera_interface_pkg::msg::CoordinatesList & msg)
{
  return camera_interface_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<camera_interface_pkg::msg::CoordinatesList>()
{
  return "camera_interface_pkg::msg::CoordinatesList";
}

template<>
inline const char * name<camera_interface_pkg::msg::CoordinatesList>()
{
  return "camera_interface_pkg/msg/CoordinatesList";
}

template<>
struct has_fixed_size<camera_interface_pkg::msg::CoordinatesList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_interface_pkg::msg::CoordinatesList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_interface_pkg::msg::CoordinatesList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__COORDINATES_LIST__TRAITS_HPP_
