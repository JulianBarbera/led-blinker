// ======================================================================
// \title  SendStatusEnumAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for SendStatus enum
// ======================================================================

#ifndef Drv_SendStatusEnumAc_HPP
#define Drv_SendStatusEnumAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"

namespace Drv {

  //! Status returned by the send call
  class SendStatus :
    public Fw::Serializable
  {

    public:

      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      //! The serial representation type
      typedef I32 SerialType;

      //! The raw enum type
      enum T {
        //! Send worked as expected
        SEND_OK = 0,
        //! Data send should be retried
        SEND_RETRY = 1,
        //! Send error occurred retrying may succeed
        SEND_ERROR = 2,
      };

      //! For backwards compatibility
      typedef T t;

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the serial representation
        SERIALIZED_SIZE = sizeof(SerialType),
        //! The number of enumerated constants
        NUM_CONSTANTS = 3,
      };

    public:

      // ----------------------------------------------------------------------
      // Constructors
      // ----------------------------------------------------------------------

      //! Constructor (default value of SEND_OK)
      SendStatus()
      {
        this->e = SEND_OK;
      }

      //! Constructor (user-provided value)
      SendStatus(
          const T e1 //!< The raw enum value
      )
      {
        this->e = e1;
      }

      //! Copy constructor
      SendStatus(
          const SendStatus& obj //!< The source object
      )
      {
        this->e = obj.e;
      }

    public:

      // ----------------------------------------------------------------------
      // Operators
      // ----------------------------------------------------------------------

      //! Copy assignment operator (object)
      SendStatus& operator=(
          const SendStatus& obj //!< The source object
      );

      //! Copy assignment operator (raw enum)
      SendStatus& operator=(
          T e1 //!< The enum value
      );

      //! Conversion operator
      operator T() const
      {
        return this->e;
      }

      //! Equality operator
      bool operator==(T e1) const
      {
        return this->e == e1;
      }

      //! Inequality operator
      bool operator!=(T e1) const
      {
        return !(*this == e1);
      }

#ifdef BUILD_UT

      //! Ostream operator
      friend std::ostream& operator<<(
          std::ostream& os, //!< The ostream
          const SendStatus& obj //!< The object
      );

#endif

    public:

      // ----------------------------------------------------------------------
      // Member functions
      // ----------------------------------------------------------------------

      //! Check raw enum value for validity
      bool isValid() const;

      //! Serialize raw enum value to SerialType
      Fw::SerializeStatus serialize(
          Fw::SerializeBufferBase& buffer //!< The serial buffer
      ) const;

      //! Deserialize raw enum value from SerialType
      Fw::SerializeStatus deserialize(
          Fw::SerializeBufferBase& buffer //!< The serial buffer
      );

#if FW_SERIALIZABLE_TO_STRING

      //! Convert enum to string
      void toString(
          Fw::StringBase& sb //!< The StringBase object to hold the result
      ) const;

#endif

    public:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      //! The raw enum value
      T e;

  };

}

#endif
