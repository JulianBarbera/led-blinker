// ======================================================================
// \title  Led.cpp
// \author fish
// \brief  cpp file for Led component implementation class
// ======================================================================

#include "Components/Led/Led.hpp"

namespace Components {

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  Led ::
    Led(const char* const compName) :
      LedComponentBase(compName)
  {

  }

  Led ::
    ~Led()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for typed input ports
  // ----------------------------------------------------------------------

  void Led ::
    run_handler(
        FwIndexType portNum,
        U32 context
    )
  {
    // TODO
  }

  // ----------------------------------------------------------------------
  // Handler implementations for commands
  // ----------------------------------------------------------------------

  void Led ::
    BLINKING_ON_OFF_cmdHandler(
        FwOpcodeType opCode,
        U32 cmdSeq,
        Fw::On on_off
    )
  {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
  }

}
