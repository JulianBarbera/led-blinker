// ======================================================================
// \title  AssertFatalAdapterComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for AssertFatalAdapter component base class
// ======================================================================

#include "F-Prime/Svc/AssertFatalAdapter/AssertFatalAdapterComponentAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/ExternalString.hpp"
#if FW_ENABLE_TEXT_LOGGING
#include "Fw/Types/String.hpp"
#endif

namespace Svc {

  // ----------------------------------------------------------------------
  // Component initialization
  // ----------------------------------------------------------------------

  void AssertFatalAdapterComponentBase ::
    init(FwEnumStoreType instance)
  {
    // Initialize base class
    Fw::PassiveComponentBase::init(instance);

    // Connect output port Log
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_Log_OutputPorts());
      port++
    ) {
      this->m_Log_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_Log_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_Log_OutputPort[port].setObjName(portName.toChar());
#endif
    }

#if FW_ENABLE_TEXT_LOGGING == 1
    // Connect output port LogText
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_LogText_OutputPorts());
      port++
    ) {
      this->m_LogText_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_LogText_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_LogText_OutputPort[port].setObjName(portName.toChar());
#endif
    }
#endif

    // Connect output port Time
    for (
      FwIndexType port = 0;
      port < static_cast<FwIndexType>(this->getNum_Time_OutputPorts());
      port++
    ) {
      this->m_Time_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      Fw::ObjectName portName;
      portName.format(
        "%s_Time_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName.toChar(),
        port
      );
      this->m_Time_OutputPort[port].setObjName(portName.toChar());
#endif
    }
  }

  // ----------------------------------------------------------------------
  // Connect input ports to special output ports
  // ----------------------------------------------------------------------

  void AssertFatalAdapterComponentBase ::
    set_Log_OutputPort(
        FwIndexType portNum,
        Fw::InputLogPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Log_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Log_OutputPort[portNum].addCallPort(port);
  }

#if FW_ENABLE_TEXT_LOGGING == 1

  void AssertFatalAdapterComponentBase ::
    set_LogText_OutputPort(
        FwIndexType portNum,
        Fw::InputLogTextPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_LogText_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_LogText_OutputPort[portNum].addCallPort(port);
  }

#endif

  void AssertFatalAdapterComponentBase ::
    set_Time_OutputPort(
        FwIndexType portNum,
        Fw::InputTimePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Time_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Time_OutputPort[portNum].addCallPort(port);
  }

#if FW_PORT_SERIALIZATION

  // ----------------------------------------------------------------------
  // Connect serial input ports to special output ports
  // ----------------------------------------------------------------------

  void AssertFatalAdapterComponentBase ::
    set_Log_OutputPort(
        FwIndexType portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Log_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Log_OutputPort[portNum].registerSerialPort(port);
  }

#if FW_ENABLE_TEXT_LOGGING == 1

  void AssertFatalAdapterComponentBase ::
    set_LogText_OutputPort(
        FwIndexType portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_LogText_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_LogText_OutputPort[portNum].registerSerialPort(port);
  }

#endif

  void AssertFatalAdapterComponentBase ::
    set_Time_OutputPort(
        FwIndexType portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Time_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Time_OutputPort[portNum].registerSerialPort(port);
  }

#endif

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  AssertFatalAdapterComponentBase ::
    AssertFatalAdapterComponentBase(const char* compName) :
      Fw::PassiveComponentBase(compName)
  {

  }

  AssertFatalAdapterComponentBase ::
    ~AssertFatalAdapterComponentBase()
  {

  }

  // ----------------------------------------------------------------------
  // Getters for numbers of special output ports
  // ----------------------------------------------------------------------

  FwIndexType AssertFatalAdapterComponentBase ::
    getNum_Log_OutputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_Log_OutputPort));
  }

#if FW_ENABLE_TEXT_LOGGING == 1

  FwIndexType AssertFatalAdapterComponentBase ::
    getNum_LogText_OutputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_LogText_OutputPort));
  }

#endif

  FwIndexType AssertFatalAdapterComponentBase ::
    getNum_Time_OutputPorts() const
  {
    return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_Time_OutputPort));
  }

  // ----------------------------------------------------------------------
  // Connection status queries for special output ports
  // ----------------------------------------------------------------------

  bool AssertFatalAdapterComponentBase ::
    isConnected_Log_OutputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_Log_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_Log_OutputPort[portNum].isConnected();
  }

