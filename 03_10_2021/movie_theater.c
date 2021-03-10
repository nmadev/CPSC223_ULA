#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "movie_theater.h"
#include "movies.h"

struct theater {
    movie **all_movies;
    size_t size;
    size_t capacity;
};

// create a theater - TODO: Is there anything we can do here to make later operations more efficient?
theater *theater_create() {
    theater *t = malloc(sizeof(theater));
    if (t != NULL) {
        t->size = 0;
        t->capacity = 2;
        t->all_movies = malloc(sizeof(movie*) * t->capacity);
    }  
    return t;
}

void add_movie(theater *t, movie *m) {
    // TODO: Is there anything we can do here to make it more efficient?
    if (t->size >= t->capacity - 1)
    {
        t->capacity++;
        t->all_movies = realloc(t->all_movies, sizeof(movie*) * t->capacity); 
    }
    t->all_movies[t->size++] = m;
}

void destroy_theater(theater *t) {
    for (size_t i = 0; i < t->size; t++)
    {
        movie_destroy(t->all_movies[i]);
    }
    free(t->all_movies);
    free(t);
}

movie *get_movie(theater *t, size_t i) {
    if (i >= t->size)
    {
        return NULL;
    }
    return t->all_movies[i];
}

size_t theater_tickets_sold(theater *t) {
    size_t total_sold = 0;
    for (int i = 0; i < t->size; i++) {
        size_t tickets_sold = get_sold(get_movie(t, i));
        total_sold += tickets_sold;
    }
    return total_sold;
}