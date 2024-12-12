// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_interface_pkg:msg/PointsList.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__BUILDER_HPP_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_interface_pkg/msg/detail/points_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_interface_pkg
{

namespace msg
{

namespace builder
{

class Init_PointsList_points_list
{
public:
  Init_PointsList_points_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_interface_pkg::msg::PointsList points_list(::camera_interface_pkg::msg::PointsList::_points_list_type arg)
  {
    msg_.points_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_interface_pkg::msg::PointsList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_interface_pkg::msg::PointsList>()
{
  return camera_interface_pkg::msg::builder::Init_PointsList_points_list();
}

}  // namespace camera_interface_pkg

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__BUILDER_HPP_
