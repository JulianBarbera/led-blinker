// ======================================================================
// \title  BufferSendPortAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for BufferSend port
// ======================================================================

#include "F-Prime/Fw/Buffer/BufferSendPortAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/ExternalString.hpp"

namespace Fw {

  namespace {

    // ----------------------------------------------------------------------
    // Port buffer class
    // ----------------------------------------------------------------------

    class BufferSendPortBuffer : public Fw::SerializeBufferBase {

      public:

        Fw::Serializable::SizeType getBuffCapacity() const {
          return InputBufferSendPort::SERIALIZED_SIZE;
        }

        U8* getBuffAddr() {
          return m_buff;
        }

        const U8* getBuffAddr() const {
          return m_buff;
        }

      private:

        U8 m_buff[InputBufferSendPort::SERIALIZED_SIZE];

    };

  }

  // ----------------------------------------------------------------------
  // Input Port Member functions
  // ----------------------------------------------------------------------

  InputBufferSendPort ::
    InputBufferSendPort() :
      Fw::InputPortBase(),
      m_func(nullptr)
  {

  }

  void InputBufferSendPort ::
    init()
  {
    Fw::InputPortBase::init();
  }

  void InputBufferSendPort ::
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

  void InputBufferSendPort ::
    invoke(Fw::Buffer& fwBuffer)
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    return this->m_func(this->m_comp, this->m_portNum, fwBuffer);
  }

#if FW_PORT_SERIALIZATION == 1

  Fw::SerializeStatus InputBufferSendPort ::
    invokeSerial(Fw::SerializeBufferBase& _buffer)
  {
    Fw::SerializeStatus _status;

#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    Fw::Buffer fwBuffer;
    _status = _buffer.deserialize(fwBuffer);
    if (_status != Fw::FW_SERIALIZE_OK) {
      return _status;
    }

    this->m_func(this->m_comp, this->m_portNum, fwBuffer);

    return Fw::FW_SERIALIZE_OK;
  }

#endif

  // ----------------------------------------------------------------------
  // Output Port Member functions
  // ----------------------------------------------------------------------

  OutputBufferSendPort ::
    OutputBufferSendPort() :
      Fw::OutputPortBase(),
      m_port(nullptr)
  {

  }

  void OutputBufferSendPort ::
    init()
  {
    Fw::OutputPortBase::init();
  }

  void OutputBufferSendPort ::
    addCallPort(InputBufferSendPort* callPort)
  {
    FW_ASSERT(callPort != nullptr);

    this->m_port = callPort;
    this->m_connObj = callPort;

#if FW_PORT_SERIALIZATION == 1
    this->m_serPort = nullptr;
#endif
  }

  void OutputBufferSendPort ::
    invoke(Fw::Buffer& fwBuffer) const
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

#if FW_PORT_SERIALIZATION
    FW_ASSERT((this->m_port != nullptr) || (this->m_serPort != nullptr));

    if (this->m_port != nullptr) {
      this->m_port->invoke(fwBuffer);
    }
    else {
      Fw::SerializeStatus _status;
      BufferSendPortBuffer _buffer;

      _status = _buffer.serialize(fwBuffer);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));

      _status = this->m_serPort->invokeSerial(_buffer);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));
    }
#else
    FW_ASSERT(this->m_port != nullptr);
    this->m_port->invoke(fwBuffer);
#endif
  }

}
