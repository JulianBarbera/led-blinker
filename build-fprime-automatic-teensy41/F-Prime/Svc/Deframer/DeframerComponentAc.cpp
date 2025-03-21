// ======================================================================
// \title  DeframerComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Deframer component base class
// ======================================================================

#include "F-Prime/Svc/Deframer/DeframerComponentAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/ExternalString.hpp"
#if FW_ENABLE_TEXT_LOGGING
#include "Fw/Types/String.hpp"
#endif

namespace Svc {

  // ----------------------------------------------------------------------
  // Component initialization
  // ----------------------------------------------------------------------

  void DeframerComponentBase ::
    init(FwEnumStoreType instance)
  {
    // Initialize base class
    Fw::PassiveComponentBase::init(instance);

    // Connect input port cmdResponseIn
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_cmdResponseIn_InputPorts());
      port++
    ) {
      this->m_cmdResponseIn_InputPort[port].init();
      this->m_cmdResponseIn_InputPort[port].addCallComp(
        this,
        m_p_cmdResponseIn_in
      );
      this->m_cmdResponseIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_cmdResponseIn_InputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_cmdResponseIn_InputPort[port].setObjName(portName.toChar());
#endif
    }

    // Connect input port framedIn
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_framedIn_InputPorts());
      port++
    ) {
      this->m_framedIn_InputPort[port].init();
      this->m_framedIn_InputPort[port].addCallComp(
        this,
        m_p_framedIn_in
      );
      this->m_framedIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_framedIn_InputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_framedIn_InputPort[port].setObjName(portName.toChar());
#endif
    }

    // Connect input port schedIn
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_schedIn_InputPorts());
      port++
    ) {
      this->m_schedIn_InputPort[port].init();
      this->m_schedIn_InputPort[port].addCallComp(
        this,
        m_p_schedIn_in
      );
      this->m_schedIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_schedIn_InputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_schedIn_InputPort[port].setObjName(portName.toChar());
#endif
    }

    // Connect output port bufferAllocate
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_bufferAllocate_OutputPorts());
      port++
    ) {
      this->m_bufferAllocate_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_bufferAllocate_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_bufferAllocate_OutputPort[port].setObjName(portName.toChar());
#endif
    }

    // Connect output port bufferDeallocate
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_bufferDeallocate_OutputPorts());
      port++
    ) {
      this->m_bufferDeallocate_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_bufferDeallocate_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_bufferDeallocate_OutputPort[port].setObjName(portName.toChar());
#endif
    }

    // Connect output port bufferOut
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_bufferOut_OutputPorts());
      port++
    ) {
      this->m_bufferOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_bufferOut_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_bufferOut_OutputPort[port].setObjName(portName.toChar());
#endif
    }

    // Connect output port comOut
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_comOut_OutputPorts());
      port++
    ) {
      this->m_comOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_comOut_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_comOut_OutputPort[port].setObjName(portName.toChar());
#endif
    }

    // Connect output port framedDeallocate
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_framedDeallocate_OutputPorts());
      port++
    ) {
      this->m_framedDeallocate_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_framedDeallocate_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_framedDeallocate_OutputPort[port].setObjName(portName.toChar());
#endif
    }

    // Connect output port framedPoll
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_framedPoll_OutputPorts());
      port++
    ) {
      this->m_framedPoll_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_framedPoll_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_framedPoll_OutputPort[port].setObjName(portName.toChar());
#endif
    }
  }

  // ----------------------------------------------------------------------
  // Getters for typed input ports
  // ----------------------------------------------------------------------

  Fw::InputCmdResponsePort* DeframerComponentBase ::
    get_cmdResponseIn_InputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_cmdResponseIn_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return &this->m_cmdResponseIn_InputPort[portNum];
  }

  Drv::InputByteStreamRecvPort* DeframerComponentBase ::
    get_framedIn_InputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_framedIn_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return &this->m_framedIn_InputPort[portNum];
  }

  Svc::InputSchedPort* DeframerComponentBase ::
    get_schedIn_InputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_schedIn_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return &this->m_schedIn_InputPort[portNum];
  }

  // ----------------------------------------------------------------------
  // Connect typed input ports to typed output ports
  // ----------------------------------------------------------------------

  void DeframerComponentBase ::
    set_bufferAllocate_OutputPort(
        FwIndexType portNum,
        Fw::InputBufferGetPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_bufferAllocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_bufferAllocate_OutputPort[portNum].addCallPort(port);
  }

  void DeframerComponentBase ::
    set_bufferDeallocate_OutputPort(
        FwIndexType portNum,
        Fw::InputBufferSendPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_bufferDeallocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_bufferDeallocate_OutputPort[portNum].addCallPort(port);
  }

  void DeframerComponentBase ::
    set_bufferOut_OutputPort(
        FwIndexType portNum,
        Fw::InputBufferSendPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_bufferOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_bufferOut_OutputPort[portNum].addCallPort(port);
  }

  void DeframerComponentBase ::
    set_comOut_OutputPort(
        FwIndexType portNum,
        Fw::InputComPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_comOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_comOut_OutputPort[portNum].addCallPort(port);
  }

  void DeframerComponentBase ::
    set_framedDeallocate_OutputPort(
        FwIndexType portNum,
        Fw::InputBufferSendPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_framedDeallocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_framedDeallocate_OutputPort[portNum].addCallPort(port);
  }

  void DeframerComponentBase ::
    set_framedPoll_OutputPort(
        FwIndexType portNum,
        Drv::InputByteStreamPollPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_framedPoll_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_framedPoll_OutputPort[portNum].addCallPort(port);
  }

