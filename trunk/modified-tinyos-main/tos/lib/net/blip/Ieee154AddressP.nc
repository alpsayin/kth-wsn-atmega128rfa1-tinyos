
module Ieee154AddressP {
  provides {
    interface Init;
    interface Ieee154Address;
  }
  uses {
    interface LocalIeeeEui64;
#if defined(PLATFORM_RCB128RFA1)
    #warning there is no interface for ieee154address
#else
    interface CC2420Config;
#endif
  }
} implementation {
  ieee154_saddr_t m_saddr;
  ieee154_panid_t m_panid;

  command error_t Init.init() {
    m_saddr = TOS_NODE_ID;
    m_panid = 0x22;
    return SUCCESS;
  }

  command ieee154_panid_t Ieee154Address.getPanId() {
    return m_panid;
  }
  command ieee154_saddr_t Ieee154Address.getShortAddr() {
    return m_saddr;
  }
  command ieee154_laddr_t Ieee154Address.getExtAddr() {
    return call LocalIeeeEui64.getId();
  }
  command error_t Ieee154Address.setShortAddr(ieee154_saddr_t addr) {
    m_saddr = addr;
#if defined(PLATFORM_RCB128RFA1)
    #warning no action is taken in setShortAddr
#else
    call CC2420Config.setShortAddr(addr);
    call CC2420Config.sync();
    signal Ieee154Address.changed();
#endif
    return SUCCESS;
  }
#if defined(PLATFORM_RCB128RFA1)
    #warning no action is taken in setShortAddr
#else
  event void CC2420Config.syncDone(error_t err) {}
#endif
}
