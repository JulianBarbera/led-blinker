// ======================================================================
// \title  GpioDriverComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for GpioDriver component base class
// ======================================================================

#include "Arduino/Drv/GpioDriver/GpioDriverComponentAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/ExternalString.hpp"
#if FW_ENABLE_TEXT_LOGGING
#include "Fw/Types/String.hpp"
#endif

namespace Arduino {

  // ----------------------------------------------------------------------
  // Component initialization
  // ----------------------------------------------------------------------

  void GpioDriverComponentBase ::
    init(FwEnumStoreType instance)
  {
    // Initialize base class
    Fw::PassiveComponentBase::init(instance);

    // Connect input port gpioRead
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_gpioRead_InputPorts());
      port++
    ) {
      this->m_gpioRead_InputPort[port].init();
      this->m_gpioRead_InputPort[port].addCallComp(
        this,
        m_p_gpioRead_in
      );
      this->m_gpioRead_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_gpioRead_InputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_gpioRead_InputPort[port].setObjName(portName.toChar());
#endif
    }

    // Connect input port gpioWrite
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_gpioWrite_InputPorts());
      port++
    ) {
      this->m_gpioWrite_InputPort[port].init();
      this->m_gpioWrite_InputPort[port].addCallComp(
        this,
        m_p_gpioWrite_in
      );
      this->m_gpioWrite_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_gpioWrite_InputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_gpioWrite_InputPort[port].setObjName(portName.toChar());
#endif
    }
  }

  // ----------------------------------------------------------------------
  // Getters for typed input ports
  // ----------------------------------------------------------------------

  Drv::InputGpioReadPort* GpioDriverComponentBase ::
    get_gpioRead_InputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_gpioRead_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return &this->m_gpioRead_InputPort[portNum];
  }

  Drv::InputGpioWritePort* GpioDriverComponentBase ::
    get_gpioWrite_InputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_gpioWrite_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return &this->m_gpioWrite_InputPort[portNum];
  }

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  GpioDriverComponentBase ::
    GpioDriverComponentBase(const char* compName) :
      Fw::PassiveComponentBase(compName)
  {

  }

  GpioDriverComponentBase ::
    ~GpioDriverComponentBase()
  {

  }

  // ----------------------------------------------------------------------
  // Getters for numbers of typed input ports
  // ----------------------------------------------------------------------

  FwIndexType GpioDriverComponentBase ::
    getNum_gpioRead_InputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_gpioRead_InputPort));
  }

  FwIndexType GpioDriverComponentBase ::
    getNum_gpioWrite_InputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_gpioWrite_InputPort));
  }

  // ----------------------------------------------------------------------
  // Port handler base-class functions for typed input ports
  //
  // Call these functions directly to bypass the corresponding ports
  // ----------------------------------------------------------------------

  Drv::GpioStatus GpioDriverComponentBase ::
    gpioRead_handlerBase(
        FwIndexType portNum,
        Fw::Logic& state
    )
  {
    // Make sure port number is valid
    FW_ASSERT(
      portNum < this->getNum_gpioRead_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    Drv::GpioStatus retVal;

    // Call handler function
    retVal = this->gpioRead_handler(
      portNum,
      state
    );

    return retVal;
  }

  Drv::GpioStatus GpioDriverComponentBase ::
    gpioWrite_handlerBase(
        FwIndexType portNum,
        const Fw::Logic& state
    )
  {
    // Make sure port number is valid
    FW_ASSERT(
      portNum < this->getNum_gpioWrite_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    Drv::GpioStatus retVal;

    // Call handler function
    retVal = this->gpioWrite_handler(
      portNum,
      state
    );

    return retVal;
  }

  // ----------------------------------------------------------------------
  // Calls for messages received on typed input ports
  // ----------------------------------------------------------------------

  Drv::GpioStatus GpioDriverComponentBase ::
    m_p_gpioRead_in(
        Fw::PassiveComponentBase* callComp,
        FwIndexType portNum,
        Fw::Logic& state
    )
  {
    FW_ASSERT(callComp);
    GpioDriverComponentBase* compPtr = static_cast<GpioDriverComponentBase*>(callComp);
    return compPtr->gpioRead_handlerBase(
      portNum,
      state
    );
  }

  Drv::GpioStatus GpioDriverComponentBase ::
    m_p_gpioWrite_in(
        Fw::PassiveComponentBase* callComp,
        FwIndexType portNum,
        const Fw::Logic& state
    )
  {
    FW_ASSERT(callComp);
    GpioDriverComponentBase* compPtr = static_cast<GpioDriverComponentBase*>(callComp);
    return compPtr->gpioWrite_handlerBase(
      portNum,
      state
    );
  }

}
