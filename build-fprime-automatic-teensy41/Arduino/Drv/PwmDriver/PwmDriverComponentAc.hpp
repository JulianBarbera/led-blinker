// ======================================================================
// \title  PwmDriverComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PwmDriver component base class
// ======================================================================

#ifndef Arduino_PwmDriverComponentAc_HPP
#define Arduino_PwmDriverComponentAc_HPP

#include "Arduino/Drv/PwmDriver/DutyCyclePortAc.hpp"
#include "FpConfig.hpp"
#include "Fw/Comp/ActiveComponentBase.hpp"
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Port/OutputSerializePort.hpp"

namespace Arduino {

  //! \class PwmDriverComponentBase
  //! \brief Auto-generated base for PwmDriver component
  //!
  //! PWM Driver for Arduino Boards
  class PwmDriverComponentBase :
    public Fw::PassiveComponentBase
  {

      // ----------------------------------------------------------------------
      // Friend classes
      // ----------------------------------------------------------------------

      //! Friend class for white-box testing
      friend class PwmDriverComponentBaseFriend;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      //! Enumerations for numbers of typed input ports
      enum {
        NUM_SETDUTYCYCLE_INPUT_PORTS = 1,
      };

    public:

      // ----------------------------------------------------------------------
      // Component initialization
      // ----------------------------------------------------------------------

      //! Initialize PwmDriverComponentBase object
      void init(
          FwEnumStoreType instance = 0 //!< The instance number
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for typed input ports
      // ----------------------------------------------------------------------

      //! Get typed input port at index
      //!
      //! \return setDutyCycle[portNum]
      Drv::InputDutyCyclePort* get_setDutyCycle_InputPort(
          FwIndexType portNum //!< The port number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct PwmDriverComponentBase object
      PwmDriverComponentBase(
          const char* compName = "" //!< The component name
      );

      //! Destroy PwmDriverComponentBase object
      virtual ~PwmDriverComponentBase();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed input ports
      // ----------------------------------------------------------------------

      //! Get the number of setDutyCycle input ports
      //!
      //! \return The number of setDutyCycle input ports
      FwIndexType getNum_setDutyCycle_InputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Handlers to implement for typed input ports
      // ----------------------------------------------------------------------

      //! Handler for input port setDutyCycle
      virtual Fw::Success setDutyCycle_handler(
          FwIndexType portNum, //!< The port number
          U8 dutyCycle
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Port handler base-class functions for typed input ports
      //
      // Call these functions directly to bypass the corresponding ports
      // ----------------------------------------------------------------------

      //! Handler base-class function for input port setDutyCycle
      Fw::Success setDutyCycle_handlerBase(
          FwIndexType portNum, //!< The port number
          U8 dutyCycle
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Calls for messages received on typed input ports
      // ----------------------------------------------------------------------

      //! Callback for port setDutyCycle
      static Fw::Success m_p_setDutyCycle_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          FwIndexType portNum, //!< The port number
          U8 dutyCycle
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Typed input ports
      // ----------------------------------------------------------------------

      //! Input port setDutyCycle
      Drv::InputDutyCyclePort m_setDutyCycle_InputPort[NUM_SETDUTYCYCLE_INPUT_PORTS];

  };

}

#endif
