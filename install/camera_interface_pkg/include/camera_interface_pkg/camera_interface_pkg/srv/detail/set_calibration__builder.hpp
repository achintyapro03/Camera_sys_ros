// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_interface_pkg:srv/SetCalibration.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__SRV__DETAIL__SET_CALIBRATION__BUILDER_HPP_
#define CAMERA_INTERFACE_PKG__SRV__DETAIL__SET_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_interface_pkg/srv/detail/set_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_interface_pkg
{

namespace srv
{

namespace builder
{

class Init_SetCalibration_Request_calibrated
{
public:
  Init_SetCalibration_Request_calibrated()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_interface_pkg::srv::SetCalibration_Request calibrated(::camera_interface_pkg::srv::SetCalibration_Request::_calibrated_type arg)
  {
    msg_.calibrated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_interface_pkg::srv::SetCalibration_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_interface_pkg::srv::SetCalibration_Request>()
{
  return camera_interface_pkg::srv::builder::Init_SetCalibration_Request_calibrated();
}

}  // namespace camera_interface_pkg


namespace camera_interface_pkg
{

namespace srv
{

namespace builder
{

class Init_SetCalibration_Response_success
{
public:
  Init_SetCalibration_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_interface_pkg::srv::SetCalibration_Response success(::camera_interface_pkg::srv::SetCalibration_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_interface_pkg::srv::SetCalibration_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_interface_pkg::srv::SetCalibration_Response>()
{
  return camera_interface_pkg::srv::builder::Init_SetCalibration_Response_success();
}

}  // namespace camera_interface_pkg

#endif  // CAMERA_INTERFACE_PKG__SRV__DETAIL__SET_CALIBRATION__BUILDER_HPP_
