#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // Populate empty 2D array with a string of the Row & Column
    char *matrix[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            char input[10];
            sprintf(input, "Row%dCol%d", (i+1), (j+1));
            matrix[i][j] = strdup(input);
        }
    }

    // Print each cell of matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == 3) {
                printf("%s\n", matrix[i][j]);
            } else {
                printf("%s, ", matrix[i][j]);
            }
        }
    }

    // Free up extra allocated memory

}
