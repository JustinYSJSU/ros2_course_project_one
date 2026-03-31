// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from project_one:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_ONE__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_
#define PROJECT_ONE__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "project_one/srv/detail/odd_even_check__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace project_one
{

namespace srv
{

namespace builder
{

class Init_OddEvenCheck_Request_number
{
public:
  Init_OddEvenCheck_Request_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project_one::srv::OddEvenCheck_Request number(::project_one::srv::OddEvenCheck_Request::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_one::srv::OddEvenCheck_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_one::srv::OddEvenCheck_Request>()
{
  return project_one::srv::builder::Init_OddEvenCheck_Request_number();
}

}  // namespace project_one


namespace project_one
{

namespace srv
{

namespace builder
{

class Init_OddEvenCheck_Response_decision
{
public:
  Init_OddEvenCheck_Response_decision()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project_one::srv::OddEvenCheck_Response decision(::project_one::srv::OddEvenCheck_Response::_decision_type arg)
  {
    msg_.decision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_one::srv::OddEvenCheck_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_one::srv::OddEvenCheck_Response>()
{
  return project_one::srv::builder::Init_OddEvenCheck_Response_decision();
}

}  // namespace project_one

#endif  // PROJECT_ONE__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_
