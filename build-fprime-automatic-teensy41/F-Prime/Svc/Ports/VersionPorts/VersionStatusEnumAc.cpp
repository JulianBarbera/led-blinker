// ======================================================================
// \title  VersionStatusEnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for VersionStatus enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "F-Prime/Svc/Ports/VersionPorts/VersionStatusEnumAc.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  VersionStatus& VersionStatus ::
    operator=(const VersionStatus& obj)
  {
    this->e = obj.e;
    return *this;
  }

  VersionStatus& VersionStatus ::
    operator=(T e1)
  {
    this->e = e1;
    return *this;
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const VersionStatus& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  bool VersionStatus ::
    isValid() const
  {
    return ((e >= OK) && (e <= FAILURE));
  }

  Fw::SerializeStatus VersionStatus ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    const Fw::SerializeStatus status = buffer.serialize(
        static_cast<SerialType>(this->e)
    );
    return status;
  }

  Fw::SerializeStatus VersionStatus ::
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

  void VersionStatus ::
    toString(Fw::StringBase& sb) const
  {
    Fw::String s;
    switch (e) {
      case OK:
        s = "OK";
        break;
      case FAILURE:
        s = "FAILURE";
        break;
      default:
        s = "[invalid]";
        break;
    }
    sb.format("%s (%" PRIi32 ")", s.toChar(), e);
  }

#elif FW_ENABLE_TEXT_LOGGING

  void VersionStatus ::
    toString(Fw::StringBase& sb) const
  {
    sb.format("%" PRIi32 "", e);
  }

#endif

}
