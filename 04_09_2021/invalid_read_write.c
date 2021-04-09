#include <stdio.h>
#include <stdlib.h>

void invalid_read() {
    char *word = "hello";
    char *toprint = malloc(sizeof(char) * 5);
    for (int i = 0; i < 5; i++) {
        toprint[i] = word[i];
    }
    printf("%s\n", toprint);
}

void invalid_write() {
    char *word = "hello";
    char *toprint = malloc(sizeof(char) * 3);
    for (int i = 0; i < 5; i++) {
        toprint[i] = word[i];
    }
}

int main() {
    // TIP: uncomment each function one at a time to solve errors as they come
    // invalid_read();
    // invalid_write();

}