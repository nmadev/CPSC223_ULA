CC=gcc
CFLAGS=-Wall -pedantic -std=c99 -g3

Movies: main.o movies.o movie_theater.o
	${CC} ${CCFLAGS} -o $@ $^ -lm

main.o: main.c movies.h movie_theater.h
movies.o: movies.c movies.h
movie_theater.o: movie_theater.c movie_theater.h movies.h