CFLAGS=-Wall -g

all:
	cc $(CFLAGS) wordcounter.c -o wordcounter

clean:
	rm -f wordcounter
