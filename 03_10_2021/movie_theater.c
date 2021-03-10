#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "movie_theater.h"
#include "movies.h"

struct theater
{
    movie **all_movies;
    size_t size;
    size_t capacity;
    // something else should go here
};

// create a theater
theater *theater_create() {
    theater *t = malloc(sizeof(theater));
    if (t != NULL) {
        t->size = 0;
        t->capacity = 100;
        t->all_movies = malloc(sizeof(movie*) * t->capacity);
    }
    
    return t;
}

void add_movie(theater *t, movie *m) {
    
}


// add_movie
// destroy theater
// return tickets_sold

