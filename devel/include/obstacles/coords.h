// Generated by gencpp from file obstacles/coords.msg
// DO NOT EDIT!


#ifndef OBSTACLES_MESSAGE_COORDS_H
#define OBSTACLES_MESSAGE_COORDS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace obstacles
{
template <class ContainerAllocator>
struct coords_
{
  typedef coords_<ContainerAllocator> Type;

  coords_()
    : x()
    , y()  {
    }
  coords_(const ContainerAllocator& _alloc)
    : x(_alloc)
    , y(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _x_type;
  _x_type x;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::obstacles::coords_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::obstacles::coords_<ContainerAllocator> const> ConstPtr;

}; // struct coords_

typedef ::obstacles::coords_<std::allocator<void> > coords;

typedef boost::shared_ptr< ::obstacles::coords > coordsPtr;
typedef boost::shared_ptr< ::obstacles::coords const> coordsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::obstacles::coords_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::obstacles::coords_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::obstacles::coords_<ContainerAllocator1> & lhs, const ::obstacles::coords_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::obstacles::coords_<ContainerAllocator1> & lhs, const ::obstacles::coords_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace obstacles

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::obstacles::coords_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::obstacles::coords_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::obstacles::coords_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::obstacles::coords_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::obstacles::coords_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::obstacles::coords_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::obstacles::coords_<ContainerAllocator> >
{
  static const char* value()
  {
    return "462ac0ba687f22c2e73c0ec0413e0202";
  }

  static const char* value(const ::obstacles::coords_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x462ac0ba687f22c2ULL;
  static const uint64_t static_value2 = 0xe73c0ec0413e0202ULL;
};

template<class ContainerAllocator>
struct DataType< ::obstacles::coords_<ContainerAllocator> >
{
  static const char* value()
  {
    return "obstacles/coords";
  }

  static const char* value(const ::obstacles::coords_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::obstacles::coords_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] x\n"
"float32[] y\n"
;
  }

  static const char* value(const ::obstacles::coords_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::obstacles::coords_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct coords_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::obstacles::coords_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::obstacles::coords_<ContainerAllocator>& v)
  {
    s << indent << "x[]" << std::endl;
    for (size_t i = 0; i < v.x.size(); ++i)
    {
      s << indent << "  x[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.x[i]);
    }
    s << indent << "y[]" << std::endl;
    for (size_t i = 0; i < v.y.size(); ++i)
    {
      s << indent << "  y[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.y[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBSTACLES_MESSAGE_COORDS_H