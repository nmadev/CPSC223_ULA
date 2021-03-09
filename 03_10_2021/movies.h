#ifndef __MOVIES_H__
#define __MOVIES_H__

#include <stdio.h>
#include <stdlib.h>

struct movie;
typedef struct movie movie;

/**
 * Creates and returns a pointer to a movie struct, NULL if unable
 *
 * @param t a character array holding the name of the movie, non-NULL
 * @return a pointer to a movie struct
 */
movie *movie_create(char* t);

/**
 * Prints movie name, number of tickets sold, and number of tickets 
 * remaining for a passed movie.
 * 
 * @param m a pointer to a movie struct, non-NULL
 */
void movie_print(movie *m);

/**
 * Returns the number of tickets sold for a given movie
 * 
 * @param m a pointer to a movie struct, non-NULL
 * @return number of movie tickets sold
 */
size_t get_sold(movie *m);

/**
 * Returns the number of tickets remaining for a given movie
 * 
 * @param m a pointer to a movie struct, non-NULL
 * @return number of movie tickets remaining
 */
size_t get_left(movie *m);

/**
 * Returns the title for a given movie
 * 
 * @param m a pointer to a movie struct, non-NULL
 * @return pointer to the char array holding the title of the movie
 */
char *get_name(movie *m);

/**
 * Frees all allocated memory associated with the movie
 * 
 * @param m a pointer to a movie struct, non-NULL
 */
void movie_destroy(movie *m);

#endif