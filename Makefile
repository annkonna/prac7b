CC = gcc
CFLAGS = -g

empquery: empquery.c
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm empquery

.PHONY: empquery
