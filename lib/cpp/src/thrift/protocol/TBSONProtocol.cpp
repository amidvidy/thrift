#include <thrift/protocol/TBSONProtocol.h>

#include <bson.h>

using namespace apache::thrift::transport;

namespace apache {
namespace thrift {
namespace protocol {

namespace {

enum class BSONState : std::uint8_t {

};

}  // namespace

TBSONProtocol::TBSONProtocol(boost::shared_ptr<TTransport> ptrans)
    : TVirtualProtocol<TBSONProtocol>(ptrans),
      trans_(ptrans.get()) {
}

TBSONProtocol::~TBSONProtocol() {
}

uint32_t TBSONProtocol::writeMessageBegin(const std::string& name,
                           const TMessageType messageType,
                           const int32_t seqid) { return 0; }
uint32_t TBSONProtocol::writeMessageEnd() { return 0; }

uint32_t TBSONProtocol::writeStructBegin(const char* name) { return 0; }
uint32_t TBSONProtocol::writeStructEnd() { return 0; }
uint32_t TBSONProtocol::writeFieldBegin(const char* name, const TType fieldType, const int16_t fieldId) { return 0; }
uint32_t TBSONProtocol::writeFieldEnd() { return 0; }
uint32_t TBSONProtocol::writeFieldStop() { return 0; }
uint32_t TBSONProtocol::writeMapBegin(const TType keyType, const TType valType, const uint32_t size) { return 0; }
uint32_t TBSONProtocol::writeMapEnd() { return 0; }
uint32_t TBSONProtocol::writeListBegin(const TType elemType, const uint32_t size) { return 0; }
uint32_t TBSONProtocol::writeListEnd() { return 0; }
uint32_t TBSONProtocol::writeSetBegin(const TType elemType, const uint32_t size) { return 0; }
uint32_t TBSONProtocol::writeSetEnd() { return 0; }
uint32_t TBSONProtocol::writeBool(const bool value) { return 0; }
uint32_t TBSONProtocol::writeByte(const int8_t byt) { return 0; }
uint32_t TBSONProtocol::writeI16(const int16_t i16) { return 0; }
uint32_t TBSONProtocol::writeI32(const int32_t i32) { return 0; }
uint32_t TBSONProtocol::writeI64(const int64_t i64) { return 0; }
uint32_t TBSONProtocol::writeDouble(const double dub) { return 0; }
uint32_t TBSONProtocol::writeString(const std::string& str) { return 0; }
uint32_t TBSONProtocol::writeBinary(const std::string& str) { return 0; }

uint32_t TBSONProtocol::readMessageBegin(std::string& name, TMessageType& messageType, int32_t& seqid) { return 0; }
uint32_t TBSONProtocol::readMessageEnd() { return 0; }
uint32_t TBSONProtocol::readStructBegin(std::string& name) { return 0; }
uint32_t TBSONProtocol::readStructEnd() { return 0; }
uint32_t TBSONProtocol::readFieldBegin(std::string& name, TType& fieldType, int16_t& fieldId) { return 0; }
uint32_t TBSONProtocol::readFieldEnd() { return 0; }
uint32_t TBSONProtocol::readMapBegin(TType& keyType, TType& valType, uint32_t& size) { return 0; }
uint32_t TBSONProtocol::readMapEnd() { return 0; }
uint32_t TBSONProtocol::readListBegin(TType& elemType, uint32_t& size) { return 0; }
uint32_t TBSONProtocol::readListEnd() { return 0; }
uint32_t TBSONProtocol::readSetBegin(TType& elemType, uint32_t size) { return 0; }
uint32_t TBSONProtocol::readSetEnd() { return 0; }
uint32_t TBSONProtocol::readBool(bool& value) { return 0; }
uint32_t TBSONProtocol::readByte(int8_t& byte) { return 0; }
uint32_t TBSONProtocol::readI16(int16_t& i16) { return 0; }
uint32_t TBSONProtocol::readI32(int32_t& i32) { return 0; }
uint32_t TBSONProtocol::readI64(int64_t& i64) { return 0; }
uint32_t TBSONProtocol::readDouble(double& dub) { return 0; }
uint32_t TBSONProtocol::readString(std::string& str) { return 0; }
uint32_t TBSONProtocol::readBinary(std::string& str) { return 0; }

}
}
}  // apache::thrift::protocol
