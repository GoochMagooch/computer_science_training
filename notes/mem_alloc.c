#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *arr = malloc(2 * sizeof(int));
    if (arr == NULL) return 1;

    arr[0] = 1;
    arr[1] = 2;

    arr = realloc(arr, 4 * sizeof(int));
    if (arr == NULL) return 1;

    arr[2] = 3;
    arr[3] = 4;

    for (int i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}