CFLAGS=-Wall -g

all:
	cc -Wall -g wordcounter.c -o wordcounter

clean:
	rm -f wordcounter
