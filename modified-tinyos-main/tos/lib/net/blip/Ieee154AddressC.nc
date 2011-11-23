
configuration Ieee154AddressC {
  provides interface Ieee154Address;

} implementation {
  components Ieee154AddressP;
  components MainC;
  Ieee154Address = Ieee154AddressP;

  MainC.SoftwareInit -> Ieee154AddressP;
#if defined(PLATFORM_RCB128RFA1)
  #warning no wiring for ieee154address for rfa1

  // workaround until the radio stack uses this interface
#else
  components LocalIeeeEui64C;
  Ieee154AddressP.LocalIeeeEui64 -> LocalIeeeEui64C;
  components CC2420ControlC;
  Ieee154AddressP.CC2420Config -> CC2420ControlC;
#endif
}
