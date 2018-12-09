// Generated by gencpp from file reflex_one_msgs/SetTactileThresholdRequest.msg
// DO NOT EDIT!


#ifndef REFLEX_ONE_MSGS_MESSAGE_SETTACTILETHRESHOLDREQUEST_H
#define REFLEX_ONE_MSGS_MESSAGE_SETTACTILETHRESHOLDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <reflex_one_msgs/FingerPressure.h>

namespace reflex_one_msgs
{
template <class ContainerAllocator>
struct SetTactileThresholdRequest_
{
  typedef SetTactileThresholdRequest_<ContainerAllocator> Type;

  SetTactileThresholdRequest_()
    : finger()  {
    }
  SetTactileThresholdRequest_(const ContainerAllocator& _alloc)
    : finger()  {
  (void)_alloc;
      finger.assign( ::reflex_one_msgs::FingerPressure_<ContainerAllocator> (_alloc));
  }



   typedef boost::array< ::reflex_one_msgs::FingerPressure_<ContainerAllocator> , 3>  _finger_type;
  _finger_type finger;




  typedef boost::shared_ptr< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetTactileThresholdRequest_

typedef ::reflex_one_msgs::SetTactileThresholdRequest_<std::allocator<void> > SetTactileThresholdRequest;

typedef boost::shared_ptr< ::reflex_one_msgs::SetTactileThresholdRequest > SetTactileThresholdRequestPtr;
typedef boost::shared_ptr< ::reflex_one_msgs::SetTactileThresholdRequest const> SetTactileThresholdRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace reflex_one_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'reflex_one_msgs': ['/home/cc/ee106a/fa18/class/ee106a-abz/Downloads/project/src/reflex-ros-pkg/reflex_one_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "01cec83f9d223083364c730460331524";
  }

  static const char* value(const ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x01cec83f9d223083ULL;
  static const uint64_t static_value2 = 0x364c730460331524ULL;
};

template<class ContainerAllocator>
struct DataType< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "reflex_one_msgs/SetTactileThresholdRequest";
  }

  static const char* value(const ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
FingerPressure[3] finger\n\
\n\
================================================================================\n\
MSG: reflex_one_msgs/FingerPressure\n\
# message for pressure on a single finger\n\
uint16[9] sensor    	# The sensors enumerate from the base of the finger to the tip\n\
						# There are 5 on the proximal link, 4 on the distal\n\
";
  }

  static const char* value(const ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.finger);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetTactileThresholdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::reflex_one_msgs::SetTactileThresholdRequest_<ContainerAllocator>& v)
  {
    s << indent << "finger[]" << std::endl;
    for (size_t i = 0; i < v.finger.size(); ++i)
    {
      s << indent << "  finger[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::reflex_one_msgs::FingerPressure_<ContainerAllocator> >::stream(s, indent + "    ", v.finger[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // REFLEX_ONE_MSGS_MESSAGE_SETTACTILETHRESHOLDREQUEST_H
