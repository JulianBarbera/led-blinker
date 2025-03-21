// ======================================================================
// \title  SystemResourceEnabledEnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for SystemResourceEnabled enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  SystemResourceEnabled& SystemResourceEnabled ::
    operator=(const SystemResourceEnabled& obj)
  {
    this->e = obj.e;
    return *this;
  }

  SystemResourceEnabled& SystemResourceEnabled ::
    operator=(T e1)
  {
    this->e = e1;
    return *this;
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const SystemResourceEnabled& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  bool SystemResourceEnabled ::
    isValid() const
  {
    return ((e >= DISABLED) && (e <= ENABLED));
  }

  Fw::SerializeStatus SystemResourceEnabled ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    const Fw::SerializeStatus status = buffer.serialize(
        static_cast<SerialType>(this->e)
    );
    return status;
  }

  Fw::SerializeStatus SystemResourceEnabled ::
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

  void SystemResourceEnabled ::
    toString(Fw::StringBase& sb) const
  {
    Fw::String s;
    switch (e) {
      case DISABLED:
        s = "DISABLED";
        break;
      case ENABLED:
        s = "ENABLED";
        break;
      default:
        s = "[invalid]";
        break;
    }
    sb.format("%s (%" PRIi32 ")", s.toChar(), e);
  }

#elif FW_ENABLE_TEXT_LOGGING

  void SystemResourceEnabled ::
    toString(Fw::StringBase& sb) const
  {
    sb.format("%" PRIi32 "", e);
  }

#endif

}
