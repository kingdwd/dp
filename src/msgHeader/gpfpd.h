// Generated by gencpp from file hdmap_msgs/gpfpd.msg
// DO NOT EDIT!


#ifndef HDMAP_MSGS_MESSAGE_GPFPD_H
#define HDMAP_MSGS_MESSAGE_GPFPD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace hdmap_msgs
{
template <class ContainerAllocator>
struct gpfpd_
{
  typedef gpfpd_<ContainerAllocator> Type;

  gpfpd_()
    : header()
    , nGPSWeek(0)
    , dGPSTime(0.0)
    , dHeading(0.0)
    , dPitch(0.0)
    , dRoll(0.0)
    , dLattitude(0.0)
    , dLongitude(0.0)
    , dAltitude(0.0)
    , dX(0.0)
    , dY(0.0)
    , dVEast(0.0)
    , dVNorth(0.0)
    , dVUp(0.0)
    , dBaseline(0.0)
    , nSatelitesNum1(0)
    , nSatelitesNum2(0)
    , cStatus(0)
    , cReserved()
    , nReceivedMSGTimeFlags(0)
    , nSendMSGTimeFlags(0)
    , nImageTimeFlags(0)
    , nFrameNo(0)  {
      cReserved.assign(0);
  }
  gpfpd_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , nGPSWeek(0)
    , dGPSTime(0.0)
    , dHeading(0.0)
    , dPitch(0.0)
    , dRoll(0.0)
    , dLattitude(0.0)
    , dLongitude(0.0)
    , dAltitude(0.0)
    , dX(0.0)
    , dY(0.0)
    , dVEast(0.0)
    , dVNorth(0.0)
    , dVUp(0.0)
    , dBaseline(0.0)
    , nSatelitesNum1(0)
    , nSatelitesNum2(0)
    , cStatus(0)
    , cReserved()
    , nReceivedMSGTimeFlags(0)
    , nSendMSGTimeFlags(0)
    , nImageTimeFlags(0)
    , nFrameNo(0)  {
  (void)_alloc;
      cReserved.assign(0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _nGPSWeek_type;
  _nGPSWeek_type nGPSWeek;

   typedef double _dGPSTime_type;
  _dGPSTime_type dGPSTime;

   typedef double _dHeading_type;
  _dHeading_type dHeading;

   typedef double _dPitch_type;
  _dPitch_type dPitch;

   typedef double _dRoll_type;
  _dRoll_type dRoll;

   typedef double _dLattitude_type;
  _dLattitude_type dLattitude;

   typedef double _dLongitude_type;
  _dLongitude_type dLongitude;

   typedef double _dAltitude_type;
  _dAltitude_type dAltitude;

   typedef double _dX_type;
  _dX_type dX;

   typedef double _dY_type;
  _dY_type dY;

   typedef double _dVEast_type;
  _dVEast_type dVEast;

   typedef double _dVNorth_type;
  _dVNorth_type dVNorth;

   typedef double _dVUp_type;
  _dVUp_type dVUp;

   typedef double _dBaseline_type;
  _dBaseline_type dBaseline;

   typedef int16_t _nSatelitesNum1_type;
  _nSatelitesNum1_type nSatelitesNum1;

   typedef int16_t _nSatelitesNum2_type;
  _nSatelitesNum2_type nSatelitesNum2;

   typedef int8_t _cStatus_type;
  _cStatus_type cStatus;

   typedef boost::array<int8_t, 3>  _cReserved_type;
  _cReserved_type cReserved;

   typedef int64_t _nReceivedMSGTimeFlags_type;
  _nReceivedMSGTimeFlags_type nReceivedMSGTimeFlags;

   typedef int64_t _nSendMSGTimeFlags_type;
  _nSendMSGTimeFlags_type nSendMSGTimeFlags;

   typedef int64_t _nImageTimeFlags_type;
  _nImageTimeFlags_type nImageTimeFlags;

   typedef int64_t _nFrameNo_type;
  _nFrameNo_type nFrameNo;





  typedef boost::shared_ptr< ::hdmap_msgs::gpfpd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hdmap_msgs::gpfpd_<ContainerAllocator> const> ConstPtr;

}; // struct gpfpd_

typedef ::hdmap_msgs::gpfpd_<std::allocator<void> > gpfpd;

typedef boost::shared_ptr< ::hdmap_msgs::gpfpd > gpfpdPtr;
typedef boost::shared_ptr< ::hdmap_msgs::gpfpd const> gpfpdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hdmap_msgs::gpfpd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hdmap_msgs::gpfpd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hdmap_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'hdmap_msgs': ['/home/jydragon/catkin_ws/src/hdmap_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hdmap_msgs::gpfpd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hdmap_msgs::gpfpd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdmap_msgs::gpfpd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdmap_msgs::gpfpd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdmap_msgs::gpfpd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdmap_msgs::gpfpd_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hdmap_msgs::gpfpd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "79959cc25a3a784a3dee0fb4c115f99c";
  }

  static const char* value(const ::hdmap_msgs::gpfpd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x79959cc25a3a784aULL;
  static const uint64_t static_value2 = 0x3dee0fb4c115f99cULL;
};

template<class ContainerAllocator>
struct DataType< ::hdmap_msgs::gpfpd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hdmap_msgs/gpfpd";
  }

  static const char* value(const ::hdmap_msgs::gpfpd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hdmap_msgs::gpfpd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
int32 nGPSWeek\n\
float64 dGPSTime\n\
\n\
#orientation\n\
float64 dHeading\n\
float64 dPitch\n\
float64 dRoll\n\
\n\
#quaternion sRot\n\
\n\
#position\n\
float64 dLattitude\n\
float64 dLongitude\n\
float64 dAltitude\n\
float64 dX\n\
float64 dY\n\
\n\
#speed\n\
float64 dVEast\n\
float64 dVNorth\n\
float64 dVUp\n\
\n\
float64 dBaseline\n\
int16 nSatelitesNum1\n\
int16 nSatelitesNum2\n\
int8 cStatus\n\
int8[3] cReserved \n\
\n\
\n\
int64 nReceivedMSGTimeFlags\n\
int64 nSendMSGTimeFlags\n\
int64 nImageTimeFlags\n\
\n\
int64 nFrameNo\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::hdmap_msgs::gpfpd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hdmap_msgs::gpfpd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.nGPSWeek);
      stream.next(m.dGPSTime);
      stream.next(m.dHeading);
      stream.next(m.dPitch);
      stream.next(m.dRoll);
      stream.next(m.dLattitude);
      stream.next(m.dLongitude);
      stream.next(m.dAltitude);
      stream.next(m.dX);
      stream.next(m.dY);
      stream.next(m.dVEast);
      stream.next(m.dVNorth);
      stream.next(m.dVUp);
      stream.next(m.dBaseline);
      stream.next(m.nSatelitesNum1);
      stream.next(m.nSatelitesNum2);
      stream.next(m.cStatus);
      stream.next(m.cReserved);
      stream.next(m.nReceivedMSGTimeFlags);
      stream.next(m.nSendMSGTimeFlags);
      stream.next(m.nImageTimeFlags);
      stream.next(m.nFrameNo);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct gpfpd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hdmap_msgs::gpfpd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hdmap_msgs::gpfpd_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "nGPSWeek: ";
    Printer<int32_t>::stream(s, indent + "  ", v.nGPSWeek);
    s << indent << "dGPSTime: ";
    Printer<double>::stream(s, indent + "  ", v.dGPSTime);
    s << indent << "dHeading: ";
    Printer<double>::stream(s, indent + "  ", v.dHeading);
    s << indent << "dPitch: ";
    Printer<double>::stream(s, indent + "  ", v.dPitch);
    s << indent << "dRoll: ";
    Printer<double>::stream(s, indent + "  ", v.dRoll);
    s << indent << "dLattitude: ";
    Printer<double>::stream(s, indent + "  ", v.dLattitude);
    s << indent << "dLongitude: ";
    Printer<double>::stream(s, indent + "  ", v.dLongitude);
    s << indent << "dAltitude: ";
    Printer<double>::stream(s, indent + "  ", v.dAltitude);
    s << indent << "dX: ";
    Printer<double>::stream(s, indent + "  ", v.dX);
    s << indent << "dY: ";
    Printer<double>::stream(s, indent + "  ", v.dY);
    s << indent << "dVEast: ";
    Printer<double>::stream(s, indent + "  ", v.dVEast);
    s << indent << "dVNorth: ";
    Printer<double>::stream(s, indent + "  ", v.dVNorth);
    s << indent << "dVUp: ";
    Printer<double>::stream(s, indent + "  ", v.dVUp);
    s << indent << "dBaseline: ";
    Printer<double>::stream(s, indent + "  ", v.dBaseline);
    s << indent << "nSatelitesNum1: ";
    Printer<int16_t>::stream(s, indent + "  ", v.nSatelitesNum1);
    s << indent << "nSatelitesNum2: ";
    Printer<int16_t>::stream(s, indent + "  ", v.nSatelitesNum2);
    s << indent << "cStatus: ";
    Printer<int8_t>::stream(s, indent + "  ", v.cStatus);
    s << indent << "cReserved[]" << std::endl;
    for (size_t i = 0; i < v.cReserved.size(); ++i)
    {
      s << indent << "  cReserved[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.cReserved[i]);
    }
    s << indent << "nReceivedMSGTimeFlags: ";
    Printer<int64_t>::stream(s, indent + "  ", v.nReceivedMSGTimeFlags);
    s << indent << "nSendMSGTimeFlags: ";
    Printer<int64_t>::stream(s, indent + "  ", v.nSendMSGTimeFlags);
    s << indent << "nImageTimeFlags: ";
    Printer<int64_t>::stream(s, indent + "  ", v.nImageTimeFlags);
    s << indent << "nFrameNo: ";
    Printer<int64_t>::stream(s, indent + "  ", v.nFrameNo);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HDMAP_MSGS_MESSAGE_GPFPD_H