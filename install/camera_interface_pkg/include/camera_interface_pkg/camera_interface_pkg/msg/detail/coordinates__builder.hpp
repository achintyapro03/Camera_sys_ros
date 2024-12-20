// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_interface_pkg:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__COORDINATES__BUILDER_HPP_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__COORDINATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_interface_pkg/msg/detail/coordinates__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_interface_pkg
{

namespace msg
{

namespace builder
{

class Init_Coordinates_z
{
public:
  explicit Init_Coordinates_z(::camera_interface_pkg::msg::Coordinates & msg)
  : msg_(msg)
  {}
  ::camera_interface_pkg::msg::Coordinates z(::camera_interface_pkg::msg::Coordinates::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_interface_pkg::msg::Coordinates msg_;
};

class Init_Coordinates_y
{
public:
  explicit Init_Coordinates_y(::camera_interface_pkg::msg::Coordinates & msg)
  : msg_(msg)
  {}
  Init_Coordinates_z y(::camera_interface_pkg::msg::Coordinates::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Coordinates_z(msg_);
  }

private:
  ::camera_interface_pkg::msg::Coordinates msg_;
};

class Init_Coordinates_x
{
public:
  explicit Init_Coordinates_x(::camera_interface_pkg::msg::Coordinates & msg)
  : msg_(msg)
  {}
  Init_Coordinates_y x(::camera_interface_pkg::msg::Coordinates::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Coordinates_y(msg_);
  }

private:
  ::camera_interface_pkg::msg::Coordinates msg_;
};

class Init_Coordinates_node_id
{
public:
  Init_Coordinates_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinates_x node_id(::camera_interface_pkg::msg::Coordinates::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_Coordinates_x(msg_);
  }

private:
  ::camera_interface_pkg::msg::Coordinates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_interface_pkg::msg::Coordinates>()
{
  return camera_interface_pkg::msg::builder::Init_Coordinates_node_id();
}

}  // namespace camera_interface_pkg

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__COORDINATES__BUILDER_HPP_
