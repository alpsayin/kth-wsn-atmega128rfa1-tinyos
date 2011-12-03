
CC=g++
CFLAGS=-march=i586 -Os -g
LDFLAGS=-static
 
INPUT=main.c packet_types.c
OUTPUT=sendkthwsncommand


all:
	$(CC) $(INPUT) -o $(OUTPUT) $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf $(OUTPUT)

install: all
	./$(OUTPUT) /dev/ttyUSB0 57600 8 1 0 5
