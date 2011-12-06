
CC=gcc
CFLAGS=-march=i586 -Os -g
LDFLAGS=-static
DFLAGS=RELEASE

INPUT=../main.c ../packet_types.c
OUTPUT=sendkthwsncommand


all:
	$(CC) $(INPUT) -o $(OUTPUT) $(CFLAGS) $(LDFLAGS) -D$(DFLAGS)

clean:
	rm -rf $(OUTPUT)

install: all
	./$(OUTPUT) /dev/ttyUSB0 57600 8 1 0 5
