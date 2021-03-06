// Generated by gencpp from file reflex_msgs/SetSpeed.msg
// DO NOT EDIT!


#ifndef REFLEX_MSGS_MESSAGE_SETSPEED_H
#define REFLEX_MSGS_MESSAGE_SETSPEED_H

#include <ros/service_traits.h>


#include <reflex_msgs/SetSpeedRequest.h>
#include <reflex_msgs/SetSpeedResponse.h>


namespace reflex_msgs
{

struct SetSpeed
{

typedef SetSpeedRequest Request;
typedef SetSpeedResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetSpeed
} // namespace reflex_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::reflex_msgs::SetSpeed > {
  static const char* value()
  {
    return "7e4d6fd69113a7a3ab5caa755082c6b7";
  }

  static const char* value(const ::reflex_msgs::SetSpeed&) { return value(); }
};

template<>
struct DataType< ::reflex_msgs::SetSpeed > {
  static const char* value()
  {
    return "reflex_msgs/SetSpeed";
  }

  static const char* value(const ::reflex_msgs::SetSpeed&) { return value(); }
};


// service_traits::MD5Sum< ::reflex_msgs::SetSpeedRequest> should match 
// service_traits::MD5Sum< ::reflex_msgs::SetSpeed > 
template<>
struct MD5Sum< ::reflex_msgs::SetSpeedRequest>
{
  static const char* value()
  {
    return MD5Sum< ::reflex_msgs::SetSpeed >::value();
  }
  static const char* value(const ::reflex_msgs::SetSpeedRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::reflex_msgs::SetSpeedRequest> should match 
// service_traits::DataType< ::reflex_msgs::SetSpeed > 
template<>
struct DataType< ::reflex_msgs::SetSpeedRequest>
{
  static const char* value()
  {
    return DataType< ::reflex_msgs::SetSpeed >::value();
  }
  static const char* value(const ::reflex_msgs::SetSpeedRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::reflex_msgs::SetSpeedResponse> should match 
// service_traits::MD5Sum< ::reflex_msgs::SetSpeed > 
template<>
struct MD5Sum< ::reflex_msgs::SetSpeedResponse>
{
  static const char* value()
  {
    return MD5Sum< ::reflex_msgs::SetSpeed >::value();
  }
  static const char* value(const ::reflex_msgs::SetSpeedResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::reflex_msgs::SetSpeedResponse> should match 
// service_traits::DataType< ::reflex_msgs::SetSpeed > 
template<>
struct DataType< ::reflex_msgs::SetSpeedResponse>
{
  static const char* value()
  {
    return DataType< ::reflex_msgs::SetSpeed >::value();
  }
  static const char* value(const ::reflex_msgs::SetSpeedResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // REFLEX_MSGS_MESSAGE_SETSPEED_H
