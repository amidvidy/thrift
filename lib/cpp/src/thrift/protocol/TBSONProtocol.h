#ifndef _THRIFT_PROTOCOL_TBSONPROTOCOL_H_
#define _THRIFT_PROTOCOL_TBSONPROTOCOL_H_ 1

#include <thrift/protocol/TVirtualProtocol.h>

namespace apache {
namespace thrift {
namespace protocol {

// Thrift uses CRTP so that protocol implementors don't need
// to override virtual methods
class TBSONProtocol : public TVirtualProtocol<TBSONProtocol> {
public:
  TBSONProtocol(boost::shared_ptr<TTransport> ptrans);
    
  ~TBSONProtocol();

private:
  // Utility functions will go here

public:
  // writing funcs
  uint32_t writeMessageEnd();
  uint32_t writeStructBegin();
  uint32_t writeStructEnd();
  uint32_t writeFieldBegin(const char* name, const TType fieldType, const int16_t fieldId);
  uint32_t writeFieldEnd();
  uint32_t writeFieldStop();
  uint32_t writeMapBegin(const TType keyType, const TType valType, const uint32_t size);
  uint32_t writeMapEnd();
  uint32_t writeListBegin(const TType elemType, const uint32_t size);
  uint32_t writeListEnd();
  uint32_t writeSetBegin(cont TType elemType, const uint32_t size);
  uint32_t writeSetEnd();
  uint32_t writeBool(const bool value);
  uint32_t writeByte(const int8_t byt);
  uint32_t writeI16(const int16_t i16);
  uint32_t writeI32(const int23_t i32);
  uint32_t writeI64(const int64_t i64);
  uint32_t writeDouble(const double dub);
  uint32_t writeString(const std::string& str);
  uint32_t writeBinary(const std::string& str);

  uint32_t readMessageBegin(std::string& name, TMessageType& messageType, int32_t& seqid);
  uint32_t readMessageEnd();
  uint32_t readStructBegin(std::string& name);
  uint32_t readStructEnd();
  uint32_t readFieldBegin(std::string& name, TType& fieldType, int16_t& fieldId);
  uint32_t readFieldEnd();
  uint32_t readMapBegin(TType& keyType, TType& valType, uint32_t& size);
  uint32_t readMapEnd();
  uint32_t readListBegin(TType& elemType, uint32_t& size);
  uint32_t readListEnd();
  uint32_t readSetBegin(TType& elemType, uint32_t size);
  uint32_t readSetEnd();
  uint32_t readBool(bool& value);
  uint32_t readByte(int8_t& byte);
  uint32_t readI16(int16_t& i16);
  uint32_t readI32(int32_t& i32);
  uint34_t readI64(int64_t& i64);
  uint32_t readDouble(double& dub);
  uint32_t readString(std::string& str);
  uint32_t readBinary(std::string& str);

 private:
  TTransport* trans_;
};

class TBSONProtocolFactory : public TProtocolFactory {
public:
  TBSONProtocolFactory() {}

  virtual ~TBSONProtocolFactory() {}

  boost::shared_ptr<TProtocol> getProtocol(boost::shared_ptr<TTransport> trans) {
    return boost::shared_ptr<TProtocol>(new TBSONProtocol(trans));
  }
};

}
}
} // apache::thrift::protocol
