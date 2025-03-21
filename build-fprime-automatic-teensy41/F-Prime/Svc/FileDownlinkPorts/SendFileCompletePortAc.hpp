// ======================================================================
// \title  SendFileCompletePortAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for SendFileComplete port
// ======================================================================

#ifndef Svc_SendFileCompletePortAc_HPP
#define Svc_SendFileCompletePortAc_HPP

#include <cstdio>
#include <cstring>

#include "FpConfig.hpp"
#include "Fw/Comp/PassiveComponentBase.hpp"
#include "Fw/Port/InputPortBase.hpp"
#include "Fw/Port/OutputPortBase.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/StringType.hpp"
#include "Svc/FileDownlinkPorts/SendFileResponseSerializableAc.hpp"

namespace Svc {

  //! Input SendFileComplete port
  //! FileDownlink response to send file request
  class InputSendFileCompletePort :
    public Fw::InputPortBase
  {

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the serial representations of the port arguments
        SERIALIZED_SIZE =
          Svc::SendFileResponse::SERIALIZED_SIZE
      };

    public:

      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      //! The port callback function type
      typedef void (*CompFuncPtr)(
        Fw::PassiveComponentBase* callComp,
        FwIndexType portNum,
        const Svc::SendFileResponse& resp
      );

    public:

      // ----------------------------------------------------------------------
      // Input Port Member functions
      // ----------------------------------------------------------------------

      //! Constructor
      InputSendFileCompletePort();

      //! Initialization function
      void init();

      //! Register a component
      void addCallComp(
          Fw::PassiveComponentBase* callComp, //!< The containing component
          CompFuncPtr funcPtr //!< The port callback function
      );

      //! Invoke a port interface
      void invoke(const Svc::SendFileResponse& resp);

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

  //! Output SendFileComplete port
  //! FileDownlink response to send file request
  class OutputSendFileCompletePort :
    public Fw::OutputPortBase
  {

    public:

      // ----------------------------------------------------------------------
      // Output Port Member functions
      // ----------------------------------------------------------------------

      //! Constructor
      OutputSendFileCompletePort();

      //! Initialization function
      void init();

      //! Register an input port
      void addCallPort(
          InputSendFileCompletePort* callPort //!< The input port
      );

      //! Invoke a port interface
      void invoke(const Svc::SendFileResponse& resp) const;

    private:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      //! The pointer to the input port
      InputSendFileCompletePort* m_port;

  };

}

#endif
