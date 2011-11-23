
uint16_t adjustLQI(uint8_t val) {
  uint16_t result = (80 - (val - 50));
  result = (((result * result) >> 3) * result) >> 3;  // result = (result ^ 3) / 64
  return result;
}

module RFA1ReadLqiC {
  provides interface ReadLqi;
  uses interface PacketField<uint8_t> as PacketLinkQuality;
} implementation {
  command uint8_t ReadLqi.read(message_t *msg) {
    return call PacketLinkQuality.get(msg);
  }
}
