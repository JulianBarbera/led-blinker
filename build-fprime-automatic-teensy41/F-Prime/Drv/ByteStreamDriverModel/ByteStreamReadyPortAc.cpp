// ======================================================================
// \title  ByteStreamReadyPortAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for ByteStreamReady port
// ======================================================================

#include "F-Prime/Drv/ByteStreamDriverModel/ByteStreamReadyPortAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/ExternalString.hpp"

namespace Drv {

  namespace {

    // ----------------------------------------------------------------------
    // Port buffer class
    // ----------------------------------------------------------------------

    class ByteStreamReadyPortBuffer : public Fw::SerializeBufferBase {

      public:

        Fw::Serializable::SizeType getBuffCapacity() const {
          return InputByteStreamReadyPort::SERIALIZED_SIZE;
        }

        U8* getBuffAddr() {
          return nullptr;
        }

        const U8* getBuffAddr() const {
          return nullptr;
        }

    };

  }

  // ----------------------------------------------------------------------
  // Input Port Member functions
  // ----------------------------------------------------------------------

  InputByteStreamReadyPort ::
    InputByteStreamReadyPort() :
      Fw::InputPortBase(),
      m_func(nullptr)
  {

  }

  void InputByteStreamReadyPort ::
    init()
  {
    Fw::InputPortBase::init();
  }

  void InputByteStreamReadyPort ::
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

  void InputByteStreamReadyPort ::
    invoke()
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    return this->m_func(this->m_comp, this->m_portNum);
  }

#if FW_PORT_SERIALIZATION == 1

  Fw::SerializeStatus InputByteStreamReadyPort ::
    invokeSerial(Fw::SerializeBufferBase& _buffer)
  {
    (void) _buffer;

#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    this->m_func(this->m_comp, this->m_portNum);

    return Fw::FW_SERIALIZE_OK;
  }

#endif

  // ----------------------------------------------------------------------
  // Output Port Member functions
  // ----------------------------------------------------------------------

  OutputByteStreamReadyPort ::
    OutputByteStreamReadyPort() :
      Fw::OutputPortBase(),
      m_port(nullptr)
  {

  }

  void OutputByteStreamReadyPort ::
    init()
  {
    Fw::OutputPortBase::init();
  }

  void OutputByteStreamReadyPort ::
    addCallPort(InputByteStreamReadyPort* callPort)
  {
    FW_ASSERT(callPort != nullptr);

    this->m_port = callPort;
    this->m_connObj = callPort;

#if FW_PORT_SERIALIZATION == 1
    this->m_serPort = nullptr;
#endif
  }

  void OutputByteStreamReadyPort ::
    invoke() const
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

#if FW_PORT_SERIALIZATION
    FW_ASSERT((this->m_port != nullptr) || (this->m_serPort != nullptr));

    if (this->m_port != nullptr) {
      this->m_port->invoke();
    }
    else {
      Fw::SerializeStatus _status;
      ByteStreamReadyPortBuffer _buffer;

      _status = this->m_serPort->invokeSerial(_buffer);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));
    }
#else
    FW_ASSERT(this->m_port != nullptr);
    this->m_port->invoke();
#endif
  }

}
