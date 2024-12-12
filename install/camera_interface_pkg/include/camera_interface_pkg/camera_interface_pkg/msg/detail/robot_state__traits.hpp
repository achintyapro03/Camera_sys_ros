// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_interface_pkg:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_interface_pkg/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace camera_interface_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: on_off
  {
    out << "on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.on_off, out);
    out << ", ";
  }

  // member: n20_angle1
  {
    out << "n20_angle1: ";
    rosidl_generator_traits::value_to_yaml(msg.n20_angle1, out);
    out << ", ";
  }

  // member: n20_angle2
  {
    out << "n20_angle2: ";
    rosidl_generator_traits::value_to_yaml(msg.n20_angle2, out);
    out << ", ";
  }

  // member: n20_angle3
  {
    out << "n20_angle3: ";
    rosidl_generator_traits::value_to_yaml(msg.n20_angle3, out);
    out << ", ";
  }

  // member: n20_angle4
  {
    out << "n20_angle4: ";
    rosidl_generator_traits::value_to_yaml(msg.n20_angle4, out);
    out << ", ";
  }

  // member: n20_angle5
  {
    out << "n20_angle5: ";
    rosidl_generator_traits::value_to_yaml(msg.n20_angle5, out);
    out << ", ";
  }

  // member: wrist_servo_angle
  {
    out << "wrist_servo_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_servo_angle, out);
    out << ", ";
  }

  // member: thumb_servo_angle
  {
    out << "thumb_servo_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.thumb_servo_angle, out);
    out << ", ";
  }

  // member: wrist_stepper_angle
  {
    out << "wrist_stepper_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_stepper_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: on_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.on_off, out);
    out << "\n";
  }

  // member: n20_angle1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n20_angle1: ";
    rosidl_generator_traits::value_to_yaml(msg.n20_angle1, out);
    out << "\n";
  }

  // member: n20_angle2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n20_angle2: ";
    rosidl_generator_traits::value_to_yaml(msg.n20_angle2, out);
    out << "\n";
  }

  // member: n20_angle3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n20_angle3: ";
    rosidl_generator_traits::value_to_yaml(msg.n20_angle3, out);
    out << "\n";
  }

  // member: n20_angle4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n20_angle4: ";
    rosidl_generator_traits::value_to_yaml(msg.n20_angle4, out);
    out << "\n";
  }

  // member: n20_angle5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n20_angle5: ";
    rosidl_generator_traits::value_to_yaml(msg.n20_angle5, out);
    out << "\n";
  }

  // member: wrist_servo_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_servo_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_servo_angle, out);
    out << "\n";
  }

  // member: thumb_servo_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thumb_servo_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.thumb_servo_angle, out);
    out << "\n";
  }

  // member: wrist_stepper_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_stepper_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_stepper_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotState & msg, bool use_flow_style = false)
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
  const camera_interface_pkg::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_interface_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_interface_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const camera_interface_pkg::msg::RobotState & msg)
{
  return camera_interface_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<camera_interface_pkg::msg::RobotState>()
{
  return "camera_interface_pkg::msg::RobotState";
}

template<>
inline const char * name<camera_interface_pkg::msg::RobotState>()
{
  return "camera_interface_pkg/msg/RobotState";
}

template<>
struct has_fixed_size<camera_interface_pkg::msg::RobotState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<camera_interface_pkg::msg::RobotState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<camera_interface_pkg::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
