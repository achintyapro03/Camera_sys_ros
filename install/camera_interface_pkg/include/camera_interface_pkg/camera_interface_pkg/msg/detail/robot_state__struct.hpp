// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_interface_pkg:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__camera_interface_pkg__msg__RobotState __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface_pkg__msg__RobotState __declspec(deprecated)
#endif

namespace camera_interface_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotState_
{
  using Type = RobotState_<ContainerAllocator>;

  explicit RobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->on_off = false;
      this->n20_angle1 = 0.0;
      this->n20_angle2 = 0.0;
      this->n20_angle3 = 0.0;
      this->n20_angle4 = 0.0;
      this->n20_angle5 = 0.0;
      this->wrist_servo_angle = 0.0;
      this->thumb_servo_angle = 0.0;
      this->wrist_stepper_angle = 0.0;
    }
  }

  explicit RobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->on_off = false;
      this->n20_angle1 = 0.0;
      this->n20_angle2 = 0.0;
      this->n20_angle3 = 0.0;
      this->n20_angle4 = 0.0;
      this->n20_angle5 = 0.0;
      this->wrist_servo_angle = 0.0;
      this->thumb_servo_angle = 0.0;
      this->wrist_stepper_angle = 0.0;
    }
  }

  // field types and members
  using _on_off_type =
    bool;
  _on_off_type on_off;
  using _n20_angle1_type =
    double;
  _n20_angle1_type n20_angle1;
  using _n20_angle2_type =
    double;
  _n20_angle2_type n20_angle2;
  using _n20_angle3_type =
    double;
  _n20_angle3_type n20_angle3;
  using _n20_angle4_type =
    double;
  _n20_angle4_type n20_angle4;
  using _n20_angle5_type =
    double;
  _n20_angle5_type n20_angle5;
  using _wrist_servo_angle_type =
    double;
  _wrist_servo_angle_type wrist_servo_angle;
  using _thumb_servo_angle_type =
    double;
  _thumb_servo_angle_type thumb_servo_angle;
  using _wrist_stepper_angle_type =
    double;
  _wrist_stepper_angle_type wrist_stepper_angle;

  // setters for named parameter idiom
  Type & set__on_off(
    const bool & _arg)
  {
    this->on_off = _arg;
    return *this;
  }
  Type & set__n20_angle1(
    const double & _arg)
  {
    this->n20_angle1 = _arg;
    return *this;
  }
  Type & set__n20_angle2(
    const double & _arg)
  {
    this->n20_angle2 = _arg;
    return *this;
  }
  Type & set__n20_angle3(
    const double & _arg)
  {
    this->n20_angle3 = _arg;
    return *this;
  }
  Type & set__n20_angle4(
    const double & _arg)
  {
    this->n20_angle4 = _arg;
    return *this;
  }
  Type & set__n20_angle5(
    const double & _arg)
  {
    this->n20_angle5 = _arg;
    return *this;
  }
  Type & set__wrist_servo_angle(
    const double & _arg)
  {
    this->wrist_servo_angle = _arg;
    return *this;
  }
  Type & set__thumb_servo_angle(
    const double & _arg)
  {
    this->thumb_servo_angle = _arg;
    return *this;
  }
  Type & set__wrist_stepper_angle(
    const double & _arg)
  {
    this->wrist_stepper_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_interface_pkg::msg::RobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface_pkg::msg::RobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface_pkg::msg::RobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface_pkg::msg::RobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::msg::RobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::msg::RobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::msg::RobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::msg::RobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface_pkg::msg::RobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface_pkg::msg::RobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface_pkg__msg__RobotState
    std::shared_ptr<camera_interface_pkg::msg::RobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface_pkg__msg__RobotState
    std::shared_ptr<camera_interface_pkg::msg::RobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotState_ & other) const
  {
    if (this->on_off != other.on_off) {
      return false;
    }
    if (this->n20_angle1 != other.n20_angle1) {
      return false;
    }
    if (this->n20_angle2 != other.n20_angle2) {
      return false;
    }
    if (this->n20_angle3 != other.n20_angle3) {
      return false;
    }
    if (this->n20_angle4 != other.n20_angle4) {
      return false;
    }
    if (this->n20_angle5 != other.n20_angle5) {
      return false;
    }
    if (this->wrist_servo_angle != other.wrist_servo_angle) {
      return false;
    }
    if (this->thumb_servo_angle != other.thumb_servo_angle) {
      return false;
    }
    if (this->wrist_stepper_angle != other.wrist_stepper_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotState_

// alias to use template instance with default allocator
using RobotState =
  camera_interface_pkg::msg::RobotState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace camera_interface_pkg

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
