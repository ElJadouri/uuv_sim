// Generated by gencpp from file uuv_sensor_ros_plugins_msgs/ChemicalParticleConcentration.msg
// DO NOT EDIT!


#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS_MESSAGE_CHEMICALPARTICLECONCENTRATION_H
#define UUV_SENSOR_ROS_PLUGINS_MSGS_MESSAGE_CHEMICALPARTICLECONCENTRATION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>

namespace uuv_sensor_ros_plugins_msgs
{
template <class ContainerAllocator>
struct ChemicalParticleConcentration_
{
  typedef ChemicalParticleConcentration_<ContainerAllocator> Type;

  ChemicalParticleConcentration_()
    : header()
    , position()
    , latitude(0.0)
    , longitude(0.0)
    , depth(0.0)
    , concentration(0.0)
    , is_measuring(false)  {
    }
  ChemicalParticleConcentration_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , position(_alloc)
    , latitude(0.0)
    , longitude(0.0)
    , depth(0.0)
    , concentration(0.0)
    , is_measuring(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _depth_type;
  _depth_type depth;

   typedef double _concentration_type;
  _concentration_type concentration;

   typedef uint8_t _is_measuring_type;
  _is_measuring_type is_measuring;





  typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> const> ConstPtr;

}; // struct ChemicalParticleConcentration_

typedef ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<std::allocator<void> > ChemicalParticleConcentration;

typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration > ChemicalParticleConcentrationPtr;
typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration const> ChemicalParticleConcentrationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator1> & lhs, const ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.position == rhs.position &&
    lhs.latitude == rhs.latitude &&
    lhs.longitude == rhs.longitude &&
    lhs.depth == rhs.depth &&
    lhs.concentration == rhs.concentration &&
    lhs.is_measuring == rhs.is_measuring;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator1> & lhs, const ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace uuv_sensor_ros_plugins_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f17ac73d7dd3916a4fd6f721f0ccbe37";
  }

  static const char* value(const ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf17ac73d7dd3916aULL;
  static const uint64_t static_value2 = 0x4fd6f721f0ccbe37ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_sensor_ros_plugins_msgs/ChemicalParticleConcentration";
  }

  static const char* value(const ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright (c) 2016 The UUV Simulator Authors.\n"
"# All rights reserved.\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#     http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"Header header\n"
"# Sensor link position\n"
"geometry_msgs/Vector3 position\n"
"# Latitude in degrees (WGS84 coordinates)\n"
"float64 latitude\n"
"# Longiture in degrees (WGS84 coordinates)\n"
"float64 longitude\n"
"# Depth in meters (WGS84 coordinates)\n"
"float64 depth\n"
"# Particle concentration\n"
"float64 concentration\n"
"# Status, false if no plume particles are received\n"
"bool is_measuring\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.position);
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.depth);
      stream.next(m.concentration);
      stream.next(m.is_measuring);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChemicalParticleConcentration_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_sensor_ros_plugins_msgs::ChemicalParticleConcentration_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "depth: ";
    Printer<double>::stream(s, indent + "  ", v.depth);
    s << indent << "concentration: ";
    Printer<double>::stream(s, indent + "  ", v.concentration);
    s << indent << "is_measuring: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_measuring);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_SENSOR_ROS_PLUGINS_MSGS_MESSAGE_CHEMICALPARTICLECONCENTRATION_H
