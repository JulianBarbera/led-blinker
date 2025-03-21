// ======================================================================
// \title  FileStatusEnumAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for FileStatus enum
// ======================================================================

#ifndef Os_FileStatusEnumAc_HPP
#define Os_FileStatusEnumAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"

namespace Os {

  //! FPP shadow-enum representing Os::File::Status
  class FileStatus :
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
        //! Operation was successful
        OP_OK = 0,
        //! File doesn't exist (for read)
        DOESNT_EXIST = 1,
        //! No space left
        NO_SPACE = 2,
        //! No permission to read/write file
        NO_PERMISSION = 3,
        //! Invalid size parameter
        BAD_SIZE = 4,
        //! file hasn't been opened yet
        NOT_OPENED = 5,
        //! file already exist (for CREATE with O_EXCL enabled)
        FILE_EXISTS = 6,
        //! Kernel or file system does not support operation
        NOT_SUPPORTED = 7,
        //! Mode for file access is invalid for current operation
        INVALID_MODE = 8,
        //! Invalid argument passed in
        INVALID_ARGUMENT = 9,
        //! A catch-all for other errors. Have to look in implementation-specific code
        OTHER_ERROR = 10,
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
        NUM_CONSTANTS = 11,
      };

    public:

      // ----------------------------------------------------------------------
      // Constructors
      // ----------------------------------------------------------------------

      //! Constructor (default value of OP_OK)
      FileStatus()
      {
        this->e = OP_OK;
      }

      //! Constructor (user-provided value)
      FileStatus(
          const T e1 //!< The raw enum value
      )
      {
        this->e = e1;
      }

      //! Copy constructor
      FileStatus(
          const FileStatus& obj //!< The source object
      )
      {
        this->e = obj.e;
      }

    public:

      // ----------------------------------------------------------------------
      // Operators
      // ----------------------------------------------------------------------

      //! Copy assignment operator (object)
      FileStatus& operator=(
          const FileStatus& obj //!< The source object
      );

      //! Copy assignment operator (raw enum)
      FileStatus& operator=(
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
          const FileStatus& obj //!< The object
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
