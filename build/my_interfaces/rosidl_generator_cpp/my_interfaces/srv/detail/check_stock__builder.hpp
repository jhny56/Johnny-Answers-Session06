// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/CheckStock.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__SRV__DETAIL__CHECK_STOCK__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__CHECK_STOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/check_stock__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckStock_Request_item_name
{
public:
  Init_CheckStock_Request_item_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::CheckStock_Request item_name(::my_interfaces::srv::CheckStock_Request::_item_name_type arg)
  {
    msg_.item_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::CheckStock_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::CheckStock_Request>()
{
  return my_interfaces::srv::builder::Init_CheckStock_Request_item_name();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckStock_Response_message
{
public:
  explicit Init_CheckStock_Response_message(::my_interfaces::srv::CheckStock_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::CheckStock_Response message(::my_interfaces::srv::CheckStock_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::CheckStock_Response msg_;
};

class Init_CheckStock_Response_stock_level
{
public:
  explicit Init_CheckStock_Response_stock_level(::my_interfaces::srv::CheckStock_Response & msg)
  : msg_(msg)
  {}
  Init_CheckStock_Response_message stock_level(::my_interfaces::srv::CheckStock_Response::_stock_level_type arg)
  {
    msg_.stock_level = std::move(arg);
    return Init_CheckStock_Response_message(msg_);
  }

private:
  ::my_interfaces::srv::CheckStock_Response msg_;
};

class Init_CheckStock_Response_success
{
public:
  Init_CheckStock_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckStock_Response_stock_level success(::my_interfaces::srv::CheckStock_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CheckStock_Response_stock_level(msg_);
  }

private:
  ::my_interfaces::srv::CheckStock_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::CheckStock_Response>()
{
  return my_interfaces::srv::builder::Init_CheckStock_Response_success();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__CHECK_STOCK__BUILDER_HPP_
