/* 
 * File:   packet_types.h
 * Author: alpsayin
 *
 * Created on December 2, 2011, 12:08 AM
 */

#ifndef PACKET_TYPES_H
#define	PACKET_TYPES_H

#include <inttypes.h>

#ifdef	__cplusplus
extern "C" {
#endif

#define TEMPERATURE data1
#define PRESSURE data2
#define HUMIDITY data3
#define LUMINOSITY data4
#define BATTERY data5

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

    typedef struct data_packet_low //size 4 bytes
    {
        uint8_t data1;
        uint8_t data2;
        uint8_t data3;
        uint8_t data4;
        uint8_t data5;
    } data_packet_low_t;

    typedef struct data_packet_high //size 1 byte
    {
        uint8_t data1 : 2;
        uint8_t data2 : 2;
        uint8_t data3 : 2;
        uint8_t data4 : 2;
        uint8_t data5 : 2;
    } data_packet_high_t;

    typedef struct compressed_data_packet //size 9 bytes
    {
        uint16_t source; //2 byte
        data_packet_high_t highBytes; //4 bytes
        data_packet_low_t lowBytes; //1 byte
    } compressed_data_packet_t;
    
    typedef struct data_packet //size 12 bytes
    {
        uint16_t source; //2 byte
        uint16_t data1 : 10; //2 byte
        uint16_t data2 : 10; //2 byte
        uint16_t data3 : 10; //2 byte
        uint16_t data4 : 10; //2 byte
        uint16_t data5 : 10; //2 byte
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
        PACKET_ERROR = -1,
        PACKET_COMMAND = 0,
        PACKET_DATA,
        PACKET_DATA_COMPRESSED,
        PACKET_STATUS
    };
    

    void compressPacket(data_packet_t* dp, compressed_data_packet_t* dpc);
    void decompressPacket(data_packet_t* dp, compressed_data_packet_t* dpc);
    int packetToStr(void* dp, char* buf, uint8_t pt);
    int strToPacket(void* dp, char* buf);


#ifdef	__cplusplus
}
#endif

#endif	/* PACKET_TYPES_H */

