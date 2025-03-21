// ======================================================================
// \title  ByteStreamRecvPortAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for ByteStreamRecv port
// ======================================================================

#include "F-Prime/Drv/ByteStreamDriverModel/ByteStreamRecvPortAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/ExternalString.hpp"

namespace Drv {

  namespace {

    // ----------------------------------------------------------------------
    // Port buffer class
    // ----------------------------------------------------------------------

    class ByteStreamRecvPortBuffer : public Fw::SerializeBufferBase {

      public:

        Fw::Serializable::SizeType getBuffCapacity() const {
          return InputByteStreamRecvPort::SERIALIZED_SIZE;
        }

        U8* getBuffAddr() {
          return m_buff;
        }

        const U8* getBuffAddr() const {
          return m_buff;
        }

      private:

        U8 m_buff[InputByteStreamRecvPort::SERIALIZED_SIZE];

    };

  }

  // ----------------------------------------------------------------------
  // Input Port Member functions
  // ----------------------------------------------------------------------

  InputByteStreamRecvPort ::
    InputByteStreamRecvPort() :
      Fw::InputPortBase(),
      m_func(nullptr)
  {

  }

  void InputByteStreamRecvPort ::
    init()
  {
    Fw::InputPortBase::init();
  }

  void InputByteStreamRecvPort ::
    addCallComp(
        Fw::PassiveComponentBase* callComp,
        CompFuncPtr funcPtr
    )
  {
    FW_ASSERT(callComp != nullptr);
    FW_ASSERT(funcPtr != nullptr);

    this->m_comp = callComp;
    this->m_func = funcPtr;
    this->m_connObj = callComp;
  }

  void InputByteStreamRecvPort ::
    invoke(
        Fw::Buffer& recvBuffer,
        const Drv::RecvStatus& recvStatus
    )
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    return this->m_func(this->m_comp, this->m_portNum, recvBuffer, recvStatus);
  }

#if FW_PORT_SERIALIZATION == 1

  Fw::SerializeStatus InputByteStreamRecvPort ::
    invokeSerial(Fw::SerializeBufferBase& _buffer)
  {
    Fw::SerializeStatus _status;

#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    Fw::Buffer recvBuffer;
    _status = _buffer.deserialize(recvBuffer);
    if (_status != Fw::FW_SERIALIZE_OK) {
      return _status;
    }

    Drv::RecvStatus recvStatus;
    _status = _buffer.deserialize(recvStatus);
    if (_status != Fw::FW_SERIALIZE_OK) {
      return _status;
    }

    this->m_func(this->m_comp, this->m_portNum, recvBuffer, recvStatus);

    return Fw::FW_SERIALIZE_OK;
  }

#endif

  // ----------------------------------------------------------------------
  // Output Port Member functions
  // ----------------------------------------------------------------------

  OutputByteStreamRecvPort ::
    OutputByteStreamRecvPort() :
      Fw::OutputPortBase(),
      m_port(nullptr)
  {

  }

  void OutputByteStreamRecvPort ::
    init()
  {
    Fw::OutputPortBase::init();
  }

  void OutputByteStreamRecvPort ::
    addCallPort(InputByteStreamRecvPort* callPort)
  {
    FW_ASSERT(callPort != nullptr);

    this->m_port = callPort;
    this->m_connObj = callPort;

#if FW_PORT_SERIALIZATION == 1
    this->m_serPort = nullptr;
#endif
  }

  void OutputByteStreamRecvPort ::
    invoke(
        Fw::Buffer& recvBuffer,
        const Drv::RecvStatus& recvStatus
    ) const
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

#if FW_PORT_SERIALIZATION
    FW_ASSERT((this->m_port != nullptr) || (this->m_serPort != nullptr));

    if (this->m_port != nullptr) {
      this->m_port->invoke(recvBuffer, recvStatus);
    }
    else {
      Fw::SerializeStatus _status;
      ByteStreamRecvPortBuffer _buffer;

      _status = _buffer.serialize(recvBuffer);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));

      _status = _buffer.serialize(recvStatus);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));

      _status = this->m_serPort->invokeSerial(_buffer);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));
    }
#else
    FW_ASSERT(this->m_port != nullptr);
    this->m_port->invoke(recvBuffer, recvStatus);
#endif
  }

}
