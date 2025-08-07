#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // Initialize empty 2D array and set row/column length for future iteration
    char *matrix[3][4];
    int row_length = sizeof(matrix) / sizeof(matrix[0]);
    int col_length = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    // Populate empty 2D array with a string of the Row & Column
    for (int i = 0; i < row_length; i++) {
        for (int j = 0; j < col_length; j++) {
            char input[10];
            sprintf(input, "Row%dCol%d", (i+1), (j+1));
            matrix[i][j] = strdup(input);
        }
    }

    // Print each cell of matrix as formatted string
    for (int i = 0; i < row_length; i++) {
        for (int j = 0; j < col_length; j++) {
            if (j == col_length - 1) {
                printf("%s\n", matrix[i][j]);
            } else {
                printf("%s, ", matrix[i][j]);
            }
        }
    }

    // Free up extra allocated memory
    for (int i = 0; i < row_length; i++) {
        for (int j = 0; j < col_length; j++) {
            free(matrix[i][j]);
        }
    }

    return 0;
}
