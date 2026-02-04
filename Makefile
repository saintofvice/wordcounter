CC = gcc
CFLAGS = -Wall -g
SOURCES = ./wordcounter.c

all: clean wordcounter

wordcounter:
	$(CC) $(CFLAGS) $(SOURCES) -o wordcounter

clean:
	rm -f wordcounter
