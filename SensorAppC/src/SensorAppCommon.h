#ifndef SENSOR_APP_COMMON_H
#define SENSOR_APP_COMMON_H

#define NODE_ID 2

#define DEFINED_TOS_AM_ADDRESS (NODE_ID)
#define TOS_NODE_ID (NODE_ID)

#define QUEUE_SIZE_SERIAL_DATA 255
#define QUEUE_SIZE_SERIAL_STATUS 32
#define QUEUE_SIZE_SERIAL_COMMAND 32

//FOR NOW LARGEST BUFFER WE CAN HAVE IS 2! DO NOT CHANGE IT!
#define CONTROLLER_BUFFER_SIZE 2

//IF SENSOR BUFFER SIZE IS NOT EQUAL TO CONTROLLER_BUFFER_SIZE data is not transmitted
//REASON: UKNOWN! DO NOT CHANGE IT!
#define SENSOR_BUFFER_SIZE (CONTROLLER_BUFFER_SIZE)

//THIS CONSTANT IS USED BY THE RECEIVER(ROOT)
//MUST BE EQUAL TO THE CONTROLLER_BUFFER_SIZE, DO NOT CHANGE IT!
#define RADIO_HISTORY_SIZE (CONTROLLER_BUFFER_SIZE)

#define NORMAL_RUN					0
#define TEST_SENSOR_AND_CONTROLLER	1
#define TEST_SERIAL_PORT			2

#define DEBUG_MODE NORMAL_RUN

#endif /* SENSOR_APP_COMMON_H */
