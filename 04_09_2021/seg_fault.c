#include <stdio.h>
#include <stdlib.h>

int *seg_fault1() {
    int *null_pointer = NULL;
    *null_pointer = 6;
}

int *seg_fault2_helper() {
    int *helper;
    return helper;
}

void seg_fault2() {
    int *helper = seg_fault2_helper();
    *helper = 5;
}

void seg_fault3() {
    int *c = malloc(sizeof(int) * 800000000000);
    *c = 4;
}


int main() {
    // seg_fault1();
    // seg_fault2();
    // seg_fault3();
}