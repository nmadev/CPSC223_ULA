#include <stdio.h>
#include <stdlib.h>

int max_consecutive_ones(int *arr, int size) {
    int max_ones = 0;
    int curr_ones = 0;
    int i = 0;
    while (i < size) {
        if (arr[i] == 1) {
            curr_ones += 1;
        }
        else {
            if (curr_ones > max_ones) {
                max_ones = curr_ones;
            }
            curr_ones = 0;
        }
        i += 1;
        
    }
    if (curr_ones > max_ones) {
        return curr_ones;
    }
    else {
        return max_ones;
    }
    
}

int main(int argc, char **argv) {
    fprintf(stdout, "%s\n", argv[1]);
    int arr[] = {1, 1, 0, 1, 1, 1};
    int size = 6;
    int max_ones = max_consecutive_ones(arr, size);
    printf("%i\n", max_ones);
    return 0;
}

// Credit: Shayna Sragovicz 2021
