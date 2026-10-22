CC = gcc
CFLAGS = -Wall -Wextra -std=c11

app: main.o vector3.o
	$(CC) $(CFLAGS) main.o vector3.o -o app

main.o: main.c vector3.h
	$(CC) $(CFLAGS) -c main.c -o main.o

vector3.o: vector3.c vector3.h
	$(CC) $(CFLAGS) -c vector3.c -o vector3.o

clean:
	rm -f app main.o vector3.o

.PHONY: clean