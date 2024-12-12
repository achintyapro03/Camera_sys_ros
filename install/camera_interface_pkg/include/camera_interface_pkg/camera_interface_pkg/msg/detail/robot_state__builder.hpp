// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_interface_pkg:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_interface_pkg/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_interface_pkg
{

namespace msg
{

namespace builder
{

class Init_RobotState_wrist_stepper_angle
{
public:
  explicit Init_RobotState_wrist_stepper_angle(::camera_interface_pkg::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::camera_interface_pkg::msg::RobotState wrist_stepper_angle(::camera_interface_pkg::msg::RobotState::_wrist_stepper_angle_type arg)
  {
    msg_.wrist_stepper_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_interface_pkg::msg::RobotState msg_;
};

class Init_RobotState_thumb_servo_angle
{
public:
  explicit Init_RobotState_thumb_servo_angle(::camera_interface_pkg::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_wrist_stepper_angle thumb_servo_angle(::camera_interface_pkg::msg::RobotState::_thumb_servo_angle_type arg)
  {
    msg_.thumb_servo_angle = std::move(arg);
    return Init_RobotState_wrist_stepper_angle(msg_);
  }

private:
  ::camera_interface_pkg::msg::RobotState msg_;
};

class Init_RobotState_wrist_servo_angle
{
public:
  explicit Init_RobotState_wrist_servo_angle(::camera_interface_pkg::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_thumb_servo_angle wrist_servo_angle(::camera_interface_pkg::msg::RobotState::_wrist_servo_angle_type arg)
  {
    msg_.wrist_servo_angle = std::move(arg);
    return Init_RobotState_thumb_servo_angle(msg_);
  }

private:
  ::camera_interface_pkg::msg::RobotState msg_;
};

class Init_RobotState_n20_angle5
{
public:
  explicit Init_RobotState_n20_angle5(::camera_interface_pkg::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_wrist_servo_angle n20_angle5(::camera_interface_pkg::msg::RobotState::_n20_angle5_type arg)
  {
    msg_.n20_angle5 = std::move(arg);
    return Init_RobotState_wrist_servo_angle(msg_);
  }

private:
  ::camera_interface_pkg::msg::RobotState msg_;
};

class Init_RobotState_n20_angle4
{
public:
  explicit Init_RobotState_n20_angle4(::camera_interface_pkg::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_n20_angle5 n20_angle4(::camera_interface_pkg::msg::RobotState::_n20_angle4_type arg)
  {
    msg_.n20_angle4 = std::move(arg);
    return Init_RobotState_n20_angle5(msg_);
  }

private:
  ::camera_interface_pkg::msg::RobotState msg_;
};

class Init_RobotState_n20_angle3
{
public:
  explicit Init_RobotState_n20_angle3(::camera_interface_pkg::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_n20_angle4 n20_angle3(::camera_interface_pkg::msg::RobotState::_n20_angle3_type arg)
  {
    msg_.n20_angle3 = std::move(arg);
    return Init_RobotState_n20_angle4(msg_);
  }

private:
  ::camera_interface_pkg::msg::RobotState msg_;
};

class Init_RobotState_n20_angle2
{
public:
  explicit Init_RobotState_n20_angle2(::camera_interface_pkg::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_n20_angle3 n20_angle2(::camera_interface_pkg::msg::RobotState::_n20_angle2_type arg)
  {
    msg_.n20_angle2 = std::move(arg);
    return Init_RobotState_n20_angle3(msg_);
  }

private:
  ::camera_interface_pkg::msg::RobotState msg_;
};

class Init_RobotState_n20_angle1
{
public:
  explicit Init_RobotState_n20_angle1(::camera_interface_pkg::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_n20_angle2 n20_angle1(::camera_interface_pkg::msg::RobotState::_n20_angle1_type arg)
  {
    msg_.n20_angle1 = std::move(arg);
    return Init_RobotState_n20_angle2(msg_);
  }

private:
  ::camera_interface_pkg::msg::RobotState msg_;
};

class Init_RobotState_on_off
{
public:
  Init_RobotState_on_off()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_n20_angle1 on_off(::camera_interface_pkg::msg::RobotState::_on_off_type arg)
  {
    msg_.on_off = std::move(arg);
    return Init_RobotState_n20_angle1(msg_);
  }

private:
  ::camera_interface_pkg::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_interface_pkg::msg::RobotState>()
{
  return camera_interface_pkg::msg::builder::Init_RobotState_on_off();
}

}  // namespace camera_interface_pkg

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
