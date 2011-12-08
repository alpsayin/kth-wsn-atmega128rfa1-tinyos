#ifndef RADIO_CONFIG_H
#define RADIO_CONFIG_H


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

enum {
	DATA_TYPE_TEMP = 1,
	DATA_TYPE_LEDS
};

typedef nx_struct kth_wsn_command
{
	nx_uint8_t commandByte;
	nx_uint8_t forReal;
} kth_wsn_command_t;

typedef nx_struct kth_wsn_data
{
	nx_uint8_t source;
	nx_uint8_t type;
	nx_uint16_t data;
} kth_wsn_data_t;

typedef nx_struct radio_count_msg {
  nx_uint16_t counter;
} radio_count_msg_t;

enum {
  AM_RADIO_COUNT_MSG = 6,
};


#endif /* RADIO_CONFIG_H */
