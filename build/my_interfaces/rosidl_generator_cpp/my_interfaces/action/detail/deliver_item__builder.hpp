// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:action/DeliverItem.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__ACTION__DETAIL__DELIVER_ITEM__BUILDER_HPP_
#define MY_INTERFACES__ACTION__DETAIL__DELIVER_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/action/detail/deliver_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliverItem_Goal_quantity
{
public:
  explicit Init_DeliverItem_Goal_quantity(::my_interfaces::action::DeliverItem_Goal & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::DeliverItem_Goal quantity(::my_interfaces::action::DeliverItem_Goal::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_Goal msg_;
};

class Init_DeliverItem_Goal_item_name
{
public:
  Init_DeliverItem_Goal_item_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliverItem_Goal_quantity item_name(::my_interfaces::action::DeliverItem_Goal::_item_name_type arg)
  {
    msg_.item_name = std::move(arg);
    return Init_DeliverItem_Goal_quantity(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::DeliverItem_Goal>()
{
  return my_interfaces::action::builder::Init_DeliverItem_Goal_item_name();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliverItem_Result_message
{
public:
  explicit Init_DeliverItem_Result_message(::my_interfaces::action::DeliverItem_Result & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::DeliverItem_Result message(::my_interfaces::action::DeliverItem_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_Result msg_;
};

class Init_DeliverItem_Result_success
{
public:
  Init_DeliverItem_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliverItem_Result_message success(::my_interfaces::action::DeliverItem_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DeliverItem_Result_message(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::DeliverItem_Result>()
{
  return my_interfaces::action::builder::Init_DeliverItem_Result_success();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliverItem_Feedback_status
{
public:
  Init_DeliverItem_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::action::DeliverItem_Feedback status(::my_interfaces::action::DeliverItem_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::DeliverItem_Feedback>()
{
  return my_interfaces::action::builder::Init_DeliverItem_Feedback_status();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliverItem_SendGoal_Request_goal
{
public:
  explicit Init_DeliverItem_SendGoal_Request_goal(::my_interfaces::action::DeliverItem_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::DeliverItem_SendGoal_Request goal(::my_interfaces::action::DeliverItem_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_SendGoal_Request msg_;
};

class Init_DeliverItem_SendGoal_Request_goal_id
{
public:
  Init_DeliverItem_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliverItem_SendGoal_Request_goal goal_id(::my_interfaces::action::DeliverItem_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DeliverItem_SendGoal_Request_goal(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::DeliverItem_SendGoal_Request>()
{
  return my_interfaces::action::builder::Init_DeliverItem_SendGoal_Request_goal_id();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliverItem_SendGoal_Response_stamp
{
public:
  explicit Init_DeliverItem_SendGoal_Response_stamp(::my_interfaces::action::DeliverItem_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::DeliverItem_SendGoal_Response stamp(::my_interfaces::action::DeliverItem_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_SendGoal_Response msg_;
};

class Init_DeliverItem_SendGoal_Response_accepted
{
public:
  Init_DeliverItem_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliverItem_SendGoal_Response_stamp accepted(::my_interfaces::action::DeliverItem_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DeliverItem_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::DeliverItem_SendGoal_Response>()
{
  return my_interfaces::action::builder::Init_DeliverItem_SendGoal_Response_accepted();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliverItem_GetResult_Request_goal_id
{
public:
  Init_DeliverItem_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::action::DeliverItem_GetResult_Request goal_id(::my_interfaces::action::DeliverItem_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::DeliverItem_GetResult_Request>()
{
  return my_interfaces::action::builder::Init_DeliverItem_GetResult_Request_goal_id();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliverItem_GetResult_Response_result
{
public:
  explicit Init_DeliverItem_GetResult_Response_result(::my_interfaces::action::DeliverItem_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::DeliverItem_GetResult_Response result(::my_interfaces::action::DeliverItem_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_GetResult_Response msg_;
};

class Init_DeliverItem_GetResult_Response_status
{
public:
  Init_DeliverItem_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliverItem_GetResult_Response_result status(::my_interfaces::action::DeliverItem_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DeliverItem_GetResult_Response_result(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::DeliverItem_GetResult_Response>()
{
  return my_interfaces::action::builder::Init_DeliverItem_GetResult_Response_status();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliverItem_FeedbackMessage_feedback
{
public:
  explicit Init_DeliverItem_FeedbackMessage_feedback(::my_interfaces::action::DeliverItem_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::DeliverItem_FeedbackMessage feedback(::my_interfaces::action::DeliverItem_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_FeedbackMessage msg_;
};

class Init_DeliverItem_FeedbackMessage_goal_id
{
public:
  Init_DeliverItem_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliverItem_FeedbackMessage_feedback goal_id(::my_interfaces::action::DeliverItem_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DeliverItem_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_interfaces::action::DeliverItem_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::DeliverItem_FeedbackMessage>()
{
  return my_interfaces::action::builder::Init_DeliverItem_FeedbackMessage_goal_id();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__ACTION__DETAIL__DELIVER_ITEM__BUILDER_HPP_
