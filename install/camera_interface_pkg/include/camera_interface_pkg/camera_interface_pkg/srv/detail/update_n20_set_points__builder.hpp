// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_interface_pkg:srv/UpdateN20SetPoints.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__BUILDER_HPP_
#define CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_interface_pkg/srv/detail/update_n20_set_points__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_interface_pkg
{

namespace srv
{

namespace builder
{

class Init_UpdateN20SetPoints_Request_setpoints
{
public:
  Init_UpdateN20SetPoints_Request_setpoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_interface_pkg::srv::UpdateN20SetPoints_Request setpoints(::camera_interface_pkg::srv::UpdateN20SetPoints_Request::_setpoints_type arg)
  {
    msg_.setpoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_interface_pkg::srv::UpdateN20SetPoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_interface_pkg::srv::UpdateN20SetPoints_Request>()
{
  return camera_interface_pkg::srv::builder::Init_UpdateN20SetPoints_Request_setpoints();
}

}  // namespace camera_interface_pkg


namespace camera_interface_pkg
{

namespace srv
{

namespace builder
{

class Init_UpdateN20SetPoints_Response_success
{
public:
  Init_UpdateN20SetPoints_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_interface_pkg::srv::UpdateN20SetPoints_Response success(::camera_interface_pkg::srv::UpdateN20SetPoints_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_interface_pkg::srv::UpdateN20SetPoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_interface_pkg::srv::UpdateN20SetPoints_Response>()
{
  return camera_interface_pkg::srv::builder::Init_UpdateN20SetPoints_Response_success();
}

}  // namespace camera_interface_pkg

#endif  // CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__BUILDER_HPP_
