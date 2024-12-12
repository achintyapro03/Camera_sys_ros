// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_interface_pkg:srv/SetCalibration.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__SRV__DETAIL__SET_CALIBRATION__STRUCT_HPP_
#define CAMERA_INTERFACE_PKG__SRV__DETAIL__SET_CALIBRATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__camera_interface_pkg__srv__SetCalibration_Request __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface_pkg__srv__SetCalibration_Request __declspec(deprecated)
#endif

namespace camera_interface_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCalibration_Request_
{
  using Type = SetCalibration_Request_<ContainerAllocator>;

  explicit SetCalibration_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibrated = false;
    }
  }

  explicit SetCalibration_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibrated = false;
    }
  }

  // field types and members
  using _calibrated_type =
    bool;
  _calibrated_type calibrated;

  // setters for named parameter idiom
  Type & set__calibrated(
    const bool & _arg)
  {
    this->calibrated = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_interface_pkg::srv::SetCalibration_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface_pkg::srv::SetCalibration_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface_pkg::srv::SetCalibration_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface_pkg::srv::SetCalibration_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::srv::SetCalibration_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::srv::SetCalibration_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::srv::SetCalibration_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::srv::SetCalibration_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface_pkg::srv::SetCalibration_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface_pkg::srv::SetCalibration_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface_pkg__srv__SetCalibration_Request
    std::shared_ptr<camera_interface_pkg::srv::SetCalibration_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface_pkg__srv__SetCalibration_Request
    std::shared_ptr<camera_interface_pkg::srv::SetCalibration_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCalibration_Request_ & other) const
  {
    if (this->calibrated != other.calibrated) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCalibration_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCalibration_Request_

// alias to use template instance with default allocator
using SetCalibration_Request =
  camera_interface_pkg::srv::SetCalibration_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_interface_pkg


#ifndef _WIN32
# define DEPRECATED__camera_interface_pkg__srv__SetCalibration_Response __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface_pkg__srv__SetCalibration_Response __declspec(deprecated)
#endif

namespace camera_interface_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCalibration_Response_
{
  using Type = SetCalibration_Response_<ContainerAllocator>;

  explicit SetCalibration_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetCalibration_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    camera_interface_pkg::srv::SetCalibration_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface_pkg::srv::SetCalibration_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface_pkg::srv::SetCalibration_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface_pkg::srv::SetCalibration_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::srv::SetCalibration_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::srv::SetCalibration_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface_pkg::srv::SetCalibration_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface_pkg::srv::SetCalibration_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface_pkg::srv::SetCalibration_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface_pkg::srv::SetCalibration_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface_pkg__srv__SetCalibration_Response
    std::shared_ptr<camera_interface_pkg::srv::SetCalibration_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface_pkg__srv__SetCalibration_Response
    std::shared_ptr<camera_interface_pkg::srv::SetCalibration_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCalibration_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCalibration_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCalibration_Response_

// alias to use template instance with default allocator
using SetCalibration_Response =
  camera_interface_pkg::srv::SetCalibration_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_interface_pkg

namespace camera_interface_pkg
{

namespace srv
{

struct SetCalibration
{
  using Request = camera_interface_pkg::srv::SetCalibration_Request;
  using Response = camera_interface_pkg::srv::SetCalibration_Response;
};

}  // namespace srv

}  // namespace camera_interface_pkg

#endif  // CAMERA_INTERFACE_PKG__SRV__DETAIL__SET_CALIBRATION__STRUCT_HPP_
