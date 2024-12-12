// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_interface_pkg:srv/SetCalibration.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__SRV__DETAIL__SET_CALIBRATION__TRAITS_HPP_
#define CAMERA_INTERFACE_PKG__SRV__DETAIL__SET_CALIBRATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_interface_pkg/srv/detail/set_calibration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace camera_interface_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCalibration_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: calibrated
  {
    out << "calibrated: ";
    rosidl_generator_traits::value_to_yaml(msg.calibrated, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCalibration_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: calibrated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibrated: ";
    rosidl_generator_traits::value_to_yaml(msg.calibrated, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCalibration_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace camera_interface_pkg

namespace rosidl_generator_traits
{

[[deprecated("use camera_interface_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_interface_pkg::srv::SetCalibration_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_interface_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_interface_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_interface_pkg::srv::SetCalibration_Request & msg)
{
  return camera_interface_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_interface_pkg::srv::SetCalibration_Request>()
{
  return "camera_interface_pkg::srv::SetCalibration_Request";
}

template<>
inline const char * name<camera_interface_pkg::srv::SetCalibration_Request>()
{
  return "camera_interface_pkg/srv/SetCalibration_Request";
}

template<>
struct has_fixed_size<camera_interface_pkg::srv::SetCalibration_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<camera_interface_pkg::srv::SetCalibration_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<camera_interface_pkg::srv::SetCalibration_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace camera_interface_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCalibration_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCalibration_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCalibration_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace camera_interface_pkg

namespace rosidl_generator_traits
{

[[deprecated("use camera_interface_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_interface_pkg::srv::SetCalibration_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_interface_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_interface_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_interface_pkg::srv::SetCalibration_Response & msg)
{
  return camera_interface_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_interface_pkg::srv::SetCalibration_Response>()
{
  return "camera_interface_pkg::srv::SetCalibration_Response";
}

template<>
inline const char * name<camera_interface_pkg::srv::SetCalibration_Response>()
{
  return "camera_interface_pkg/srv/SetCalibration_Response";
}

template<>
struct has_fixed_size<camera_interface_pkg::srv::SetCalibration_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<camera_interface_pkg::srv::SetCalibration_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<camera_interface_pkg::srv::SetCalibration_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<camera_interface_pkg::srv::SetCalibration>()
{
  return "camera_interface_pkg::srv::SetCalibration";
}

template<>
inline const char * name<camera_interface_pkg::srv::SetCalibration>()
{
  return "camera_interface_pkg/srv/SetCalibration";
}

template<>
struct has_fixed_size<camera_interface_pkg::srv::SetCalibration>
  : std::integral_constant<
    bool,
    has_fixed_size<camera_interface_pkg::srv::SetCalibration_Request>::value &&
    has_fixed_size<camera_interface_pkg::srv::SetCalibration_Response>::value
  >
{
};

template<>
struct has_bounded_size<camera_interface_pkg::srv::SetCalibration>
  : std::integral_constant<
    bool,
    has_bounded_size<camera_interface_pkg::srv::SetCalibration_Request>::value &&
    has_bounded_size<camera_interface_pkg::srv::SetCalibration_Response>::value
  >
{
};

template<>
struct is_service<camera_interface_pkg::srv::SetCalibration>
  : std::true_type
{
};

template<>
struct is_service_request<camera_interface_pkg::srv::SetCalibration_Request>
  : std::true_type
{
};

template<>
struct is_service_response<camera_interface_pkg::srv::SetCalibration_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_INTERFACE_PKG__SRV__DETAIL__SET_CALIBRATION__TRAITS_HPP_