#if FW_ENABLE_TEXT_LOGGING == 1

  bool AssertFatalAdapterComponentBase ::
    isConnected_LogText_OutputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_LogText_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_LogText_OutputPort[portNum].isConnected();
  }

#endif

  bool AssertFatalAdapterComponentBase ::
    isConnected_Time_OutputPort(FwIndexType portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_Time_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_Time_OutputPort[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Event logging functions
  // ----------------------------------------------------------------------

  void AssertFatalAdapterComponentBase ::
    log_FATAL_AF_ASSERT_0(
        const Fw::StringBase& file,
        U32 line
    ) const
  {
    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
      this->m_Time_OutputPort[0].invoke(_logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_AF_ASSERT_0;

    // Emit the event on the log port
    if (this->m_Log_OutputPort[0].isConnected()) {
      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(2 + 1));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      // For FATAL, add stack size of 4 and a dummy entry. No support for stacks yet.
      _status = _logBuff.serialize(static_cast<U8>(4));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      _status = _logBuff.serialize(static_cast<U32>(0));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif

      _status = file.serialize(_logBuff, FW_MIN(FW_LOG_STRING_MAX_SIZE, 200));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(line);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      this->m_Log_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logBuff
      );
    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_LogText_OutputPort[0].isConnected()) {
#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Assert in file %s, line %" PRIu32 "";
#else
      const char* _formatString =
        "%s: Assert in file %s, line %" PRIu32 "";
#endif

      Fw::TextLogString _logString;
      _logString.format(
        _formatString,
#if FW_OBJECT_NAMES == 1
        this->m_objName.toChar(),
#endif
        "AF_ASSERT_0 ",
        file.toChar(),
        line
      );

      this->m_LogText_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logString
      );
    }
#endif
  }

  void AssertFatalAdapterComponentBase ::
    log_FATAL_AF_ASSERT_1(
        const Fw::StringBase& file,
        U32 line,
        U32 arg1
    ) const
  {
    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
      this->m_Time_OutputPort[0].invoke(_logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_AF_ASSERT_1;

    // Emit the event on the log port
    if (this->m_Log_OutputPort[0].isConnected()) {
      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(3 + 1));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      // For FATAL, add stack size of 4 and a dummy entry. No support for stacks yet.
      _status = _logBuff.serialize(static_cast<U8>(4));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      _status = _logBuff.serialize(static_cast<U32>(0));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif

      _status = file.serialize(_logBuff, FW_MIN(FW_LOG_STRING_MAX_SIZE, 200));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(line);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg1);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      this->m_Log_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logBuff
      );
    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_LogText_OutputPort[0].isConnected()) {
#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Assert in file %s, line %" PRIu32 ": %" PRIu32 "";
#else
      const char* _formatString =
        "%s: Assert in file %s, line %" PRIu32 ": %" PRIu32 "";
#endif

      Fw::TextLogString _logString;
      _logString.format(
        _formatString,
#if FW_OBJECT_NAMES == 1
        this->m_objName.toChar(),
#endif
        "AF_ASSERT_1 ",
        file.toChar(),
        line,
        arg1
      );

      this->m_LogText_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logString
      );
    }
#endif
  }

  void AssertFatalAdapterComponentBase ::
    log_FATAL_AF_ASSERT_2(
        const Fw::StringBase& file,
        U32 line,
        U32 arg1,
        U32 arg2
    ) const
  {
    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
      this->m_Time_OutputPort[0].invoke(_logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_AF_ASSERT_2;

    // Emit the event on the log port
    if (this->m_Log_OutputPort[0].isConnected()) {
      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(4 + 1));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      // For FATAL, add stack size of 4 and a dummy entry. No support for stacks yet.
      _status = _logBuff.serialize(static_cast<U8>(4));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      _status = _logBuff.serialize(static_cast<U32>(0));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif

      _status = file.serialize(_logBuff, FW_MIN(FW_LOG_STRING_MAX_SIZE, 200));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(line);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg1);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg2);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      this->m_Log_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logBuff
      );
    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_LogText_OutputPort[0].isConnected()) {
#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Assert in file %s, line %" PRIu32 ": %" PRIu32 " %" PRIu32 "";
#else
      const char* _formatString =
        "%s: Assert in file %s, line %" PRIu32 ": %" PRIu32 " %" PRIu32 "";
#endif

      Fw::TextLogString _logString;
      _logString.format(
        _formatString,
#if FW_OBJECT_NAMES == 1
        this->m_objName.toChar(),
#endif
        "AF_ASSERT_2 ",
        file.toChar(),
        line,
        arg1,
        arg2
      );

      this->m_LogText_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logString
      );
    }