#if FW_PORT_SERIALIZATION

  // ----------------------------------------------------------------------
  // Connect serial input ports to typed output ports
  // ----------------------------------------------------------------------

  void DeframerComponentBase ::
    set_bufferDeallocate_OutputPort(
        FwIndexType portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_bufferDeallocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_bufferDeallocate_OutputPort[portNum].registerSerialPort(port);
  }

  void DeframerComponentBase ::
    set_bufferOut_OutputPort(
        FwIndexType portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_bufferOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_bufferOut_OutputPort[portNum].registerSerialPort(port);
  }

  void DeframerComponentBase ::
    set_comOut_OutputPort(
        FwIndexType portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_comOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_comOut_OutputPort[portNum].registerSerialPort(port);
  }

  void DeframerComponentBase ::
    set_framedDeallocate_OutputPort(
        FwIndexType portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_framedDeallocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_framedDeallocate_OutputPort[portNum].registerSerialPort(port);
  }

#endif

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  DeframerComponentBase ::
    DeframerComponentBase(const char* compName) :
      Fw::PassiveComponentBase(compName)
  {

  }

  DeframerComponentBase ::
    ~DeframerComponentBase()
  {

  }

  // ----------------------------------------------------------------------
  // Getters for numbers of typed input ports
  // ----------------------------------------------------------------------

  FwIndexType DeframerComponentBase ::
    getNum_cmdResponseIn_InputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_cmdResponseIn_InputPort));
  }

  FwIndexType DeframerComponentBase ::
    getNum_framedIn_InputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_framedIn_InputPort));
  }

  FwIndexType DeframerComponentBase ::
    getNum_schedIn_InputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_schedIn_InputPort));
  }

  // ----------------------------------------------------------------------
  // Getters for numbers of typed output ports
  // ----------------------------------------------------------------------

  FwIndexType DeframerComponentBase ::
    getNum_bufferAllocate_OutputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_bufferAllocate_OutputPort));
  }

  FwIndexType DeframerComponentBase ::
    getNum_bufferDeallocate_OutputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_bufferDeallocate_OutputPort));
  }

  FwIndexType DeframerComponentBase ::
    getNum_bufferOut_OutputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_bufferOut_OutputPort));
  }

  FwIndexType DeframerComponentBase ::
    getNum_comOut_OutputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_comOut_OutputPort));
  }

  FwIndexType DeframerComponentBase ::
    getNum_framedDeallocate_OutputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_framedDeallocate_OutputPort));
  }

  FwIndexType DeframerComponentBase ::
    getNum_framedPoll_OutputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_framedPoll_OutputPort));
  }

  // ----------------------------------------------------------------------
  // Connection status queries for typed output ports
  // ----------------------------------------------------------------------

  bool DeframerComponentBase ::
    isConnected_bufferAllocate_OutputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_bufferAllocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_bufferAllocate_OutputPort[portNum].isConnected();
  }

  bool DeframerComponentBase ::
    isConnected_bufferDeallocate_OutputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_bufferDeallocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_bufferDeallocate_OutputPort[portNum].isConnected();
  }

  bool DeframerComponentBase ::
    isConnected_bufferOut_OutputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_bufferOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_bufferOut_OutputPort[portNum].isConnected();
  }

  bool DeframerComponentBase ::
    isConnected_comOut_OutputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_comOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_comOut_OutputPort[portNum].isConnected();
  }

  bool DeframerComponentBase ::
    isConnected_framedDeallocate_OutputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_framedDeallocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_framedDeallocate_OutputPort[portNum].isConnected();
  }

  bool DeframerComponentBase ::
    isConnected_framedPoll_OutputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_framedPoll_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_framedPoll_OutputPort[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Port handler base-class functions for typed input ports
  //
  // Call these functions directly to bypass the corresponding ports
  // ----------------------------------------------------------------------

  void DeframerComponentBase ::
    cmdResponseIn_handlerBase(
        FwIndexType portNum,
        FwOpcodeType opCode,
        U32 cmdSeq,
        const Fw::CmdResponse& response
    )
  {
    // Make sure port number is valid
    FW_ASSERT(
      portNum < this->getNum_cmdResponseIn_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    // Call handler function
    this->cmdResponseIn_handler(
      portNum,
      opCode,
      cmdSeq,
      response
    );
  }

  void DeframerComponentBase ::
    framedIn_handlerBase(
        FwIndexType portNum,
        Fw::Buffer& recvBuffer,
        const Drv::RecvStatus& recvStatus
    )
  {
    // Make sure port number is valid
    FW_ASSERT(
      portNum < this->getNum_framedIn_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    // Lock guard mutex before calling
    this->lock();

    // Call handler function
    this->framedIn_handler(
      portNum,
      recvBuffer,
      recvStatus
    );

    // Unlock guard mutex
    this->unLock();
  }

  void DeframerComponentBase ::
    schedIn_handlerBase(
        FwIndexType portNum,
        U32 context
    )
  {
    // Make sure port number is valid
    FW_ASSERT(
      portNum < this->getNum_schedIn_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    // Lock guard mutex before calling
    this->lock();

    // Call handler function
    this->schedIn_handler(
      portNum,
      context
    );

    // Unlock guard mutex
    this->unLock();
  }

  // ----------------------------------------------------------------------
  // Invocation functions for typed output ports
  // ----------------------------------------------------------------------

  Fw::Buffer DeframerComponentBase ::
    bufferAllocate_out(
        FwIndexType portNum,
        U32 size
    )
  {
    FW_ASSERT(
      portNum < this->getNum_bufferAllocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );
    return this->m_bufferAllocate_OutputPort[portNum].invoke(
      size
    );
  }

  void DeframerComponentBase ::
    bufferDeallocate_out(
        FwIndexType portNum,
        Fw::Buffer& fwBuffer
    )
  {
    FW_ASSERT(
      portNum < this->getNum_bufferDeallocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );
    this->m_bufferDeallocate_OutputPort[portNum].invoke(
      fwBuffer
    );
  }

  void DeframerComponentBase ::
    bufferOut_out(
        FwIndexType portNum,
        Fw::Buffer& fwBuffer
    )
  {
    FW_ASSERT(
      portNum < this->getNum_bufferOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );
    this->m_bufferOut_OutputPort[portNum].invoke(
      fwBuffer
    );
  }

  void DeframerComponentBase ::
    comOut_out(
        FwIndexType portNum,
        Fw::ComBuffer& data,
        U32 context
    )
  {
    FW_ASSERT(
      portNum < this->getNum_comOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );
    this->m_comOut_OutputPort[portNum].invoke(
      data,
      context
    );
  }

  void DeframerComponentBase ::
    framedDeallocate_out(
        FwIndexType portNum,
        Fw::Buffer& fwBuffer
    )
  {
    FW_ASSERT(
      portNum < this->getNum_framedDeallocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );
    this->m_framedDeallocate_OutputPort[portNum].invoke(
      fwBuffer
    );
  }

  Drv::PollStatus DeframerComponentBase ::
    framedPoll_out(
        FwIndexType portNum,
        Fw::Buffer& pollBuffer
    )
  {
    FW_ASSERT(
      portNum < this->getNum_framedPoll_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );
    return this->m_framedPoll_OutputPort[portNum].invoke(
      pollBuffer
    );
  }

  // ----------------------------------------------------------------------
  // Mutex operations for guarded ports
  //
  // You can override these operations to provide more sophisticated
  // synchronization
  // ----------------------------------------------------------------------

  void DeframerComponentBase ::
    lock()
  {
    this->m_guardedPortMutex.lock();
  }

  void DeframerComponentBase ::
    unLock()
  {
    this->m_guardedPortMutex.unLock();
  }

  // ----------------------------------------------------------------------
  // Calls for messages received on typed input ports
  // ----------------------------------------------------------------------

  void DeframerComponentBase ::
    m_p_cmdResponseIn_in(
        Fw::PassiveComponentBase* callComp,
        FwIndexType portNum,
        FwOpcodeType opCode,
        U32 cmdSeq,
        const Fw::CmdResponse& response
    )
  {
    FW_ASSERT(callComp);
    DeframerComponentBase* compPtr = static_cast<DeframerComponentBase*>(callComp);
    compPtr->cmdResponseIn_handlerBase(
      portNum,
      opCode,
      cmdSeq,
      response
    );
  }

  void DeframerComponentBase ::
    m_p_framedIn_in(
        Fw::PassiveComponentBase* callComp,
        FwIndexType portNum,
        Fw::Buffer& recvBuffer,
        const Drv::RecvStatus& recvStatus
    )
  {
    FW_ASSERT(callComp);
    DeframerComponentBase* compPtr = static_cast<DeframerComponentBase*>(callComp);
    compPtr->framedIn_handlerBase(
      portNum,
      recvBuffer,
      recvStatus
    );
  }

  void DeframerComponentBase ::
    m_p_schedIn_in(
        Fw::PassiveComponentBase* callComp,
        FwIndexType portNum,
        U32 context
    )
  {
    FW_ASSERT(callComp);
    DeframerComponentBase* compPtr = static_cast<DeframerComponentBase*>(callComp);
    compPtr->schedIn_handlerBase(
      portNum,
      context
    );
  }

}
