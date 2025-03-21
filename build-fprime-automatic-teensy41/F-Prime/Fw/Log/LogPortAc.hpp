// ======================================================================
// \title  LogPortAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for Log port
// ======================================================================

#ifndef Fw_LogPortAc_HPP
#define Fw_LogPortAc_HPP

#include <cstdio>
#include <cstring>

#include "FpConfig.hpp"
#include "Fw/Comp/PassiveComponentBase.hpp"
#include "Fw/Log/LogBuffer.hpp"
#include "Fw/Log/LogSeverityEnumAc.hpp"
#include "Fw/Port/InputPortBase.hpp"
#include "Fw/Port/OutputPortBase.hpp"
#include "Fw/Time/Time.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/StringType.hpp"

namespace Fw {

  //! Input Log port
  //! Event log port
  class InputLogPort :
    public Fw::InputPortBase
  {

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the serial representations of the port arguments
        SERIALIZED_SIZE =
          sizeof(FwEventIdType) +
          Fw::Time::SERIALIZED_SIZE +
          Fw::LogSeverity::SERIALIZED_SIZE +
          Fw::LogBuffer::SERIALIZED_SIZE
      };

    public:

      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      //! The port callback function type
      typedef void (*CompFuncPtr)(
        Fw::PassiveComponentBase* callComp,
        FwIndexType portNum,
        FwEventIdType id,
        Fw::Time& timeTag,
        const Fw::LogSeverity& severity,
        Fw::LogBuffer& args
      );

    public:

      // ----------------------------------------------------------------------
      // Input Port Member functions
      // ----------------------------------------------------------------------

      //! Constructor
      InputLogPort();

      //! Initialization function
      void init();

      //! Register a component
      void addCallComp(
          Fw::PassiveComponentBase* callComp, //!< The containing component
          CompFuncPtr funcPtr //!< The port callback function
      );

      //! Invoke a port interface
      void invoke(
          FwEventIdType id, //!< Log ID
          Fw::Time& timeTag, //!< Time Tag
          const Fw::LogSeverity& severity, //!< The severity argument
          Fw::LogBuffer& args //!< Buffer containing serialized log entry
      );

    private:

#if FW_PORT_SERIALIZATION == 1

      //! Invoke the port with serialized arguments
      Fw::SerializeStatus invokeSerial(Fw::SerializeBufferBase& _buffer);

#endif

    private:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      //! The pointer to the port callback function
      CompFuncPtr m_func;

  };

  //! Output Log port
  //! Event log port
  class OutputLogPort :
    public Fw::OutputPortBase
  {

    public:

      // ----------------------------------------------------------------------
      // Output Port Member functions
      // ----------------------------------------------------------------------

      //! Constructor
      OutputLogPort();

      //! Initialization function
      void init();

      //! Register an input port
      void addCallPort(
          InputLogPort* callPort //!< The input port
      );

      //! Invoke a port interface
      void invoke(
          FwEventIdType id, //!< Log ID
          Fw::Time& timeTag, //!< Time Tag
          const Fw::LogSeverity& severity, //!< The severity argument
          Fw::LogBuffer& args //!< Buffer containing serialized log entry
      ) const;

    private:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      //! The pointer to the input port
      InputLogPort* m_port;

  };

}

#endif
