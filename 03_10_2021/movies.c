#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "movies.h"

struct movie
{
    char *name;
    size_t tickets_sold;
    size_t tickets_left;
};

movie *movie_create(char *t)
{
    movie *m = malloc(sizeof(movie));
    size_t sold = ((long)m % 100);
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

void movie_print(movie *m)
{
    if (m == NULL)
    {
        fprintf(stderr, "INVALID MOVIE TO PRINT\n");
    }
    fprintf(stdout, "TITLE: %60s\t\t", m->name);
    fprintf(stdout, "TICKETS SOLD: %lu\t\t", m->tickets_sold);
    fprintf(stdout, "TICKETS LEFT: %lu\n", m->tickets_left);
}

size_t get_sold(movie *m)
{
    if (m == NULL)
    {
        return 0;
    }
    return m->tickets_sold;
}

size_t get_left(movie *m)
{
    if (m == NULL)
    {
        return 0;
    }
    return m->tickets_left;
}

char *get_name(movie *m)
{
    if (m == NULL)
    {
        return NULL;
    }
    return m->name;
}

void movie_destroy(movie *m)
{
    free(m->name);
    free(m);
}