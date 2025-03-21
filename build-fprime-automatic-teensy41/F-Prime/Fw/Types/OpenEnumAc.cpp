// ======================================================================
// \title  OpenEnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Open enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "F-Prime/Fw/Types/OpenEnumAc.hpp"

namespace Fw {

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  Open& Open ::
    operator=(const Open& obj)
  {
    this->e = obj.e;
    return *this;
  }

  Open& Open ::
    operator=(T e1)
  {
    this->e = e1;
    return *this;
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const Open& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  bool Open ::
    isValid() const
  {
    return ((e >= CLOSED) && (e <= OPEN));
  }

  Fw::SerializeStatus Open ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    const Fw::SerializeStatus status = buffer.serialize(
        static_cast<SerialType>(this->e)
    );
    return status;
  }

  Fw::SerializeStatus Open ::
    deserialize(Fw::SerializeBufferBase& buffer)
  {
    SerialType es;
    Fw::SerializeStatus status = buffer.deserialize(es);
    if (status == Fw::FW_SERIALIZE_OK) {
      this->e = static_cast<T>(es);
      if (!this->isValid()) {
        status = Fw::FW_DESERIALIZE_FORMAT_ERROR;
      }
    }
    return status;
  }

#if FW_SERIALIZABLE_TO_STRING

  void Open ::
    toString(Fw::StringBase& sb) const
  {
    Fw::String s;
    switch (e) {
      case CLOSED:
        s = "CLOSED";
        break;
      case OPEN:
        s = "OPEN";
        break;
      default:
        s = "[invalid]";
        break;
    }
    sb.format("%s (%" PRIi32 ")", s.toChar(), e);
  }

#elif FW_ENABLE_TEXT_LOGGING

  void Open ::
    toString(Fw::StringBase& sb) const
  {
    sb.format("%" PRIi32 "", e);
  }

#endif

}
