
#ifndef RADIO_COUNT_TO_LEDS_H
#define RADIO_COUNT_TO_LEDS_H

#define PACKET_LINK
#define TRAFFIC_MONITOR


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

typedef nx_struct radio_count_msg {
  nx_uint16_t counter;
} radio_count_msg_t;

enum {
  AM_RADIO_COUNT_MSG = 6,
};

#endif
