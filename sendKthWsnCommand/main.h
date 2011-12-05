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

void signal_handler_IO(int status); //definition of signal handler
void sigint_handler(int sig); //definition of signal handler
void restoreDefaults();
int openComPort(long rw);

#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

