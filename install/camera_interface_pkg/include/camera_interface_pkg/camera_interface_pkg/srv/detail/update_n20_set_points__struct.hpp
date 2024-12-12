// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_interface_pkg:srv/UpdateN20SetPoints.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__STRUCT_HPP_
#define CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__camera_interface_pkg__srv__UpdateN20SetPoints_Request __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface_pkg__srv__UpdateN20SetPoints_Request __declspec(deprecated)
#endif

namespace camera_interface_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateN20SetPoints_Request_
{
  using Type = UpdateN20SetPoints_Request_<ContainerAllocator>;

  explicit UpdateN20SetPoints_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit UpdateN20SetPoints_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _setpoints_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _setpoints_type setpoints;

  // setters for named parameter idiom
  Type & set__setpoints(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->setpoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_interface_pkg::srv::UpdateN20SetPoints_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface_pkg::srv::UpdateN20SetPoints_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::srv::UpdateN20SetPoints_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::srv::UpdateN20SetPoints_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface_pkg__srv__UpdateN20SetPoints_Request
    std::shared_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface_pkg__srv__UpdateN20SetPoints_Request
    std::shared_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateN20SetPoints_Request_ & other) const
  {
    if (this->setpoints != other.setpoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateN20SetPoints_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateN20SetPoints_Request_

// alias to use template instance with default allocator
using UpdateN20SetPoints_Request =
  camera_interface_pkg::srv::UpdateN20SetPoints_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_interface_pkg


#ifndef _WIN32
# define DEPRECATED__camera_interface_pkg__srv__UpdateN20SetPoints_Response __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface_pkg__srv__UpdateN20SetPoints_Response __declspec(deprecated)
#endif

namespace camera_interface_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateN20SetPoints_Response_
{
  using Type = UpdateN20SetPoints_Response_<ContainerAllocator>;

  explicit UpdateN20SetPoints_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit UpdateN20SetPoints_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_interface_pkg::srv::UpdateN20SetPoints_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface_pkg::srv::UpdateN20SetPoints_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::srv::UpdateN20SetPoints_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::srv::UpdateN20SetPoints_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface_pkg__srv__UpdateN20SetPoints_Response
    std::shared_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface_pkg__srv__UpdateN20SetPoints_Response
    std::shared_ptr<camera_interface_pkg::srv::UpdateN20SetPoints_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateN20SetPoints_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateN20SetPoints_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateN20SetPoints_Response_

// alias to use template instance with default allocator
using UpdateN20SetPoints_Response =
  camera_interface_pkg::srv::UpdateN20SetPoints_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_interface_pkg

namespace camera_interface_pkg
{

namespace srv
{

struct UpdateN20SetPoints
{
  using Request = camera_interface_pkg::srv::UpdateN20SetPoints_Request;
  using Response = camera_interface_pkg::srv::UpdateN20SetPoints_Response;
};

}  // namespace srv

}  // namespace camera_interface_pkg

#endif  // CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__STRUCT_HPP_
