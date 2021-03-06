// Generated by gencpp from file reflex_msgs/ForceCommand.msg
// DO NOT EDIT!


#ifndef REFLEX_MSGS_MESSAGE_FORCECOMMAND_H
#define REFLEX_MSGS_MESSAGE_FORCECOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace reflex_msgs
{
template <class ContainerAllocator>
struct ForceCommand_
{
  typedef ForceCommand_<ContainerAllocator> Type;

  ForceCommand_()
    : f1(0.0)
    , f2(0.0)
    , f3(0.0)
    , preshape(0.0)  {
    }
  ForceCommand_(const ContainerAllocator& _alloc)
    : f1(0.0)
    , f2(0.0)
    , f3(0.0)
    , preshape(0.0)  {
  (void)_alloc;
    }



   typedef double _f1_type;
  _f1_type f1;

   typedef double _f2_type;
  _f2_type f2;

   typedef double _f3_type;
  _f3_type f3;

   typedef double _preshape_type;
  _preshape_type preshape;




  typedef boost::shared_ptr< ::reflex_msgs::ForceCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::reflex_msgs::ForceCommand_<ContainerAllocator> const> ConstPtr;

}; // struct ForceCommand_

typedef ::reflex_msgs::ForceCommand_<std::allocator<void> > ForceCommand;

typedef boost::shared_ptr< ::reflex_msgs::ForceCommand > ForceCommandPtr;
typedef boost::shared_ptr< ::reflex_msgs::ForceCommand const> ForceCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::reflex_msgs::ForceCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::reflex_msgs::ForceCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace reflex_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'reflex_msgs': ['/home/cc/ee106a/fa18/class/ee106a-abz/Downloads/project/src/reflex-ros-pkg/reflex_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::reflex_msgs::ForceCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::reflex_msgs::ForceCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_msgs::ForceCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_msgs::ForceCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_msgs::ForceCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_msgs::ForceCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::reflex_msgs::ForceCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ec8e01f7c46594906539a78e3918a7c2";
  }

  static const char* value(const ::reflex_msgs::ForceCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xec8e01f7c4659490ULL;
  static const uint64_t static_value2 = 0x6539a78e3918a7c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::reflex_msgs::ForceCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "reflex_msgs/ForceCommand";
  }

  static const char* value(const ::reflex_msgs::ForceCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::reflex_msgs::ForceCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Torque of various motors. UNITLESS due to the way Dynamixels measure torque\n\
# More information on the force feedback here:\n\
#	http://support.robotis.com/en/product/dynamixel/mx_series/mx-28.htm#Actuator_Address_28\n\
float64 f1\n\
float64 f2\n\
float64 f3\n\
float64 preshape\n\
";
  }

  static const char* value(const ::reflex_msgs::ForceCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::reflex_msgs::ForceCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.f1);
      stream.next(m.f2);
      stream.next(m.f3);
      stream.next(m.preshape);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ForceCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::reflex_msgs::ForceCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::reflex_msgs::ForceCommand_<ContainerAllocator>& v)
  {
    s << indent << "f1: ";
    Printer<double>::stream(s, indent + "  ", v.f1);
    s << indent << "f2: ";
    Printer<double>::stream(s, indent + "  ", v.f2);
    s << indent << "f3: ";
    Printer<double>::stream(s, indent + "  ", v.f3);
    s << indent << "preshape: ";
    Printer<double>::stream(s, indent + "  ", v.preshape);
  }
};

} // namespace message_operations
} // namespace ros

#endif // REFLEX_MSGS_MESSAGE_FORCECOMMAND_H
