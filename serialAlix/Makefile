
CC=g++
CFLAGS=-march=i586 -Os -g
LDFLAGS=-static
 
INPUT=com.c
OUTPUT=com.out


all:
	$(CC) $(INPUT) -o $(OUTPUT) $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf $(OUTPUT)

install: all
	./$(OUTPUT) /dev/ttyACM0 57600 8 1 0 5
