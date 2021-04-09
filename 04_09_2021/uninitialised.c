#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void uninitialised_1() {
    char *hello = malloc(sizeof(char) * 6);
    char *string = "hello";
    for (int i = 0; i < 5; i++) {
        hello[i] = string[i];
    }
    char *tocopy = malloc(sizeof(char) * 6);
    strncpy(tocopy, hello, 6);
}

void uninitialised_2() {
    char *hello = malloc(sizeof(char) * 6);
    char *string = "hello";
    for (int i = 0; i < 5; i++) {
        hello[i] = string[i];
    }
    char *tocopy = malloc(sizeof(char) * 6);
    strncpy(tocopy, hello, 5);
    printf("%s\n", tocopy);
}

void uninitialised_3() {
    char *hello = malloc(sizeof(char) * 6);
    char *string = "hello";
    for (int i = 0; i < 5; i++) {
        hello[i] = string[i];
    }
    hello[5] = '\0';
    char *tocopy = malloc(sizeof(char) * 6);
    strncpy(tocopy, hello, 5);
    printf("%s\n", tocopy);
}

int main() {
    
    // TIP: uncomment each function one at a time to solve errors as they come
    // uninitialised_1();
    // uninitialised_2();
    // uninitialised_3();

}