#ifndef RADIO_SUBSYSTEM_CONFIG_H
#define RADIO_SUBSYSTEM_CONFIG_H



#include "ControllerConfig.h"

#define PACKET_LINK

#ifdef TOS_NODE_ID
#undefine TOS_NODE_ID
#endif

#define TOS_NODE_ID 2

#ifdef DEFINED_TOS_AM_ADDRESS
#undefine DEFINED_TOS_AM_ADDRESS
#endif

#define DEFINED_TOS_AM_ADDRESS TOS_NODE_ID

#ifdef DEFINED_TOS_AM_ADDRESS
#if DEFINED_TOS_AM_ADDRESS==1
#error set an actual _DEFINED_TOS_AM_ADDRESS
#endif
#else
#error set an actual _DEFINED_TOS_AM_ADDRESS
#endif

#define RADIO_HISTORY_SIZE (CONTROLLER_BUFFER_SIZE)



#endif /* RADIO_SUBSYSTEM_CONFIG_H */
