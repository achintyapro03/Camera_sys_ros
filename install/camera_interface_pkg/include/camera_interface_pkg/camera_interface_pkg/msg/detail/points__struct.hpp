// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_interface_pkg:msg/Points.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS__STRUCT_HPP_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__camera_interface_pkg__msg__Points __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface_pkg__msg__Points __declspec(deprecated)
#endif

namespace camera_interface_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Points_
{
  using Type = Points_<ContainerAllocator>;

  explicit Points_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit Points_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_interface_pkg::msg::Points_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface_pkg::msg::Points_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface_pkg::msg::Points_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface_pkg::msg::Points_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::msg::Points_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::msg::Points_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::msg::Points_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::msg::Points_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface_pkg::msg::Points_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface_pkg::msg::Points_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface_pkg__msg__Points
    std::shared_ptr<camera_interface_pkg::msg::Points_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface_pkg__msg__Points
    std::shared_ptr<camera_interface_pkg::msg::Points_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Points_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Points_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Points_

// alias to use template instance with default allocator
using Points =
  camera_interface_pkg::msg::Points_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace camera_interface_pkg

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS__STRUCT_HPP_
