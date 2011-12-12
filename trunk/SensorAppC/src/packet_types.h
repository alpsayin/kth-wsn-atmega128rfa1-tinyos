/* 
 * File:   packet_types.h
 * Author: alpsayin
 *
 * Created on December 7, 2011, 12:08 AM
 */

#ifndef PACKET_TYPES_H
#define	PACKET_TYPES_H

#include <inttypes.h>

//#define DEFAULT_TIMER_BOUNDARY 48 //as: will be defined in another file

#ifdef	__cplusplus
extern "C" {
#endif

#ifndef LOW
#define LOW(n) (n & 0x0F)
#endif

#ifndef HIGH
#define HIGH(n) ((n>>4) & 0x0F)
#endif

//[0:WHBOpVaAddr]
#define SIZE_COMMAND (3+3+2+2+4+1)
//[1:Dat1Dat2Dat3Dat4Dat5Addr]
#define SIZE_DATA (3+(7*4)+1)
//[2:AddrBiTHB]
#define SIZE_STATUS (3+4+2+3+1)

#define TEMPERATURE data1
#define PRESSURE data2
#define HUMIDITY data3
#define LUMINOSITY data4
#define BATTERY data5

#define HEX2ASCII(x) ((x>=0&&x<=15)?(x<10?(x+'0'):(x-10+'a')):'N')
#define ASCII2HEX(c) ((c>='0'&&c<='9')?(c-'0'):(c>='a'&&c<='f')?(c-'a'):(c>='A'&&c<='F')?(c-'A'):0)

    typedef struct status_packet
    {
        uint8_t historyEnable : 1;
        uint8_t burstEnable : 1;
        uint8_t reserved : 4;
        uint8_t intervalType : 2;
        uint8_t burstInterval : 8;
        uint16_t node_id;
    } status_packet_t;
    
    enum
    {
        INTERVAL_TYPE_SECONDS = 0,
        INTERVAL_TYPE_MINUTES,
        INTERVAL_TYPE_HOURS,
        INTERVAL_TYPE_DAYS
    };
    
    typedef struct data_packet //size 12 bytes
    {
        uint16_t source; //2 byte
        uint16_t data1 ; //2 byte
        uint16_t data2 ; //2 byte
        uint16_t data3 ; //2 byte
        uint16_t data4 ; //2 byte
        uint16_t data5 ; //2 byte
        uint16_t seqNo ; //2 byte
    } data_packet_t;

    typedef struct command_packet {
        uint8_t WE : 1;
        uint8_t HE : 1;
        uint8_t BE : 1;
        uint8_t opcode : 5;
        uint8_t value;
        uint16_t address;
    } command_packet_t;

    enum
    {
        COMMAND_CONFIGURE = 0,
        COMMAND_ECHO,
        COMMAND_READ_DATA,
        COMMAND_READ_HISTORY,
        COMMAND_READ_STATUS,
        COMMAND_INTERVAL_SECONDS, 
        COMMAND_INTERVAL_MINUTES,
        COMMAND_INTERVAL_HOURS,
        COMMAND_INTERVAL_DAYS
    };

    enum
    {
        PACKET_ERROR = 0,
        PACKET_COMMAND,
        PACKET_DATA,
        PACKET_STATUS
    };

#ifdef ALIX
    int strToCommandPacket(command_packet_t* cp, char* buf);
    int strToDataPacket(data_packet_t* dp, char* buf);
    int strToStatusPacket(status_packet_t* sp, char* buf);
    int commandPacketToStr(command_packet_t* dp, char* buf);
    int dataPacketToStr(data_packet_t* dp, char* buf);
    int statusPacketToStr(status_packet_t* dp, char* buf);
    int getTypeOfPacket(char* buf);
#endif


#ifdef	__cplusplus
}
#endif

#endif	/* PACKET_TYPES_H */

