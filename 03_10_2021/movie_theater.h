#ifndef __MOVIE_THEATER_H__
#define __MOVIE_THEATER_H__

#include <stdio.h>
#include <stdlib.h>

#include "movies.h"
struct theater;
typedef struct theater theater;


theater *theater_create();

void add_movie(theater *t, char *name);

void destroy_theater(theater *t);

movie *get_movie(theater *t, size_t i);

size_t tickets_sold(theater *t);

#endif