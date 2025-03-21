// ======================================================================
// \title  BuffQueueDepthArrayAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for BuffQueueDepth array
// ======================================================================

#include "F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.hpp"
#include "Fw/Types/Assert.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Constructors
  // ----------------------------------------------------------------------

  BuffQueueDepth ::
    BuffQueueDepth() :
      Serializable()
  {
    // Construct using element-wise constructor
    *this = BuffQueueDepth(
      0
    );
  }

  BuffQueueDepth ::
    BuffQueueDepth(const ElementType (&a)[SIZE]) :
      Serializable()
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = a[index];
    }
  }

  BuffQueueDepth ::
    BuffQueueDepth(const ElementType& e1) :
      Serializable()
  {
    this->elements[0] = e1;
  }

  BuffQueueDepth ::
    BuffQueueDepth(const BuffQueueDepth& obj) :
      Serializable()
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = obj.elements[index];
    }
  }

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  BuffQueueDepth::ElementType& BuffQueueDepth ::
    operator[](const U32 i)
  {
    FW_ASSERT(i < SIZE, static_cast<FwAssertArgType>(i), static_cast<FwAssertArgType>(SIZE));
    return this->elements[i];
  }

  const BuffQueueDepth::ElementType& BuffQueueDepth ::
    operator[](const U32 i) const
  {
    FW_ASSERT(i < SIZE, static_cast<FwAssertArgType>(i), static_cast<FwAssertArgType>(SIZE));
    return this->elements[i];
  }

  BuffQueueDepth& BuffQueueDepth ::
    operator=(const BuffQueueDepth& obj)
  {
    if (this == &obj) {
      return *this;
    }

    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = obj.elements[index];
    }
    return *this;
  }

  BuffQueueDepth& BuffQueueDepth ::
    operator=(const ElementType (&a)[SIZE])
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = a[index];
    }
    return *this;
  }

  BuffQueueDepth& BuffQueueDepth ::
    operator=(const ElementType& e)
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = e;
    }
    return *this;
  }

  bool BuffQueueDepth ::
    operator==(const BuffQueueDepth& obj) const
  {
    for (U32 index = 0; index < SIZE; index++) {
      if (!((*this)[index] == obj[index])) {
        return false;
      }
    }
    return true;
  }

  bool BuffQueueDepth ::
    operator!=(const BuffQueueDepth& obj) const
  {
    return !(*this == obj);
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const BuffQueueDepth& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Public member functions
  // ----------------------------------------------------------------------

  Fw::SerializeStatus BuffQueueDepth ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    Fw::SerializeStatus status = Fw::FW_SERIALIZE_OK;
    for (U32 index = 0; index < SIZE; index++) {
      status = buffer.serialize((*this)[index]);
      if (status != Fw::FW_SERIALIZE_OK) {
        return status;
      }
    }
    return status;
  }

  Fw::SerializeStatus BuffQueueDepth ::
    deserialize(Fw::SerializeBufferBase& buffer)
  {
    Fw::SerializeStatus status = Fw::FW_SERIALIZE_OK;
    for (U32 index = 0; index < SIZE; index++) {
      status = buffer.deserialize((*this)[index]);
      if (status != Fw::FW_SERIALIZE_OK) {
        return status;
      }
    }
    return status;
  }

#if FW_SERIALIZABLE_TO_STRING

  void BuffQueueDepth ::
    toString(Fw::StringBase& sb) const
  {
    static const char *formatString = "[ "
      "%" PRIu32 " ]";

    sb.format(
      formatString,
      this->elements[0]
    );
  }

#endif

}
