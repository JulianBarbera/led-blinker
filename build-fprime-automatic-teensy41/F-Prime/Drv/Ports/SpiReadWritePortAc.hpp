// ======================================================================
// \title  SpiReadWritePortAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for SpiReadWrite port
// ======================================================================

#ifndef Drv_SpiReadWritePortAc_HPP
#define Drv_SpiReadWritePortAc_HPP

#include <cstdio>
#include <cstring>

#include "FpConfig.hpp"
#include "Fw/Buffer/Buffer.hpp"
#include "Fw/Comp/PassiveComponentBase.hpp"
#include "Fw/Port/InputPortBase.hpp"
#include "Fw/Port/OutputPortBase.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/StringType.hpp"

namespace Drv {

  //! Input SpiReadWrite port
  class InputSpiReadWritePort :
    public Fw::InputPortBase
  {

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the serial representations of the port arguments
        SERIALIZED_SIZE =
          Fw::Buffer::SERIALIZED_SIZE +
          Fw::Buffer::SERIALIZED_SIZE
      };

    public:

      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      //! The port callback function type
      typedef void (*CompFuncPtr)(
        Fw::PassiveComponentBase* callComp,
        FwIndexType portNum,
        Fw::Buffer& writeBuffer,
        Fw::Buffer& readBuffer
      );

    public:

      // ----------------------------------------------------------------------
      // Input Port Member functions
      // ----------------------------------------------------------------------

      //! Constructor
      InputSpiReadWritePort();

      //! Initialization function
      void init();

      //! Register a component
      void addCallComp(
          Fw::PassiveComponentBase* callComp, //!< The containing component
          CompFuncPtr funcPtr //!< The port callback function
      );

      //! Invoke a port interface
      void invoke(
          Fw::Buffer& writeBuffer,
          Fw::Buffer& readBuffer
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

  //! Output SpiReadWrite port
  class OutputSpiReadWritePort :
    public Fw::OutputPortBase
  {

    public:

      // ----------------------------------------------------------------------
      // Output Port Member functions
      // ----------------------------------------------------------------------

      //! Constructor
      OutputSpiReadWritePort();

      //! Initialization function
      void init();

      //! Register an input port
      void addCallPort(
          InputSpiReadWritePort* callPort //!< The input port
      );

      //! Invoke a port interface
      void invoke(
          Fw::Buffer& writeBuffer,
          Fw::Buffer& readBuffer
      ) const;

    private:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      //! The pointer to the input port
      InputSpiReadWritePort* m_port;

  };

}

#endif
