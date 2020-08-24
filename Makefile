CC=gcc
CFLAGS=-I. -Wall


%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS)

wordFeed: wordFeed.c
	$(CC) -o wordFeed wordFeed.c
