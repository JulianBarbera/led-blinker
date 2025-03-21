// ======================================================================
// \title  DpRequestPortAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for DpRequest port
// ======================================================================

#include "F-Prime/Fw/Dp/DpRequestPortAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/ExternalString.hpp"

namespace Fw {

  namespace {

    // ----------------------------------------------------------------------
    // Port buffer class
    // ----------------------------------------------------------------------

    class DpRequestPortBuffer : public Fw::SerializeBufferBase {

      public:

        Fw::Serializable::SizeType getBuffCapacity() const {
          return InputDpRequestPort::SERIALIZED_SIZE;
        }

        U8* getBuffAddr() {
          return m_buff;
        }

        const U8* getBuffAddr() const {
          return m_buff;
        }

      private:

        U8 m_buff[InputDpRequestPort::SERIALIZED_SIZE];

    };

  }

  // ----------------------------------------------------------------------
  // Input Port Member functions
  // ----------------------------------------------------------------------

  InputDpRequestPort ::
    InputDpRequestPort() :
      Fw::InputPortBase(),
      m_func(nullptr)
  {

  }

  void InputDpRequestPort ::
    init()
  {
    Fw::InputPortBase::init();
  }

  void InputDpRequestPort ::
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

  void InputDpRequestPort ::
    invoke(
        FwDpIdType id,
        FwSizeType dataSize
    )
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    return this->m_func(this->m_comp, this->m_portNum, id, dataSize);
  }

#if FW_PORT_SERIALIZATION == 1

  Fw::SerializeStatus InputDpRequestPort ::
    invokeSerial(Fw::SerializeBufferBase& _buffer)
  {
    Fw::SerializeStatus _status;

#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    FwDpIdType id;
    _status = _buffer.deserialize(id);
    if (_status != Fw::FW_SERIALIZE_OK) {
      return _status;
    }

    FwSizeType dataSize;
    _status = _buffer.deserialize(dataSize);
    if (_status != Fw::FW_SERIALIZE_OK) {
      return _status;
    }

    this->m_func(this->m_comp, this->m_portNum, id, dataSize);

    return Fw::FW_SERIALIZE_OK;
  }

#endif

  // ----------------------------------------------------------------------
  // Output Port Member functions
  // ----------------------------------------------------------------------

  OutputDpRequestPort ::
    OutputDpRequestPort() :
      Fw::OutputPortBase(),
      m_port(nullptr)
  {

  }

  void OutputDpRequestPort ::
    init()
  {
    Fw::OutputPortBase::init();
  }

  void OutputDpRequestPort ::
    addCallPort(InputDpRequestPort* callPort)
  {
    FW_ASSERT(callPort != nullptr);

    this->m_port = callPort;
    this->m_connObj = callPort;

#if FW_PORT_SERIALIZATION == 1
    this->m_serPort = nullptr;
#endif
  }

  void OutputDpRequestPort ::
    invoke(
        FwDpIdType id,
        FwSizeType dataSize
    ) const
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

#if FW_PORT_SERIALIZATION
    FW_ASSERT((this->m_port != nullptr) || (this->m_serPort != nullptr));

    if (this->m_port != nullptr) {
      this->m_port->invoke(id, dataSize);
    }
    else {
      Fw::SerializeStatus _status;
      DpRequestPortBuffer _buffer;

      _status = _buffer.serialize(id);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));

      _status = _buffer.serialize(dataSize);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));

      _status = this->m_serPort->invokeSerial(_buffer);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));
    }
#else
    FW_ASSERT(this->m_port != nullptr);
    this->m_port->invoke(id, dataSize);
#endif
  }

}
