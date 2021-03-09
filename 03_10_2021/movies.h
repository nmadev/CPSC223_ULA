#ifndef __MOVIES_H__
#define __MOVIES_H__

#include <stdio.h>
#include <stdlib.h>

struct movie;
typedef struct movie movie;

/**
 * Determines the result of playing the two given allocations of units
 * against each other.  The return value is 1.0 if the first allocation
 * wins, 0.0 if the second wins, and 0.5 for a draw.
 *
 * @param n a positive integer
 * @param a1 a pointer to an array of n nonnegative integers, non-NULL
 * @param a2 a pointer to an array of n nonnegative integers, non-NULL
 * @param v a pointer to an array of n positive doubles, non-NULL
 */
double movie_create(char* t, size_t sold);
#endif