#endif
  }

  void AssertFatalAdapterComponentBase ::
    log_FATAL_AF_ASSERT_3(
        const Fw::StringBase& file,
        U32 line,
        U32 arg1,
        U32 arg2,
        U32 arg3
    ) const
  {
    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
      this->m_Time_OutputPort[0].invoke(_logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_AF_ASSERT_3;

    // Emit the event on the log port
    if (this->m_Log_OutputPort[0].isConnected()) {
      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(5 + 1));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      // For FATAL, add stack size of 4 and a dummy entry. No support for stacks yet.
      _status = _logBuff.serialize(static_cast<U8>(4));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      _status = _logBuff.serialize(static_cast<U32>(0));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif

      _status = file.serialize(_logBuff, FW_MIN(FW_LOG_STRING_MAX_SIZE, 200));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(line);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg1);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg2);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg3);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      this->m_Log_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logBuff
      );
    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_LogText_OutputPort[0].isConnected()) {
#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Assert in file %s, line %" PRIu32 ": %" PRIu32 " %" PRIu32 " %" PRIu32 "";
#else
      const char* _formatString =
        "%s: Assert in file %s, line %" PRIu32 ": %" PRIu32 " %" PRIu32 " %" PRIu32 "";
#endif

      Fw::TextLogString _logString;
      _logString.format(
        _formatString,
#if FW_OBJECT_NAMES == 1
        this->m_objName.toChar(),
#endif
        "AF_ASSERT_3 ",
        file.toChar(),
        line,
        arg1,
        arg2,
        arg3
      );

      this->m_LogText_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logString
      );
    }
#endif
  }

  void AssertFatalAdapterComponentBase ::
    log_FATAL_AF_ASSERT_4(
        const Fw::StringBase& file,
        U32 line,
        U32 arg1,
        U32 arg2,
        U32 arg3,
        U32 arg4
    ) const
  {
    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
      this->m_Time_OutputPort[0].invoke(_logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_AF_ASSERT_4;

    // Emit the event on the log port
    if (this->m_Log_OutputPort[0].isConnected()) {
      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(6 + 1));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      // For FATAL, add stack size of 4 and a dummy entry. No support for stacks yet.
      _status = _logBuff.serialize(static_cast<U8>(4));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      _status = _logBuff.serialize(static_cast<U32>(0));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif

      _status = file.serialize(_logBuff, FW_MIN(FW_LOG_STRING_MAX_SIZE, 200));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(line);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg1);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg2);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg3);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg4);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      this->m_Log_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logBuff
      );
    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_LogText_OutputPort[0].isConnected()) {
#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Assert in file %s, line %" PRIu32 ": %" PRIu32 " %" PRIu32 " %" PRIu32 " %" PRIu32 "";
#else
      const char* _formatString =
        "%s: Assert in file %s, line %" PRIu32 ": %" PRIu32 " %" PRIu32 " %" PRIu32 " %" PRIu32 "";
#endif

      Fw::TextLogString _logString;
      _logString.format(
        _formatString,
#if FW_OBJECT_NAMES == 1
        this->m_objName.toChar(),
#endif
        "AF_ASSERT_4 ",
        file.toChar(),
        line,
        arg1,
        arg2,
        arg3,
        arg4
      );

      this->m_LogText_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logString
      );
    }
#endif
  }

  void AssertFatalAdapterComponentBase ::
    log_FATAL_AF_ASSERT_5(
        const Fw::StringBase& file,
        U32 line,
        U32 arg1,
        U32 arg2,
        U32 arg3,
        U32 arg4,
        U32 arg5
    ) const
  {
    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
      this->m_Time_OutputPort[0].invoke(_logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_AF_ASSERT_5;

    // Emit the event on the log port
    if (this->m_Log_OutputPort[0].isConnected()) {
      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(7 + 1));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      // For FATAL, add stack size of 4 and a dummy entry. No support for stacks yet.
      _status = _logBuff.serialize(static_cast<U8>(4));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      _status = _logBuff.serialize(static_cast<U32>(0));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif

      _status = file.serialize(_logBuff, FW_MIN(FW_LOG_STRING_MAX_SIZE, 200));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(line);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg1);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg2);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg3);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg4);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg5);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      this->m_Log_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logBuff
      );
    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_LogText_OutputPort[0].isConnected()) {
#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Assert in file %s, line %" PRIu32 ": %" PRIu32 " %" PRIu32 " %" PRIu32 " %" PRIu32 " %" PRIu32 "";
#else
      const char* _formatString =
        "%s: Assert in file %s, line %" PRIu32 ": %" PRIu32 " %" PRIu32 " %" PRIu32 " %" PRIu32 " %" PRIu32 "";
#endif

      Fw::TextLogString _logString;
      _logString.format(
        _formatString,
#if FW_OBJECT_NAMES == 1
        this->m_objName.toChar(),
#endif
        "AF_ASSERT_5 ",
        file.toChar(),
        line,
        arg1,
        arg2,
        arg3,
        arg4,
        arg5
      );

      this->m_LogText_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logString
      );
    }
