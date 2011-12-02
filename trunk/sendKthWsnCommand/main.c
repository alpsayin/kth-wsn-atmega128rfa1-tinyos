/* 
 * File:   main.c
 * Author: alpsayin
 *
 * Created on December 2, 2011, 12:00 AM
 */
#include <termios.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <stdlib.h>
#include <strings.h>

#define BAUDRATE B57600
#define MODEMDEVICE "/dev/ttyUSB0"
#define _POSIX_SOURCE 1         //POSIX compliant source
#define FALSE 0
#define TRUE 1

#include "packet_types.h"
#include "main.h"

volatile int STOP = FALSE;

void signal_handler_IO(int status); //definition of signal handler
int wait_flag = TRUE; //TRUE whiles no signal received
char devicename[80];
long Baud_Rate = 57600; // default Baud Rate (110 through 38400)
long BAUD; // derived baud rate from command line
long DATABITS;
long STOPBITS;
long PARITYON;
long PARITY;
int Data_Bits = 8; // Number of data bits
int Stop_Bits = 1; // Number of stop bits
int Parity = 02; // Parity as follows:
// 00 = NONE, 01 = Odd, 02 = Even, 03 = Mark, 04 = Space
int Format = 3;
FILE *input;
FILE *output;
int status;

int main(int argc, char** argv)
{
    char buf[64];
    char* ptr;
    int fd;
    unsigned int i = 0, val = 0;
    uint8_t confirmation = 1, verbose = 0;
    command_packet_serial_t commandPacket;

    input = stdin;
    output = stdout;

    const char instr[] = "\nsendKthWsnCommand command utility\n\
----------------------------------------------------------\
\nSends a command through serial port to the root mote to be dispatched by radio\n\
If no command is specified by entering either -t or -r then -e is implied,\
 but if -t is entered with -e then an echo command with a value will be sent, no interval will be set.\
 If -e is entered, it overrides -t and -r, else if -t is entered it overrides -r. \n\
    Options:\n\
    -hE set history enable (0/1) \n\
    -bE burst enable (0/1) (if this is not 1 -h is not effective) \n\
    -wE write enable (0/1) (if this is not 1 -h -b are not effective) \n\
    -tTimeU set measurement interval in seconds, minutes or hours (U=s/m/h) \n\
    -rType request data of Type (data/history/status)   \n\
    -aAddress the address that issue the command (address in radix 16)\n\
    -f no confirmation \n\
    -e send echo command, expecting the same command to return\n\
\n\
Example: \n\
sendKthWsnCommand -h1 -b1 -w1 -t1h -rd -aFFFF -f \n\
    history enabled \n\
    burst enabled \n\
    write enabled \n\
    interval=1 hour \n\
    read data from all nodes (broadcast) \n";

    commandPacket.address = 0xFFFF; //default address is broadcast
    commandPacket.opcode = COMMAND_CONFIGURE;
    for (i = 0; i < argc; i++)
    {
        if (!strncmp(argv[i], "-h", 2))
        {
            if (strlen(argv[i]) == 2)
            {
                printf(instr);
                perror("-h has too few parameters");
                return EXIT_FAILURE;
            }
            val = strtol(argv[i] + 2, &ptr, 2);
            if (ptr == argv[i] + 2)
            {
                printf(instr);
                perror("-h has faulty parameter");
                return EXIT_FAILURE;
            }
            commandPacket.HE = val > 0;
        }
        else if (!strncmp(argv[i], "-b", 2))
        {
            if (strlen(argv[i]) == 2)
            {
                printf(instr);
                perror("-b has too few parameters");
                return EXIT_FAILURE;
            }
            val = strtol(argv[i] + 2, &ptr, 2);
            if (ptr == argv[i] + 2)
            {
                printf(instr);
                perror("-b has faulty parameter");
                return EXIT_FAILURE;
            }
            commandPacket.BE = val > 0;
        }
        else if (!strncmp(argv[i], "-w", 2))
        {
            if (strlen(argv[i]) == 2)
            {
                printf(instr);
                perror("-w has too few parameters");
                return EXIT_FAILURE;
            }
            val = strtol(argv[i] + 2, &ptr, 2);
            if (ptr == argv[i] + 2)
            {
                printf(instr);
                perror("-w has faulty parameter");
                return EXIT_FAILURE;
            }
            commandPacket.WE = val > 0;
        }
        else if (!strncmp(argv[i], "-r", 2))
        {
            if (strlen(argv[i]) == 2)
            {
                printf(instr);
                perror("-r has too few parameters");
                return EXIT_FAILURE;
            }
            val = argv[i][2];
            if (val == 'd')
                commandPacket.opcode = COMMAND_READ_DATA;
            else if(val == 'h')
                commandPacket.opcode = COMMAND_READ_HISTORY;
            else if(val == 's')
                commandPacket.opcode = COMMAND_READ_STATUS;
            else
            {
                printf(instr);
                perror("-r has faulty parameter");
                return EXIT_FAILURE;
            }
        }
        else if (!strncmp(argv[i], "-t", 2))
        {
            if (strlen(argv[i]) == 2)
            {
                printf(instr);
                perror("-t has too few parameters");
                return EXIT_FAILURE;
            }
            val = strtol(argv[i] + 2, &ptr, 10);
            if (ptr == argv[i] + 2)
            {
                printf(instr);
                perror("-t has faulty parameter");
                return EXIT_FAILURE;
            }
            if (*ptr == 's')
                commandPacket.opcode = COMMAND_INTERVAL_SECONDS;
            else if (*ptr == 'm')
                commandPacket.opcode = COMMAND_INTERVAL_MINUTES;
            else if (*ptr == 'h')
                commandPacket.opcode = COMMAND_INTERVAL_HOURS;
            else
            {
                printf(instr);
                perror("unknown time unit for -t");
                return EXIT_FAILURE;
            }
            commandPacket.value = val;
        }
        else if (!strncmp(argv[i], "-a", 2))
        {
            if (strlen(argv[i]) == 2)
            {
                printf(instr);
                perror("-a has too few parameters");
                return EXIT_FAILURE;
            }
            val = strtol(argv[i] + 2, &ptr, 16);
            if (ptr == argv[i] + 2)
            {
                printf(instr);
                perror("-a has faulty parameter");
                return EXIT_FAILURE;
            }
            commandPacket.address = val;
        }
        else if (!strncmp(argv[i], "-e", 2))
        {
            if (strlen(argv[i]) != 2)
            {
                printf(instr);
                perror("-e has too many parameters");
                return EXIT_FAILURE;
            }
            commandPacket.opcode = COMMAND_ECHO;
        }
        else if (!strncmp(argv[i], "-f", 2))
        {
            if (strlen(argv[i]) != 2)
            {
                printf(instr);
                perror("-f has too many parameters");
                return EXIT_FAILURE;
            }
            confirmation = 0;
        }
        else if (!strncmp(argv[i], "-v", 2))
        {
            if (strlen(argv[i]) != 2)
            {
                printf(instr);
                perror("-v has too many parameters");
                return EXIT_FAILURE;
            }
            verbose = 1;
        }
    }

    commandPacket.HE &= commandPacket.WE; //write must be enabled for history enable
    commandPacket.BE &= commandPacket.HE; //history must be enabled for burst enable

    if(!commandPacket.WE)
    {
        if(commandPacket.opcode == COMMAND_CONFIGURE)
        {
            printf(instr);
            perror("no command is entered");
            return EXIT_FAILURE;
        }
    }
    if (verbose)
    {
        printf("\n");
        printf("Command Packet to be Sent\n");
        printf("Write Enable\t:\t%d\n", commandPacket.WE);
        printf("History Enable\t:\t%d\n", commandPacket.HE);
        printf("Burst Enable\t:\t%d\n", commandPacket.BE);
        switch (commandPacket.opcode)
        {
        case COMMAND_ECHO:
            printf("Opcode\t\t:\tCommand Echo\n", commandPacket.opcode);
            break;
        case COMMAND_READ_DATA:
            printf("Opcode\t\t:\tRead Data\n", commandPacket.opcode);
            break;
        case COMMAND_READ_HISTORY:
            printf("Opcode\t\t:\tRead History\n", commandPacket.opcode);
            break;
        case COMMAND_READ_STATUS:
            printf("Opcode\t\t:\tRead Status\n", commandPacket.opcode);
            break;
        case COMMAND_INTERVAL_SECONDS:
            printf("Opcode\t\t:\tSet Interval Seconds\n", commandPacket.opcode);
            break;
        case COMMAND_INTERVAL_MINUTES:
            printf("Opcode\t\t:\tSet Interval Minutes\n", commandPacket.opcode);
            break;
        case COMMAND_INTERVAL_HOURS:
            printf("Opcode\t\t:\tSet Interval Hours\n", commandPacket.opcode);
            break;
        case COMMAND_CONFIGURE:
            printf("Opcode\t\t:\tConfigure Settings\n", commandPacket.opcode);
            break;
        default:
            printf("Opcode\t\t:\tNO COMMAND\n", commandPacket.opcode);
            printf(instr);
            perror("unknown opcode");
            return EXIT_FAILURE;
        }
        printf("Value\t\t:\t%d\n", commandPacket.value);
        if (commandPacket.address == 0xFFFF)
            printf("Address\t\t:\tAll\n");
        else
            printf("Address\t\t:\t0x%x\n", commandPacket.address);
        printf("\n");
    }
    else
    {
        commandPacketToStr(&commandPacket, buf);
        printf("Command\n%s\n", buf);
    }

    if (confirmation)
    {
        printf("Do you want to continue?[y/N]\n");
        val = getchar();
    }

    if (val == 'y' || confirmation==0)
    {
        printf("trying to open com port...\n");
        //TODO open the com port
        fd = open("output.txt", O_WRONLY);
        printf("sending command to the root mote...\n");
        //TODO feed the command packet byte by byte using a
        for(ptr=(uint8_t*)&commandPacket; (uint32_t)ptr<(uint32_t)&commandPacket+sizeof(command_packet_serial_t); ptr++)
        {
            delayed_write(fd, ptr, 1);
        }
    }
    else
    {
        printf("command sending CANCELED...\n");
    }

    return (EXIT_SUCCESS);
}
int delayed_write(int fd, uint8_t* buf, int len)
{
  int i, result=0;
  for(i=0; i<len; i++)
    {
      usleep(100000);
      result += write(fd, &buf[i], 1);
    }
  return result;
}

/***************************************************************************
 * signal handler. sets wait_flag to FALSE, to indicate above loop that     *
 * characters have been received.                                           *
 ***************************************************************************/

void signal_handler_IO(int status)
{
    //  printf("received SIGIO signal = %d\n", status);
    wait_flag = FALSE;
}
