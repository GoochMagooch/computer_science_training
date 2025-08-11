#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocates enough memory for 2 integers at sizeof(int) bytes each and initializes them to 0
    int *arr = calloc(2, sizeof(int));
    if (arr == NULL) return 1; // Return 1 if the memory isn't available

    // Replaces both values of 0 with 1 and 2, respectively
    arr[0] = 1;
    arr[1] = 2;

    // Resize arr to hold 4 integers, each at the size of sizeof(int), set to uninitialized
    arr = realloc(arr, 4 * sizeof(int));
    if (arr == NULL) // Return 1 if 8 extra bytes aren't available

    // Assign 3 and 4 to the third and fourth spaces of arr
    arr[2] = 3;
    arr[3] = 4;

    // Allocates memory for 3 integers, at the size of sizeof(int) and sets them to uninitialized
    int *extra = malloc(3 * sizeof(int));
    if (extra == NULL) return 1; // Return 1 if 12 bytes of memory aren't available

    // Assign 3 values to extra
    extra[0] = 10;
    extra[1] = 20;
    extra[2] = 30;

    printf("Main array: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
    printf("Extra array: %d %d %d\n", extra[0], extra[1], extra[2]);

    free(arr);
    free(extra);

    return 0;
}