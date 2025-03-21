// ======================================================================
// \title  CmdSequencer_FileReadStageEnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for CmdSequencer_FileReadStage enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "F-Prime/Svc/CmdSequencer/CmdSequencer_FileReadStageEnumAc.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  CmdSequencer_FileReadStage& CmdSequencer_FileReadStage ::
    operator=(const CmdSequencer_FileReadStage& obj)
  {
    this->e = obj.e;
    return *this;
  }

  CmdSequencer_FileReadStage& CmdSequencer_FileReadStage ::
    operator=(T e1)
  {
    this->e = e1;
    return *this;
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const CmdSequencer_FileReadStage& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  bool CmdSequencer_FileReadStage ::
    isValid() const
  {
    return ((e >= READ_HEADER) && (e <= READ_SEQ_DATA_SIZE));
  }

  Fw::SerializeStatus CmdSequencer_FileReadStage ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    const Fw::SerializeStatus status = buffer.serialize(
        static_cast<SerialType>(this->e)
    );
    return status;
  }

  Fw::SerializeStatus CmdSequencer_FileReadStage ::
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

  void CmdSequencer_FileReadStage ::
    toString(Fw::StringBase& sb) const
  {
    Fw::String s;
    switch (e) {
      case READ_HEADER:
        s = "READ_HEADER";
        break;
      case READ_HEADER_SIZE:
        s = "READ_HEADER_SIZE";
        break;
      case DESER_SIZE:
        s = "DESER_SIZE";
        break;
      case DESER_NUM_RECORDS:
        s = "DESER_NUM_RECORDS";
        break;
      case DESER_TIME_BASE:
        s = "DESER_TIME_BASE";
        break;
      case DESER_TIME_CONTEXT:
        s = "DESER_TIME_CONTEXT";
        break;
      case READ_SEQ_CRC:
        s = "READ_SEQ_CRC";
        break;
      case READ_SEQ_DATA:
        s = "READ_SEQ_DATA";
        break;
      case READ_SEQ_DATA_SIZE:
        s = "READ_SEQ_DATA_SIZE";
        break;
      default:
        s = "[invalid]";
        break;
    }
    sb.format("%s (%" PRIi32 ")", s.toChar(), e);
  }

#elif FW_ENABLE_TEXT_LOGGING

  void CmdSequencer_FileReadStage ::
    toString(Fw::StringBase& sb) const
  {
    sb.format("%" PRIi32 "", e);
  }

#endif

}
