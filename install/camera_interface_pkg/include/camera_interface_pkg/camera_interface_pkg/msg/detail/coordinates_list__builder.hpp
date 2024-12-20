// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_interface_pkg:msg/CoordinatesList.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__COORDINATES_LIST__BUILDER_HPP_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__COORDINATES_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_interface_pkg/msg/detail/coordinates_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_interface_pkg
{

namespace msg
{

namespace builder
{

class Init_CoordinatesList_coordinates_list
{
public:
  Init_CoordinatesList_coordinates_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_interface_pkg::msg::CoordinatesList coordinates_list(::camera_interface_pkg::msg::CoordinatesList::_coordinates_list_type arg)
  {
    msg_.coordinates_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_interface_pkg::msg::CoordinatesList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_interface_pkg::msg::CoordinatesList>()
{
  return camera_interface_pkg::msg::builder::Init_CoordinatesList_coordinates_list();
}

}  // namespace camera_interface_pkg

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__COORDINATES_LIST__BUILDER_HPP_
