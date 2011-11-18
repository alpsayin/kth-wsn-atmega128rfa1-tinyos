#include <termios.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#define BAUDRATE B57600
#define MODEMDEVICE "/dev/ttyUSB0"
#define _POSIX_SOURCE 1         //POSIX compliant source
#define FALSE 0
#define TRUE 1

volatile int STOP=FALSE;

void signal_handler_IO (int status);    //definition of signal handler
int wait_flag=TRUE;                     //TRUE whiles no signal received
char devicename[80];
long Baud_Rate = 57600;         // default Baud Rate (110 through 38400)
long BAUD;                      // derived baud rate from command line
long DATABITS;
long STOPBITS;
long PARITYON;
long PARITY;
int Data_Bits = 8;              // Number of data bits
int Stop_Bits = 1;              // Number of stop bits
int Parity = 02;                 // Parity as follows:
                  // 00 = NONE, 01 = Odd, 02 = Even, 03 = Mark, 04 = Space
int Format = 3;
FILE *input;
FILE *output;
FILE *log;
int status;

int delayed_write(int fd, const char* buf, int len)
{
  int i, result=0;
  for(i=0; i<len; i++)
    {
      usleep(100000);
      result += write(fd, &buf[i], 1);
    }
  return result;
}

main(int Parm_Count, char *Parms[])
{
  
  char instr[100] ="\r\nOn the command you must include six items in the following order, they are:\r\n";
  char instr1[80] ="   1.  The device name      Ex: ttyS0 for com1, ttyS1 for com2, etc\r\n";
  char instr2[80] ="   2.  Baud Rate            Ex: 900-230400 \r\n";
  char instr3[80] ="   3.  Number of Data Bits  Ex: 8 \r\n";
  char instr4[80] ="   4.  Number of Stop Bits  Ex: 1 or 2\r\n";
  char instr5[80] ="   5.  Parity               Ex: 0=none, 1=odd, 2=even\r\n";
  char instr6[80] ="   6.  Format of data received:  1=hex, 2=dec, 3=hex/asc, 4=dec/asc, 5=asc\r\n";
  char instr7[80] =" Example command line:  com /dev/ttyUSB0 57600 8 1 0 5 \r\n";
  char Param_strings[7][80];
  char message[90];
  
  mode_t mode;
  int fd, tty, c, res, i, error, rc, numtries;
  char In1, Key;
  struct termios oldtio, newtio;       //place for old and new port settings for serial port
  struct termios oldkey, newkey;       //place tor old and new port settings for keyboard teletype
  struct sigaction saio;               //definition of signal action
  char buf[255];                       //buffer for where data is put

  input = fopen("/dev/tty", "r");      //open the terminal keyboard
  output = fopen("/dev/tty", "w");     //open the terminal screen
  
   if (!input || !output)
   {
      fprintf(stderr, "Unable to open /dev/tty\n");
      return (1);
   }

   error=0;
   //read the parameters from the command line
   if (Parm_Count==7)  //if there are the right number of parameters on the command line
   {
      for (i=1; i<Parm_Count; i++)  // for all wild search parameters
      {
         strcpy(Param_strings[i-1],Parms[i]);
      }
      i=sscanf(Param_strings[0],"%s",devicename);
      if (i != 1) error=1;
      i=sscanf(Param_strings[1],"%li",&Baud_Rate);
      if (i != 1) error=1;
      i=sscanf(Param_strings[2],"%i",&Data_Bits);
      if (i != 1) error=1;
      i=sscanf(Param_strings[3],"%i",&Stop_Bits);
      if (i != 1) error=1;
      i=sscanf(Param_strings[4],"%i",&Parity);
      if (i != 1) error=1;
      i=sscanf(Param_strings[5],"%i",&Format);
      if (i != 1) error=1;
      sprintf(message,"Device=%s, Baud=%li\r\n",devicename, Baud_Rate); //output the received setup parameters
      fputs(message,output);
      sprintf(message,"Data Bits=%i  Stop Bits=%i  Parity=%i  Format=%i\r\n",Data_Bits, Stop_Bits, Parity, Format);
      fputs(message,output);
   }  //end of if param_count==7
   if ((Parm_Count==7) && (error==0))  //if the command line entrys were correct
   {                                    //run the program
      tty = open("/dev/tty", O_RDWR | O_NOCTTY | O_NONBLOCK); //set the user console port up
      tcgetattr(tty,&oldkey); // save current port settings   //so commands are interpreted right for this program
      
      cfsetispeed(&newkey, BAUDRATE);
      cfsetospeed(&newkey, BAUDRATE);

      // set new port settings for non-canonical input processing  //must be NOCTTY
      newkey.c_cflag = BAUDRATE | CRTSCTS | CS8 | CLOCAL | CREAD;
      newkey.c_iflag = IGNPAR;
      newkey.c_oflag = OPOST | ONLCR;
      newkey.c_lflag = ~(ICANON | ECHO | ECHOE | ISIG);       //ICANON;
      newkey.c_cc[VMIN]=1;
      newkey.c_cc[VTIME]=0;
      tcflush(tty, TCIFLUSH);
      tcsetattr(tty,TCSANOW,&newkey);

    switch (Baud_Rate)
    {
    default:
      case 57600:
	BAUD = B57600;
	break;
      case 230400:
	BAUD = B230400;
	break;
      case 115200:
	BAUD = B115200;
	break;
      case 38400:
	BAUD = B38400;
	break;
      case 19200:
	BAUD  = B19200;
	break;
      case 9600:
	BAUD  = B9600;
	break;
      case 4800:
	BAUD  = B4800;
	break;
      case 2400:
	BAUD  = B2400;
	break;
      case 1800:
	BAUD  = B1800;
	break;
      case 1200:
	BAUD  = B1200;
	break;
      case 600:
	BAUD  = B600;
	break;
      case 300:
	BAUD  = B300;
	break;
      case 200:
	BAUD  = B200;
	break;
      case 150:
	BAUD  = B150;
	break;
      case 134:
	BAUD  = B134;
	break;
      case 110:
	BAUD  = B110;
	break;
      case 75:
	BAUD  = B75;
	break;
      case 50:
	BAUD  = B50;
	break;
      }  //end of switch baud_rate
      switch (Data_Bits)
      {
         case 8:
         default:
            DATABITS = CS8;
            break;
         case 7:
            DATABITS = CS7;
            break;
         case 6:
            DATABITS = CS6;
            break;
         case 5:
            DATABITS = CS5;
            break;
      }  //end of switch data_bits
      switch (Stop_Bits)
      {
         case 1:
         default:
            STOPBITS = 0;
            break;
         case 2:
            STOPBITS = CSTOPB;
            break;
      }  //end of switch stop bits
      switch (Parity)
      {
         case 0:
         default:                       //none
            PARITYON = 0;
            PARITY = 0;
            break;
         case 1:                        //odd
            PARITYON = PARENB;
            PARITY = PARODD;
            break;
         case 2:                        //even
            PARITYON = PARENB;
            PARITY = 0;
            break;
      }  //end of switch parity

      //set read&write permissions to port
      /*rc = chmod(devicename, 0666);
      if (rc == -1)
	fprintf(stderr, "chmod failed, errno = %d\n", errno);
      */
       
      //open the device(com port) to be non-blocking (read will return immediately)
      fd = open(devicename, O_RDWR | O_NOCTTY | O_NONBLOCK);
      if (fd < 0)
      {
         perror(devicename);
         return (-1);
      }

      //wait before flush because of a kernel bug
      usleep(200000);
      //discard the stupid data, which may cause overflow in the tasks
      tcflush(fd, TCIOFLUSH);
      //install the serial handler before making the device asynchronous
      saio.sa_handler = signal_handler_IO;
      sigemptyset(&saio.sa_mask);   //saio.sa_mask = 0;
      saio.sa_flags = 0;
      saio.sa_restorer = NULL;
      sigaction(SIGIO,&saio,NULL);

      // allow the process to receive SIGIO
      fcntl(fd, F_SETOWN, getpid());
      // Make the file descriptor asynchronous (the manual page says only
      // O_APPEND and O_NONBLOCK, will work with F_SETFL...)
      fcntl(fd, F_SETFL, FASYNC);

      tcgetattr(fd,&oldtio); // save current port settings 
      
      cfsetispeed(&newtio, BAUD);
      cfsetospeed(&newtio, BAUD);

      // set new port settings for canonical input processing 
      newtio.c_cflag |= BAUD | DATABITS | STOPBITS | PARITYON | PARITY | CLOCAL | CREAD;
      newtio.c_cflag &= ~CRTSCTS;
      newtio.c_iflag |= IGNPAR;
      newtio.c_iflag &= ~(IXON | IXOFF | IXANY);
      newtio.c_oflag &= ~OPOST;  
      newtio.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);       //ICANON;
      newtio.c_cc[VMIN]=1;
      newtio.c_cc[VTIME]=0;
      tcflush(fd, TCIFLUSH);
      tcsetattr(fd,TCSANOW,&newtio);

      //now that the attributes are actually set, flush the previously received data just to make sure
      usleep(200000);
      tcflush(fd, TCIOFLUSH); //what made the difference was the first tcflush call, but still keeping this, can't hurt
            
      // loop while waiting for input. normally we would do something useful here
      while (STOP==FALSE)
	{
	  status = fread(&Key,1,1,input);
	  //usleep(200);
	  if (status==1)  //if a key was hit
	    {
	      switch (Key)
		{ /* branch to appropiate key handler */
		case 0x1b: /* Esc */
                  STOP=TRUE;
                  break;
		default:
		  //                  fputc((int) Key,output);
		  //                  sprintf(message,"%x ",Key);  //debug
		  //                  fputs(message,output);
                  if(delayed_write(fd,&Key,1)!=1)
		    {
		      fputs("write fail\n", output);
		    }  
		  //		  else
		  //		    {
		  //		      fputs("write success\n", output);
		  //		    }
                  break;
		}  //end of switch key
	    }  //end if a key was hit
	  // after receiving SIGIO, wait_flag = FALSE, input is available and can be read
	  if (wait_flag==FALSE)  //if input is available
	    {
	      //	      printf("wait flag = false\n");
	      res = read(fd,buf,255);
	      //	      printf("num of characters read = %d -> [%s]\n",res,buf);
	      if (res>0)
		{
		  for (i=0; i<res; i++)  //for all chars in string
		    {
		      In1 = buf[i];
		      switch (Format)
			{
			case 1:         //hex
			  sprintf(message,"%x ",In1);
			  fputs(message,output);
			  //open file to write new data
			  ﻿log = fopen("/opt/apache/htdocs/sensor1.html", "w+");
        	  fprintf(log,"<html><body><table><tr><td>Temperature</td><td>%x</td></tr><tr><td>Pressure</td><td>%x</td></tr></table></body></html>",message,message*2);
 			  fclose(log);
			  break;
			case 2:         //decimal
			  sprintf(message,"%d ",In1);
			  fputs(message,output);
			  //open file to write new data
			  ﻿log = fopen("/opt/apache/htdocs/sensor1.html", "w+");
			  //example code
        	  fprintf(log,"<html><body><table><tr><td>Temperature</td><td>%d</td></tr><tr><td>Pressure</td><td>%d</td></tr></table></body></html>",message,message*2);
 			  fclose(log);
			  break;
			case 3:         //hex and asc
			  if ((In1<32) || (In1>125))
			    {
			      sprintf(message,"%x",In1);
			      fputs(message,output);
			    }
			  else fputc ((int) In1, output);
			  break;
			case 4:         //decimal and asc
			default:
			  if ((In1<32) || (In1>125))
			    {
			      sprintf(message,"%d",In1);
			      fputs(message,output);
			    }
			  else fputc ((int) In1, output);
			  break;
			case 5:         //asc
			  fputc ((char) In1, output);
			  break;
			}  //end of switch format
		    }  //end of for all chars in string
		  fflush(output);
		}  //end if res>0
	      //            buf[res]=0;
	      //            printf(":%s:%d\n", buf, res);
	      //            if (res==1) STOP=TRUE; /* stop loop if only a CR was input */
	      wait_flag = TRUE;      /* wait for new input */
	    }  //end if wait flag == FALSE
	  
	}  //while stop==FALSE
      // restore old port settings
      tcsetattr(fd,TCSANOW,&oldtio);
      tcsetattr(tty,TCSANOW,&oldkey);
      close(tty);
      close(fd);        //close the com port
   }  //end if command line entrys were correct
   else  //give instructions on how to use the command line
     {
       fputs(instr,output);
       fputs(instr1,output);
       fputs(instr2,output);
       fputs(instr3,output);
       fputs(instr4,output);
       fputs(instr5,output);
       fputs(instr6,output);
       fputs(instr7,output);
     }
   fclose(input);
   fclose(output);
}  //end of main

/***************************************************************************
* signal handler. sets wait_flag to FALSE, to indicate above loop that     *
* characters have been received.                                           *
***************************************************************************/

void signal_handler_IO (int status)
{
  //  printf("received SIGIO signal = %d\n", status);
  wait_flag = FALSE;
}

