// Generated by gencpp from file reflex_msgs2/Imu.msg
// DO NOT EDIT!


#ifndef REFLEX_MSGS2_MESSAGE_IMU_H
#define REFLEX_MSGS2_MESSAGE_IMU_H


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
struct Imu_
{
  typedef Imu_<ContainerAllocator> Type;

  Imu_()
    : quat()
    , euler_angles()
    , calibration_status(0)
    , calibration_data()  {
      quat.assign(0.0);

      euler_angles.assign(0.0);

      calibration_data.assign(0);
  }
  Imu_(const ContainerAllocator& _alloc)
    : quat()
    , euler_angles()
    , calibration_status(0)
    , calibration_data()  {
  (void)_alloc;
      quat.assign(0.0);

      euler_angles.assign(0.0);

      calibration_data.assign(0);
  }



   typedef boost::array<float, 4>  _quat_type;
  _quat_type quat;

   typedef boost::array<float, 3>  _euler_angles_type;
  _euler_angles_type euler_angles;

   typedef uint8_t _calibration_status_type;
  _calibration_status_type calibration_status;

   typedef boost::array<uint16_t, 11>  _calibration_data_type;
  _calibration_data_type calibration_data;




  typedef boost::shared_ptr< ::reflex_msgs2::Imu_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::reflex_msgs2::Imu_<ContainerAllocator> const> ConstPtr;

}; // struct Imu_

typedef ::reflex_msgs2::Imu_<std::allocator<void> > Imu;

typedef boost::shared_ptr< ::reflex_msgs2::Imu > ImuPtr;
typedef boost::shared_ptr< ::reflex_msgs2::Imu const> ImuConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::reflex_msgs2::Imu_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::reflex_msgs2::Imu_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::reflex_msgs2::Imu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::reflex_msgs2::Imu_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_msgs2::Imu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_msgs2::Imu_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_msgs2::Imu_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_msgs2::Imu_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::reflex_msgs2::Imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dea5c53d0c934f48b1ee6e5a6eed4389";
  }

  static const char* value(const ::reflex_msgs2::Imu_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdea5c53d0c934f48ULL;
  static const uint64_t static_value2 = 0xb1ee6e5a6eed4389ULL;
};

template<class ContainerAllocator>
struct DataType< ::reflex_msgs2::Imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "reflex_msgs2/Imu";
  }

  static const char* value(const ::reflex_msgs2::Imu_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::reflex_msgs2::Imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# quaternion reading from IMU (w, x, y, z)\n\
float32[4] quat	\n\
float32[3] euler_angles \n\
\n\
# these are defined in reflex_hand.h driver\n\
uint8 calibration_status \n\
uint16[11] calibration_data\n\
";
  }

  static const char* value(const ::reflex_msgs2::Imu_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::reflex_msgs2::Imu_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.quat);
      stream.next(m.euler_angles);
      stream.next(m.calibration_status);
      stream.next(m.calibration_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Imu_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::reflex_msgs2::Imu_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::reflex_msgs2::Imu_<ContainerAllocator>& v)
  {
    s << indent << "quat[]" << std::endl;
    for (size_t i = 0; i < v.quat.size(); ++i)
    {
      s << indent << "  quat[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.quat[i]);
    }
    s << indent << "euler_angles[]" << std::endl;
    for (size_t i = 0; i < v.euler_angles.size(); ++i)
    {
      s << indent << "  euler_angles[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.euler_angles[i]);
    }
    s << indent << "calibration_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.calibration_status);
    s << indent << "calibration_data[]" << std::endl;
    for (size_t i = 0; i < v.calibration_data.size(); ++i)
    {
      s << indent << "  calibration_data[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.calibration_data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // REFLEX_MSGS2_MESSAGE_IMU_H
