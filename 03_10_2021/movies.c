#include <stdlib.h>
#include <stdio.h>

#include "movies.h"

struct _movie
{
    char *name;
    size_t tickets_sold;
    size_t tickets_left;
}

movie *movie_create(char *t, size_t sold)
{
    movie *m = malloc(sizeof(movie));
    if (m != NULL)
    {
        size_t t_len = strlen(t);
        m->name = malloc(sizeof(char) * (t_len + 1));
        for (size_t i = 0; i < t_len; i++)
        {
            m->name[i] = t[i];
        }
        m->name[t_len + 1] = '\0';
        m->name = t;
        m->tickets_sold = sold;
        m->tickets_left = 100 - sold;
    }
    return m;
}

size_t get_sold(movie *m)
{
    return m->tickets_sold;
}

size_t get_left(movie *m)
{
    return m->tickets_left;
}

size_t get_sold(movie *m)
{
    return m->tickets_sold;
}


void movie_destroy(movie *m)
{
    free(m->name);
    free(m);
}