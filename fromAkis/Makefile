
CC=g++
CFLAGS=-march=i586 -Os -g
LDFLAGS=-static
 
INPUT=serial_com_u.c
OUTPUT=serial_alix.out


all:
	$(CC) $(INPUT) -o $(OUTPUT) $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf $(OUTPUT)

install: all
	./$(OUTPUT) /dev/ttyUSB0 57600 8 1 0 5
