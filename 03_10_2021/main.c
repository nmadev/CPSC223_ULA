#include <stdio.h>
#include <stdlib.h>

#include "movies.h"
#include "movie_theater.h"

int main(void) {
    int num_movies = 100;
    // list of movies
    char *movie_names[num_movies] = {"Harry Potter and the Sorcerer's Stone", "Harry Potter and the Chamber of Secrets"}
    movie **list_of_movies = malloc(sizeof(movie *) * num_movies);
    // for every movie in list of movies
    for (size_t i = 0; i < num_movies; i++) {
        // create movie struct
        movie *m = create_movie(movie_names[i]);
        // add movie struct to list of movies
        list_of_movies[i] = m;
    }
    
    // get total tickets sold O(n)
    // WHAT WE HAVE
    size_t total_sold = 0;
    for (int i = 0; i < num_movies; i++) {
        size_t tickets_sold = list_of_movies[i].tickets_sold;
        total_sold += tickets_sold;
    }
    printf("Total tickets sold: %li\n", total_sold);

    // WHAT WE WANT
    // printf("Total tickets sold: %li\n", get_total_tickets(mt));
}