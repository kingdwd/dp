// Generated by gencpp from file iau_ros_msgs/PointXYAA.msg
// DO NOT EDIT!


#ifndef IAU_ROS_MSGS_MESSAGE_POINTXYAA_H
#define IAU_ROS_MSGS_MESSAGE_POINTXYAA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <iau_ros_msgs/PointXYA.h>

namespace iau_ros_msgs
{
template <class ContainerAllocator>
struct PointXYAA_
{
  typedef PointXYAA_<ContainerAllocator> Type;

  PointXYAA_()
    : id(0)
    , point()
    , attr(0.0)  {
    }
  PointXYAA_(const ContainerAllocator& _alloc)
    : id(0)
    , point(_alloc)
    , attr(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef  ::iau_ros_msgs::PointXYA_<ContainerAllocator>  _point_type;
  _point_type point;

   typedef double _attr_type;
  _attr_type attr;





  typedef boost::shared_ptr< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> const> ConstPtr;

}; // struct PointXYAA_

typedef ::iau_ros_msgs::PointXYAA_<std::allocator<void> > PointXYAA;

typedef boost::shared_ptr< ::iau_ros_msgs::PointXYAA > PointXYAAPtr;
typedef boost::shared_ptr< ::iau_ros_msgs::PointXYAA const> PointXYAAConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iau_ros_msgs::PointXYAA_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace iau_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'iau_ros_msgs': ['/home/z/iau_ws/src/iau_ros_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "944fd62d345fbb5d50df33da79952d90";
  }

  static const char* value(const ::iau_ros_msgs::PointXYAA_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x944fd62d345fbb5dULL;
  static const uint64_t static_value2 = 0x50df33da79952d90ULL;
};

template<class ContainerAllocator>
struct DataType< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iau_ros_msgs/PointXYAA";
  }

  static const char* value(const ::iau_ros_msgs::PointXYAA_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32    id\n\
PointXYA point\n\
float64  attr\n\
\n\
================================================================================\n\
MSG: iau_ros_msgs/PointXYA\n\
float64 x\n\
float64 y\n\
float64 yaw  # degs\n\
";
  }

  static const char* value(const ::iau_ros_msgs::PointXYAA_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.point);
      stream.next(m.attr);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PointXYAA_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iau_ros_msgs::PointXYAA_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iau_ros_msgs::PointXYAA_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "point: ";
    s << std::endl;
    Printer< ::iau_ros_msgs::PointXYA_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
    s << indent << "attr: ";
    Printer<double>::stream(s, indent + "  ", v.attr);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IAU_ROS_MSGS_MESSAGE_POINTXYAA_H