#endif
  }

  void AssertFatalAdapterComponentBase ::
    log_FATAL_AF_ASSERT_6(
        const Fw::StringBase& file,
        U32 line,
        U32 arg1,
        U32 arg2,
        U32 arg3,
        U32 arg4,
        U32 arg5,
        U32 arg6
    ) const
  {
    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
      this->m_Time_OutputPort[0].invoke(_logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_AF_ASSERT_6;

    // Emit the event on the log port
    if (this->m_Log_OutputPort[0].isConnected()) {
      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(8 + 1));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      // For FATAL, add stack size of 4 and a dummy entry. No support for stacks yet.
      _status = _logBuff.serialize(static_cast<U8>(4));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      _status = _logBuff.serialize(static_cast<U32>(0));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif

      _status = file.serialize(_logBuff, FW_MIN(FW_LOG_STRING_MAX_SIZE, 200));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(line);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg1);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg2);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg3);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg4);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg5);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(arg6);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      this->m_Log_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logBuff
      );
    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_LogText_OutputPort[0].isConnected()) {
#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Assert in file %s, line %" PRIu32 ": %" PRIu32 " %" PRIu32 " %" PRIu32 " %" PRIu32 " %" PRIu32 " %" PRIu32 "";
#else
      const char* _formatString =
        "%s: Assert in file %s, line %" PRIu32 ": %" PRIu32 " %" PRIu32 " %" PRIu32 " %" PRIu32 " %" PRIu32 " %" PRIu32 "";
#endif

      Fw::TextLogString _logString;
      _logString.format(
        _formatString,
#if FW_OBJECT_NAMES == 1
        this->m_objName.toChar(),
#endif
        "AF_ASSERT_6 ",
        file.toChar(),
        line,
        arg1,
        arg2,
        arg3,
        arg4,
        arg5,
        arg6
      );

      this->m_LogText_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logString
      );
    }
#endif
  }

  void AssertFatalAdapterComponentBase ::
    log_FATAL_AF_UNEXPECTED_ASSERT(
        const Fw::StringBase& file,
        U32 line,
        U32 numArgs
    ) const
  {
    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
      this->m_Time_OutputPort[0].invoke(_logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_AF_UNEXPECTED_ASSERT;

    // Emit the event on the log port
    if (this->m_Log_OutputPort[0].isConnected()) {
      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(3 + 1));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      // For FATAL, add stack size of 4 and a dummy entry. No support for stacks yet.
      _status = _logBuff.serialize(static_cast<U8>(4));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      _status = _logBuff.serialize(static_cast<U32>(0));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif

      _status = file.serialize(_logBuff, FW_MIN(FW_LOG_STRING_MAX_SIZE, 200));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(line);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(numArgs);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      this->m_Log_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logBuff
      );
    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_LogText_OutputPort[0].isConnected()) {
#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Unexpected assert in file %s, line %" PRIu32 ", args %" PRIu32 "";
#else
      const char* _formatString =
        "%s: Unexpected assert in file %s, line %" PRIu32 ", args %" PRIu32 "";
#endif

      Fw::TextLogString _logString;
      _logString.format(
        _formatString,
#if FW_OBJECT_NAMES == 1
        this->m_objName.toChar(),
#endif
        "AF_UNEXPECTED_ASSERT ",
        file.toChar(),
        line,
        numArgs
      );

      this->m_LogText_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::FATAL,
        _logString
      );
    }
#endif
  }

  // ----------------------------------------------------------------------
  // Time
  // ----------------------------------------------------------------------

  Fw::Time AssertFatalAdapterComponentBase ::
    getTime()
  {
    if (this->m_Time_OutputPort[0].isConnected()) {
      Fw::Time _time;
      this->m_Time_OutputPort[0].invoke(_time);
      return _time;
    }
    else {
      return Fw::Time(TB_NONE, 0, 0);
    }
  }

}
