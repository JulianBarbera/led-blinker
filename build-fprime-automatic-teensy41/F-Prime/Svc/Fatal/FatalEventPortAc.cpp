// ======================================================================
// \title  FatalEventPortAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for FatalEvent port
// ======================================================================

#include "F-Prime/Svc/Fatal/FatalEventPortAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/ExternalString.hpp"

namespace Svc {

  namespace {

    // ----------------------------------------------------------------------
    // Port buffer class
    // ----------------------------------------------------------------------

    class FatalEventPortBuffer : public Fw::SerializeBufferBase {

      public:

        Fw::Serializable::SizeType getBuffCapacity() const {
          return InputFatalEventPort::SERIALIZED_SIZE;
        }

        U8* getBuffAddr() {
          return m_buff;
        }

        const U8* getBuffAddr() const {
          return m_buff;
        }

      private:

        U8 m_buff[InputFatalEventPort::SERIALIZED_SIZE];

    };

  }

  // ----------------------------------------------------------------------
  // Input Port Member functions
  // ----------------------------------------------------------------------

  InputFatalEventPort ::
    InputFatalEventPort() :
      Fw::InputPortBase(),
      m_func(nullptr)
  {

  }

  void InputFatalEventPort ::
    init()
  {
    Fw::InputPortBase::init();
  }

  void InputFatalEventPort ::
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

  void InputFatalEventPort ::
    invoke(FwEventIdType Id)
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    return this->m_func(this->m_comp, this->m_portNum, Id);
  }

#if FW_PORT_SERIALIZATION == 1

  Fw::SerializeStatus InputFatalEventPort ::
    invokeSerial(Fw::SerializeBufferBase& _buffer)
  {
    Fw::SerializeStatus _status;

#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    FwEventIdType Id;
    _status = _buffer.deserialize(Id);
    if (_status != Fw::FW_SERIALIZE_OK) {
      return _status;
    }

    this->m_func(this->m_comp, this->m_portNum, Id);

    return Fw::FW_SERIALIZE_OK;
  }

#endif

  // ----------------------------------------------------------------------
  // Output Port Member functions
  // ----------------------------------------------------------------------

  OutputFatalEventPort ::
    OutputFatalEventPort() :
      Fw::OutputPortBase(),
      m_port(nullptr)
  {

  }

  void OutputFatalEventPort ::
    init()
  {
    Fw::OutputPortBase::init();
  }

  void OutputFatalEventPort ::
    addCallPort(InputFatalEventPort* callPort)
  {
    FW_ASSERT(callPort != nullptr);

    this->m_port = callPort;
    this->m_connObj = callPort;

#if FW_PORT_SERIALIZATION == 1
    this->m_serPort = nullptr;
#endif
  }

  void OutputFatalEventPort ::
    invoke(FwEventIdType Id) const
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

#if FW_PORT_SERIALIZATION
    FW_ASSERT((this->m_port != nullptr) || (this->m_serPort != nullptr));

    if (this->m_port != nullptr) {
      this->m_port->invoke(Id);
    }
    else {
      Fw::SerializeStatus _status;
      FatalEventPortBuffer _buffer;

      _status = _buffer.serialize(Id);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));

      _status = this->m_serPort->invokeSerial(_buffer);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));
    }
#else
    FW_ASSERT(this->m_port != nullptr);
    this->m_port->invoke(Id);
#endif
  }

}
