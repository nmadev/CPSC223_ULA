CC=gcc
CFLAGS=-Wall -pedantic -std=c99 -g3

Movies: main.o movies.o 
	${CC} ${CCFLAGS} -o $@ $^ -lm

main.o: main.c movies.h 
movies.o: movies.c movies.h
