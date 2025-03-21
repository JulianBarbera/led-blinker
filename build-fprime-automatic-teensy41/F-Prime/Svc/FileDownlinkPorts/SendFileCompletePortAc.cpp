// ======================================================================
// \title  SendFileCompletePortAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for SendFileComplete port
// ======================================================================

#include "F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/ExternalString.hpp"

namespace Svc {

  namespace {

    // ----------------------------------------------------------------------
    // Port buffer class
    // ----------------------------------------------------------------------

    class SendFileCompletePortBuffer : public Fw::SerializeBufferBase {

      public:

        Fw::Serializable::SizeType getBuffCapacity() const {
          return InputSendFileCompletePort::SERIALIZED_SIZE;
        }

        U8* getBuffAddr() {
          return m_buff;
        }

        const U8* getBuffAddr() const {
          return m_buff;
        }

      private:

        U8 m_buff[InputSendFileCompletePort::SERIALIZED_SIZE];

    };

  }

  // ----------------------------------------------------------------------
  // Input Port Member functions
  // ----------------------------------------------------------------------

  InputSendFileCompletePort ::
    InputSendFileCompletePort() :
      Fw::InputPortBase(),
      m_func(nullptr)
  {

  }

  void InputSendFileCompletePort ::
    init()
  {
    Fw::InputPortBase::init();
  }

  void InputSendFileCompletePort ::
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

  void InputSendFileCompletePort ::
    invoke(const Svc::SendFileResponse& resp)
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    return this->m_func(this->m_comp, this->m_portNum, resp);
  }

#if FW_PORT_SERIALIZATION == 1

  Fw::SerializeStatus InputSendFileCompletePort ::
    invokeSerial(Fw::SerializeBufferBase& _buffer)
  {
    Fw::SerializeStatus _status;

#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    Svc::SendFileResponse resp;
    _status = _buffer.deserialize(resp);
    if (_status != Fw::FW_SERIALIZE_OK) {
      return _status;
    }

    this->m_func(this->m_comp, this->m_portNum, resp);

    return Fw::FW_SERIALIZE_OK;
  }

#endif

  // ----------------------------------------------------------------------
  // Output Port Member functions
  // ----------------------------------------------------------------------

  OutputSendFileCompletePort ::
    OutputSendFileCompletePort() :
      Fw::OutputPortBase(),
      m_port(nullptr)
  {

  }

  void OutputSendFileCompletePort ::
    init()
  {
    Fw::OutputPortBase::init();
  }

  void OutputSendFileCompletePort ::
    addCallPort(InputSendFileCompletePort* callPort)
  {
    FW_ASSERT(callPort != nullptr);

    this->m_port = callPort;
    this->m_connObj = callPort;

#if FW_PORT_SERIALIZATION == 1
    this->m_serPort = nullptr;
#endif
  }

  void OutputSendFileCompletePort ::
    invoke(const Svc::SendFileResponse& resp) const
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

#if FW_PORT_SERIALIZATION
    FW_ASSERT((this->m_port != nullptr) || (this->m_serPort != nullptr));

    if (this->m_port != nullptr) {
      this->m_port->invoke(resp);
    }
    else {
      Fw::SerializeStatus _status;
      SendFileCompletePortBuffer _buffer;

      _status = _buffer.serialize(resp);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));

      _status = this->m_serPort->invokeSerial(_buffer);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));
    }
#else
    FW_ASSERT(this->m_port != nullptr);
    this->m_port->invoke(resp);
#endif
  }

}
