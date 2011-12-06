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

#define INSTANCE_LOCK "wsn-code-lock"

void signal_handler_IO(int status); //definition of signal handler
void sigint_handler(int sig); //definition of signal handler
void restoreDefaults();
int processReceiveBuffer();
int openComPort(long rw);
int only_one_instance(void);
void ooi_unlink(void);
void fail(const char *message);

#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

