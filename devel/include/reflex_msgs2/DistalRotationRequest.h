// Generated by gencpp from file reflex_msgs2/DistalRotationRequest.msg
// DO NOT EDIT!


#ifndef REFLEX_MSGS2_MESSAGE_DISTALROTATIONREQUEST_H
#define REFLEX_MSGS2_MESSAGE_DISTALROTATIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace reflex_msgs2
{
template <class ContainerAllocator>
struct DistalRotationRequest_
{
  typedef DistalRotationRequest_<ContainerAllocator> Type;

  DistalRotationRequest_()
    : palm_imu_quat()
    , joint_angle(0.0)
    , proximal(0.0)
    , finger_imu_quat()  {
      palm_imu_quat.assign(0.0);

      finger_imu_quat.assign(0.0);
  }
  DistalRotationRequest_(const ContainerAllocator& _alloc)
    : palm_imu_quat()
    , joint_angle(0.0)
    , proximal(0.0)
    , finger_imu_quat()  {
  (void)_alloc;
      palm_imu_quat.assign(0.0);

      finger_imu_quat.assign(0.0);
  }



   typedef boost::array<float, 4>  _palm_imu_quat_type;
  _palm_imu_quat_type palm_imu_quat;

   typedef float _joint_angle_type;
  _joint_angle_type joint_angle;

   typedef float _proximal_type;
  _proximal_type proximal;

   typedef boost::array<float, 4>  _finger_imu_quat_type;
  _finger_imu_quat_type finger_imu_quat;




  typedef boost::shared_ptr< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DistalRotationRequest_

typedef ::reflex_msgs2::DistalRotationRequest_<std::allocator<void> > DistalRotationRequest;

typedef boost::shared_ptr< ::reflex_msgs2::DistalRotationRequest > DistalRotationRequestPtr;
typedef boost::shared_ptr< ::reflex_msgs2::DistalRotationRequest const> DistalRotationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace reflex_msgs2

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'reflex_msgs2': ['/home/cc/ee106a/fa18/class/ee106a-abz/Downloads/project/src/reflex-ros-pkg/reflex_msgs2/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "95c6d42d4818f388398c524197385198";
  }

  static const char* value(const ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x95c6d42d4818f388ULL;
  static const uint64_t static_value2 = 0x398c524197385198ULL;
};

template<class ContainerAllocator>
struct DataType< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "reflex_msgs2/DistalRotationRequest";
  }

  static const char* value(const ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
float32[4] palm_imu_quat\n\
float32 joint_angle\n\
float32 proximal\n\
float32[4] finger_imu_quat\n\
";
  }

  static const char* value(const ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.palm_imu_quat);
      stream.next(m.joint_angle);
      stream.next(m.proximal);
      stream.next(m.finger_imu_quat);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DistalRotationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::reflex_msgs2::DistalRotationRequest_<ContainerAllocator>& v)
  {
    s << indent << "palm_imu_quat[]" << std::endl;
    for (size_t i = 0; i < v.palm_imu_quat.size(); ++i)
    {
      s << indent << "  palm_imu_quat[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.palm_imu_quat[i]);
    }
    s << indent << "joint_angle: ";
    Printer<float>::stream(s, indent + "  ", v.joint_angle);
    s << indent << "proximal: ";
    Printer<float>::stream(s, indent + "  ", v.proximal);
    s << indent << "finger_imu_quat[]" << std::endl;
    for (size_t i = 0; i < v.finger_imu_quat.size(); ++i)
    {
      s << indent << "  finger_imu_quat[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.finger_imu_quat[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // REFLEX_MSGS2_MESSAGE_DISTALROTATIONREQUEST_H