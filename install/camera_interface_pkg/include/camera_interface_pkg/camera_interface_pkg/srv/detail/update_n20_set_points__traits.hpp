// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_interface_pkg:srv/UpdateN20SetPoints.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__TRAITS_HPP_
#define CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_interface_pkg/srv/detail/update_n20_set_points__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace camera_interface_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const UpdateN20SetPoints_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: setpoints
  {
    if (msg.setpoints.size() == 0) {
      out << "setpoints: []";
    } else {
      out << "setpoints: [";
      size_t pending_items = msg.setpoints.size();
      for (auto item : msg.setpoints) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const UpdateN20SetPoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: setpoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.setpoints.size() == 0) {
      out << "setpoints: []\n";
    } else {
      out << "setpoints:\n";
      for (auto item : msg.setpoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UpdateN20SetPoints_Request & msg, bool use_flow_style = false)
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
  const camera_interface_pkg::srv::UpdateN20SetPoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_interface_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_interface_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_interface_pkg::srv::UpdateN20SetPoints_Request & msg)
{
  return camera_interface_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_interface_pkg::srv::UpdateN20SetPoints_Request>()
{
  return "camera_interface_pkg::srv::UpdateN20SetPoints_Request";
}

template<>
inline const char * name<camera_interface_pkg::srv::UpdateN20SetPoints_Request>()
{
  return "camera_interface_pkg/srv/UpdateN20SetPoints_Request";
}

template<>
struct has_fixed_size<camera_interface_pkg::srv::UpdateN20SetPoints_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_interface_pkg::srv::UpdateN20SetPoints_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_interface_pkg::srv::UpdateN20SetPoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace camera_interface_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const UpdateN20SetPoints_Response & msg,
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
  const UpdateN20SetPoints_Response & msg,
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

inline std::string to_yaml(const UpdateN20SetPoints_Response & msg, bool use_flow_style = false)
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
  const camera_interface_pkg::srv::UpdateN20SetPoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_interface_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_interface_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_interface_pkg::srv::UpdateN20SetPoints_Response & msg)
{
  return camera_interface_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_interface_pkg::srv::UpdateN20SetPoints_Response>()
{
  return "camera_interface_pkg::srv::UpdateN20SetPoints_Response";
}

template<>
inline const char * name<camera_interface_pkg::srv::UpdateN20SetPoints_Response>()
{
  return "camera_interface_pkg/srv/UpdateN20SetPoints_Response";
}

template<>
struct has_fixed_size<camera_interface_pkg::srv::UpdateN20SetPoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<camera_interface_pkg::srv::UpdateN20SetPoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<camera_interface_pkg::srv::UpdateN20SetPoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<camera_interface_pkg::srv::UpdateN20SetPoints>()
{
  return "camera_interface_pkg::srv::UpdateN20SetPoints";
}

template<>
inline const char * name<camera_interface_pkg::srv::UpdateN20SetPoints>()
{
  return "camera_interface_pkg/srv/UpdateN20SetPoints";
}

template<>
struct has_fixed_size<camera_interface_pkg::srv::UpdateN20SetPoints>
  : std::integral_constant<
    bool,
    has_fixed_size<camera_interface_pkg::srv::UpdateN20SetPoints_Request>::value &&
    has_fixed_size<camera_interface_pkg::srv::UpdateN20SetPoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<camera_interface_pkg::srv::UpdateN20SetPoints>
  : std::integral_constant<
    bool,
    has_bounded_size<camera_interface_pkg::srv::UpdateN20SetPoints_Request>::value &&
    has_bounded_size<camera_interface_pkg::srv::UpdateN20SetPoints_Response>::value
  >
{
};

template<>
struct is_service<camera_interface_pkg::srv::UpdateN20SetPoints>
  : std::true_type
{
};

template<>
struct is_service_request<camera_interface_pkg::srv::UpdateN20SetPoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<camera_interface_pkg::srv::UpdateN20SetPoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__TRAITS_HPP_
