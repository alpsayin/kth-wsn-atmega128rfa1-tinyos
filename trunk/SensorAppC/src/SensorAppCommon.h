#ifndef SENSOR_APP_COMMON_H
#define SENSOR_APP_COMMON_H

#define TOS_NODE_ID 2

#define DEFINED_TOS_AM_ADDRESS TOS_NODE_ID

#ifdef DEFINED_TOS_AM_ADDRESS
#if DEFINED_TOS_AM_ADDRESS==1
#error set an actual _DEFINED_TOS_AM_ADDRESS
#endif
#else
#error set an actual _DEFINED_TOS_AM_ADDRESS
#endif

#define TRY_3_TIMES(x) (((call x)!=SUCCESS)?((call x)!=SUCCESS)?(call x):SUCCESS:SUCCESS)
#endif /* SENSOR_APP_COMMON_H */
