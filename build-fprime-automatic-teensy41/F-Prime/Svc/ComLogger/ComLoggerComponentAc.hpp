// ======================================================================
// \title  ComLoggerComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for ComLogger component base class
// ======================================================================

#ifndef Svc_ComLoggerComponentAc_HPP
#define Svc_ComLoggerComponentAc_HPP

#include "FpConfig.hpp"
#include "Fw/Cmd/CmdPortAc.hpp"
#include "Fw/Cmd/CmdRegPortAc.hpp"
#include "Fw/Cmd/CmdResponsePortAc.hpp"
#include "Fw/Cmd/CmdString.hpp"
#include "Fw/Com/ComPortAc.hpp"
#include "Fw/Comp/ActiveComponentBase.hpp"
#include "Fw/Log/LogPortAc.hpp"
#include "Fw/Log/LogString.hpp"
#if FW_ENABLE_TEXT_LOGGING == 1
#include "Fw/Log/LogTextPortAc.hpp"
#endif
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Port/OutputSerializePort.hpp"
#include "Fw/Time/TimePortAc.hpp"
#include "Svc/Ping/PingPortAc.hpp"

namespace Svc {

  //! \class ComLoggerComponentBase
  //! \brief Auto-generated base for ComLogger component
  //!
  //! A component for logging Com buffers
  class ComLoggerComponentBase :
    public Fw::ActiveComponentBase
  {

      // ----------------------------------------------------------------------
      // Friend classes
      // ----------------------------------------------------------------------

      //! Friend class for white-box testing
      friend class ComLoggerComponentBaseFriend;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      //! Enumerations for numbers of special input ports
      enum {
        NUM_CMDIN_INPUT_PORTS = 1,
      };

      //! Enumerations for numbers of typed input ports
      enum {
        NUM_COMIN_INPUT_PORTS = 1,
        NUM_PINGIN_INPUT_PORTS = 1,
      };

      //! Enumerations for numbers of special output ports
      enum {
        NUM_LOGTEXT_OUTPUT_PORTS = 1,
        NUM_CMDREGOUT_OUTPUT_PORTS = 1,
        NUM_CMDRESPONSEOUT_OUTPUT_PORTS = 1,
        NUM_LOGOUT_OUTPUT_PORTS = 1,
        NUM_TIMECALLER_OUTPUT_PORTS = 1,
      };

      //! Enumerations for numbers of typed output ports
      enum {
        NUM_PINGOUT_OUTPUT_PORTS = 1,
      };

      //! Command opcodes
      enum {
        OPCODE_CLOSEFILE = 0x0, //!< Forces a close of the currently opened file.
      };

      //! Event IDs
      enum {
        EVENTID_FILEOPENERROR = 0x0, //!< The ComLogger encountered an error opening a file
        EVENTID_FILEWRITEERROR = 0x1, //!< The ComLogger encountered an error writing to a file
        EVENTID_FILEVALIDATIONERROR = 0x2, //!< The ComLogger encountered an error writing the validation file
        EVENTID_FILECLOSED = 0x3, //!< The ComLogger successfully closed a file on command.
        EVENTID_FILENOTINITIALIZED = 0x4,
      };

      //! Event throttle values: sets initial value of countdown variables
      enum {
        EVENTID_FILENOTINITIALIZED_THROTTLE = 5, //!< Throttle reset count for FileNotInitialized
      };

    public:

      // ----------------------------------------------------------------------
      // Component initialization
      // ----------------------------------------------------------------------

      //! Initialize ComLoggerComponentBase object
      void init(
          FwSizeType queueDepth, //!< The queue depth
          FwEnumStoreType instance = 0 //!< The instance number
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for special input ports
      // ----------------------------------------------------------------------

      //! Get special input port at index
      //!
      //! \return cmdIn[portNum]
      Fw::InputCmdPort* get_cmdIn_InputPort(
          FwIndexType portNum //!< The port number
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for typed input ports
      // ----------------------------------------------------------------------

      //! Get typed input port at index
      //!
      //! \return comIn[portNum]
      Fw::InputComPort* get_comIn_InputPort(
          FwIndexType portNum //!< The port number
      );

      //! Get typed input port at index
      //!
      //! \return pingIn[portNum]
      Svc::InputPingPort* get_pingIn_InputPort(
          FwIndexType portNum //!< The port number
      );

    public:

      // ----------------------------------------------------------------------
      // Connect input ports to special output ports
      // ----------------------------------------------------------------------

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Connect port to LogText[portNum]
      void set_LogText_OutputPort(
          FwIndexType portNum, //!< The port number
          Fw::InputLogTextPort* port //!< The input port
      );

#endif

      //! Connect port to cmdRegOut[portNum]
      void set_cmdRegOut_OutputPort(
          FwIndexType portNum, //!< The port number
          Fw::InputCmdRegPort* port //!< The input port
      );

      //! Connect port to cmdResponseOut[portNum]
      void set_cmdResponseOut_OutputPort(
          FwIndexType portNum, //!< The port number
          Fw::InputCmdResponsePort* port //!< The input port
      );

      //! Connect port to logOut[portNum]
      void set_logOut_OutputPort(
          FwIndexType portNum, //!< The port number
          Fw::InputLogPort* port //!< The input port
      );

      //! Connect port to timeCaller[portNum]
      void set_timeCaller_OutputPort(
          FwIndexType portNum, //!< The port number
          Fw::InputTimePort* port //!< The input port
      );

    public:

      // ----------------------------------------------------------------------
      // Connect typed input ports to typed output ports
      // ----------------------------------------------------------------------

      //! Connect port to pingOut[portNum]
      void set_pingOut_OutputPort(
          FwIndexType portNum, //!< The port number
          Svc::InputPingPort* port //!< The input port
      );

#if FW_PORT_SERIALIZATION

    public:

      // ----------------------------------------------------------------------
      // Connect serial input ports to special output ports
      // ----------------------------------------------------------------------

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Connect port to LogText[portNum]
      void set_LogText_OutputPort(
          FwIndexType portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

#endif

      //! Connect port to cmdRegOut[portNum]
      void set_cmdRegOut_OutputPort(
          FwIndexType portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to cmdResponseOut[portNum]
      void set_cmdResponseOut_OutputPort(
          FwIndexType portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to logOut[portNum]
      void set_logOut_OutputPort(
          FwIndexType portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to timeCaller[portNum]
      void set_timeCaller_OutputPort(
          FwIndexType portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

#endif

#if FW_PORT_SERIALIZATION

    public:

      // ----------------------------------------------------------------------
      // Connect serial input ports to typed output ports
      // ----------------------------------------------------------------------

      //! Connect port to pingOut[portNum]
      void set_pingOut_OutputPort(
          FwIndexType portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

#endif

    public:

      // ----------------------------------------------------------------------
      // Command registration
      // ----------------------------------------------------------------------

      //! \brief Register commands with the Command Dispatcher
      //!
      //! Connect the dispatcher first
      void regCommands();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct ComLoggerComponentBase object
      ComLoggerComponentBase(
          const char* compName = "" //!< The component name
      );

      //! Destroy ComLoggerComponentBase object
      virtual ~ComLoggerComponentBase();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of special input ports
      // ----------------------------------------------------------------------

      //! Get the number of cmdIn input ports
      //!
      //! \return The number of cmdIn input ports
      FwIndexType getNum_cmdIn_InputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed input ports
      // ----------------------------------------------------------------------

      //! Get the number of comIn input ports
      //!
      //! \return The number of comIn input ports
      FwIndexType getNum_comIn_InputPorts() const;

      //! Get the number of pingIn input ports
      //!
      //! \return The number of pingIn input ports
      FwIndexType getNum_pingIn_InputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of special output ports
      // ----------------------------------------------------------------------

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Get the number of LogText output ports
      //!
      //! \return The number of LogText output ports
      FwIndexType getNum_LogText_OutputPorts() const;

#endif

      //! Get the number of cmdRegOut output ports
      //!
      //! \return The number of cmdRegOut output ports
      FwIndexType getNum_cmdRegOut_OutputPorts() const;

      //! Get the number of cmdResponseOut output ports
      //!
      //! \return The number of cmdResponseOut output ports
      FwIndexType getNum_cmdResponseOut_OutputPorts() const;

      //! Get the number of logOut output ports
      //!
      //! \return The number of logOut output ports
      FwIndexType getNum_logOut_OutputPorts() const;

      //! Get the number of timeCaller output ports
      //!
      //! \return The number of timeCaller output ports
      FwIndexType getNum_timeCaller_OutputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed output ports
      // ----------------------------------------------------------------------

      //! Get the number of pingOut output ports
      //!
      //! \return The number of pingOut output ports
      FwIndexType getNum_pingOut_OutputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Connection status queries for special output ports
      // ----------------------------------------------------------------------

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Check whether port LogText is connected
      //!
      //! \return Whether port LogText is connected
      bool isConnected_LogText_OutputPort(
          FwIndexType portNum //!< The port number
      );

#endif

      //! Check whether port cmdRegOut is connected
      //!
      //! \return Whether port cmdRegOut is connected
      bool isConnected_cmdRegOut_OutputPort(
          FwIndexType portNum //!< The port number
      );

      //! Check whether port cmdResponseOut is connected
      //!
      //! \return Whether port cmdResponseOut is connected
      bool isConnected_cmdResponseOut_OutputPort(
          FwIndexType portNum //!< The port number
      );

      //! Check whether port logOut is connected
      //!
      //! \return Whether port logOut is connected
      bool isConnected_logOut_OutputPort(
          FwIndexType portNum //!< The port number
      );

      //! Check whether port timeCaller is connected
      //!
      //! \return Whether port timeCaller is connected
      bool isConnected_timeCaller_OutputPort(
          FwIndexType portNum //!< The port number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Connection status queries for typed output ports
      // ----------------------------------------------------------------------

      //! Check whether port pingOut is connected
      //!
      //! \return Whether port pingOut is connected
      bool isConnected_pingOut_OutputPort(
          FwIndexType portNum //!< The port number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Handlers to implement for typed input ports
      // ----------------------------------------------------------------------

      //! Handler for input port comIn
      virtual void comIn_handler(
          FwIndexType portNum, //!< The port number
          Fw::ComBuffer& data, //!< Buffer containing packet data
          U32 context //!< Call context value; meaning chosen by user
      ) = 0;

      //! Handler for input port pingIn
      virtual void pingIn_handler(
          FwIndexType portNum, //!< The port number
          U32 key //!< Value to return to pinger
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Port handler base-class functions for typed input ports
      //
      // Call these functions directly to bypass the corresponding ports
      // ----------------------------------------------------------------------

      //! Handler base-class function for input port comIn
      void comIn_handlerBase(
          FwIndexType portNum, //!< The port number
          Fw::ComBuffer& data, //!< Buffer containing packet data
          U32 context //!< Call context value; meaning chosen by user
      );

      //! Handler base-class function for input port pingIn
      void pingIn_handlerBase(
          FwIndexType portNum, //!< The port number
          U32 key //!< Value to return to pinger
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Pre-message hooks for typed async input ports
      //
      // Each of these functions is invoked just before processing a message
      // on the corresponding port. By default, they do nothing. You can
      // override them to provide specific pre-message behavior.
      // ----------------------------------------------------------------------

      //! Pre-message hook for async input port comIn
      virtual void comIn_preMsgHook(
          FwIndexType portNum, //!< The port number
          Fw::ComBuffer& data, //!< Buffer containing packet data
          U32 context //!< Call context value; meaning chosen by user
      );

      //! Pre-message hook for async input port pingIn
      virtual void pingIn_preMsgHook(
          FwIndexType portNum, //!< The port number
          U32 key //!< Value to return to pinger
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Invocation functions for typed output ports
      // ----------------------------------------------------------------------

      //! Invoke output port pingOut
      void pingOut_out(
          FwIndexType portNum, //!< The port number
          U32 key //!< Value to return to pinger
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Command response
      // ----------------------------------------------------------------------

      //! Emit command response
      void cmdResponse_out(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq, //!< The command sequence number
          Fw::CmdResponse response //!< The command response
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Command handlers to implement
      // ----------------------------------------------------------------------

      //! Handler for command CloseFile
      //!
      //! Forces a close of the currently opened file.
      virtual void CloseFile_cmdHandler(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq //!< The command sequence number
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Command handler base-class functions
      //
      // Call these functions directly to bypass the command input port
      // ----------------------------------------------------------------------

      //! Base-class handler function for command CloseFile
      //!
      //! Forces a close of the currently opened file.
      void CloseFile_cmdHandlerBase(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq, //!< The command sequence number
          Fw::CmdArgBuffer& args //!< The command argument buffer
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Pre-message hooks for async commands
      //
      // Each of these functions is invoked just before processing the
      // corresponding command. By default they do nothing. You can
      // override them to provide specific pre-command behavior.
      // ----------------------------------------------------------------------

      //! Pre-message hook for command CloseFile
      virtual void CloseFile_preMsgHook(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq //!< The command sequence number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Event logging functions
      // ----------------------------------------------------------------------

      //! Log event FileOpenError
      //!
      //! The ComLogger encountered an error opening a file
      void log_WARNING_HI_FileOpenError(
          U32 errornum, //!< The error number returned from open file
          const Fw::StringBase& file //!< The file
      ) const;

      //! Log event FileWriteError
      //!
      //! The ComLogger encountered an error writing to a file
      void log_WARNING_HI_FileWriteError(
          U32 errornum, //!< The error number returned from write file
          U32 bytesWritten, //!< The number of bytes successfully written to file
          U32 bytesToWrite, //!< The number of bytes attempted to write to file
          const Fw::StringBase& file //!< The file
      ) const;

      //! Log event FileValidationError
      //!
      //! The ComLogger encountered an error writing the validation file
      void log_WARNING_LO_FileValidationError(
          const Fw::StringBase& validationFile, //!< The validation file
          const Fw::StringBase& file, //!< The file
          U32 status //!< The Os::Validate::Status return
      ) const;

      //! Log event FileClosed
      //!
      //! The ComLogger successfully closed a file on command.
      void log_DIAGNOSTIC_FileClosed(
          const Fw::StringBase& file //!< The file
      ) const;

      //! Log event FileNotInitialized
      void log_WARNING_LO_FileNotInitialized();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Event throttle reset functions
      // ----------------------------------------------------------------------

      //! Reset throttle value for FileNotInitialized
      void log_WARNING_LO_FileNotInitialized_ThrottleClear();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Time
      // ----------------------------------------------------------------------

      //!  Get the time
      //!
      //! \\return The current time
      Fw::Time getTime();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Message dispatch functions
      // ----------------------------------------------------------------------

      //! Called in the message loop to dispatch a message from the queue
      virtual MsgDispatchStatus doDispatch();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Calls for messages received on special input ports
      // ----------------------------------------------------------------------

      //! Callback for port cmdIn
      static void m_p_cmdIn_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          FwIndexType portNum, //!< The port number
          FwOpcodeType opCode, //!< Command Op Code
          U32 cmdSeq, //!< Command Sequence
          Fw::CmdArgBuffer& args //!< Buffer containing arguments
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Calls for messages received on typed input ports
      // ----------------------------------------------------------------------

      //! Callback for port comIn
      static void m_p_comIn_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          FwIndexType portNum, //!< The port number
          Fw::ComBuffer& data, //!< Buffer containing packet data
          U32 context //!< Call context value; meaning chosen by user
      );

      //! Callback for port pingIn
      static void m_p_pingIn_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          FwIndexType portNum, //!< The port number
          U32 key //!< Value to return to pinger
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Special input ports
      // ----------------------------------------------------------------------

      //! Input port cmdIn
      Fw::InputCmdPort m_cmdIn_InputPort[NUM_CMDIN_INPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Typed input ports
      // ----------------------------------------------------------------------

      //! Input port comIn
      Fw::InputComPort m_comIn_InputPort[NUM_COMIN_INPUT_PORTS];

      //! Input port pingIn
      Svc::InputPingPort m_pingIn_InputPort[NUM_PINGIN_INPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Special output ports
      // ----------------------------------------------------------------------

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Output port LogText
      Fw::OutputLogTextPort m_LogText_OutputPort[NUM_LOGTEXT_OUTPUT_PORTS];

#endif

      //! Output port cmdRegOut
      Fw::OutputCmdRegPort m_cmdRegOut_OutputPort[NUM_CMDREGOUT_OUTPUT_PORTS];

      //! Output port cmdResponseOut
      Fw::OutputCmdResponsePort m_cmdResponseOut_OutputPort[NUM_CMDRESPONSEOUT_OUTPUT_PORTS];

      //! Output port logOut
      Fw::OutputLogPort m_logOut_OutputPort[NUM_LOGOUT_OUTPUT_PORTS];

      //! Output port timeCaller
      Fw::OutputTimePort m_timeCaller_OutputPort[NUM_TIMECALLER_OUTPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Typed output ports
      // ----------------------------------------------------------------------

      //! Output port pingOut
      Svc::OutputPingPort m_pingOut_OutputPort[NUM_PINGOUT_OUTPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Counter values for event throttling
      // ----------------------------------------------------------------------

      //! Throttle for FileNotInitialized
      FwIndexType m_FileNotInitializedThrottle;

  };

}

#endif
