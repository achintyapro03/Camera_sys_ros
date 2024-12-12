// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_interface_pkg:msg/Points.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS__BUILDER_HPP_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_interface_pkg/msg/detail/points__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_interface_pkg
{

namespace msg
{

namespace builder
{

class Init_Points_y
{
public:
  explicit Init_Points_y(::camera_interface_pkg::msg::Points & msg)
  : msg_(msg)
  {}
  ::camera_interface_pkg::msg::Points y(::camera_interface_pkg::msg::Points::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_interface_pkg::msg::Points msg_;
};

class Init_Points_x
{
public:
  Init_Points_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Points_y x(::camera_interface_pkg::msg::Points::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Points_y(msg_);
  }

private:
  ::camera_interface_pkg::msg::Points msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_interface_pkg::msg::Points>()
{
  return camera_interface_pkg::msg::builder::Init_Points_x();
}

}  // namespace camera_interface_pkg

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS__BUILDER_HPP_
