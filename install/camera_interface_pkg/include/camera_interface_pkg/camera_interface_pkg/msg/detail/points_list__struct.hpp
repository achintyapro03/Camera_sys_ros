// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_interface_pkg:msg/PointsList.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__STRUCT_HPP_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points_list'
#include "camera_interface_pkg/msg/detail/points__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__camera_interface_pkg__msg__PointsList __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface_pkg__msg__PointsList __declspec(deprecated)
#endif

namespace camera_interface_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointsList_
{
  using Type = PointsList_<ContainerAllocator>;

  explicit PointsList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PointsList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _points_list_type =
    std::vector<camera_interface_pkg::msg::Points_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<camera_interface_pkg::msg::Points_<ContainerAllocator>>>;
  _points_list_type points_list;

  // setters for named parameter idiom
  Type & set__points_list(
    const std::vector<camera_interface_pkg::msg::Points_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<camera_interface_pkg::msg::Points_<ContainerAllocator>>> & _arg)
  {
    this->points_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_interface_pkg::msg::PointsList_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface_pkg::msg::PointsList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface_pkg::msg::PointsList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface_pkg::msg::PointsList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::msg::PointsList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::msg::PointsList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::msg::PointsList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::msg::PointsList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface_pkg::msg::PointsList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface_pkg::msg::PointsList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface_pkg__msg__PointsList
    std::shared_ptr<camera_interface_pkg::msg::PointsList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface_pkg__msg__PointsList
    std::shared_ptr<camera_interface_pkg::msg::PointsList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointsList_ & other) const
  {
    if (this->points_list != other.points_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointsList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointsList_

// alias to use template instance with default allocator
using PointsList =
  camera_interface_pkg::msg::PointsList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace camera_interface_pkg

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__STRUCT_HPP_
