// ======================================================================
// \title  PrmDb_PrmWriteErrorEnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for PrmDb_PrmWriteError enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  PrmDb_PrmWriteError& PrmDb_PrmWriteError ::
    operator=(const PrmDb_PrmWriteError& obj)
  {
    this->e = obj.e;
    return *this;
  }

  PrmDb_PrmWriteError& PrmDb_PrmWriteError ::
    operator=(T e1)
  {
    this->e = e1;
    return *this;
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const PrmDb_PrmWriteError& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  bool PrmDb_PrmWriteError ::
    isValid() const
  {
    return ((e >= OPEN) && (e <= PARAMETER_VALUE_SIZE));
  }

  Fw::SerializeStatus PrmDb_PrmWriteError ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    const Fw::SerializeStatus status = buffer.serialize(
        static_cast<SerialType>(this->e)
    );
    return status;
  }

  Fw::SerializeStatus PrmDb_PrmWriteError ::
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

  void PrmDb_PrmWriteError ::
    toString(Fw::StringBase& sb) const
  {
    Fw::String s;
    switch (e) {
      case OPEN:
        s = "OPEN";
        break;
      case DELIMITER:
        s = "DELIMITER";
        break;
      case DELIMITER_SIZE:
        s = "DELIMITER_SIZE";
        break;
      case RECORD_SIZE:
        s = "RECORD_SIZE";
        break;
      case RECORD_SIZE_SIZE:
        s = "RECORD_SIZE_SIZE";
        break;
      case PARAMETER_ID:
        s = "PARAMETER_ID";
        break;
      case PARAMETER_ID_SIZE:
        s = "PARAMETER_ID_SIZE";
        break;
      case PARAMETER_VALUE:
        s = "PARAMETER_VALUE";
        break;
      case PARAMETER_VALUE_SIZE:
        s = "PARAMETER_VALUE_SIZE";
        break;
      default:
        s = "[invalid]";
        break;
    }
    sb.format("%s (%" PRIi32 ")", s.toChar(), e);
  }

#elif FW_ENABLE_TEXT_LOGGING

  void PrmDb_PrmWriteError ::
    toString(Fw::StringBase& sb) const
  {
    sb.format("%" PRIi32 "", e);
  }

#endif

}
