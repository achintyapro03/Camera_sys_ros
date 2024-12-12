// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_interface_pkg:msg/Points.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS__TRAITS_HPP_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_interface_pkg/msg/detail/points__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace camera_interface_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Points & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Points & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Points & msg, bool use_flow_style = false)
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
  const camera_interface_pkg::msg::Points & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_interface_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_interface_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const camera_interface_pkg::msg::Points & msg)
{
  return camera_interface_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<camera_interface_pkg::msg::Points>()
{
  return "camera_interface_pkg::msg::Points";
}

template<>
inline const char * name<camera_interface_pkg::msg::Points>()
{
  return "camera_interface_pkg/msg/Points";
}

template<>
struct has_fixed_size<camera_interface_pkg::msg::Points>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<camera_interface_pkg::msg::Points>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<camera_interface_pkg::msg::Points>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS__TRAITS_HPP_
