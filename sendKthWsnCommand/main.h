/* 
 * File:   main.h
 * Author: alpsayin
 *
 * Created on December 2, 2011, 3:12 AM
 */

#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <inttypes.h>

int delayed_write(int fd, uint8_t* buf, int len);
extern void signal_handler_IO(int status); //definition of signal handler


#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

