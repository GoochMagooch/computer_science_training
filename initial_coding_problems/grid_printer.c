#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *matrix[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            char input[10] = "";
            sprintf(input, "Row%dCol%d", (i+1), (j+1));
            // matrix[i][j] = input;
            matrix[i][j] = input;
            // printf("%s\n", matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%s ", matrix[i][j]);
        }
        printf("\n");
    }

}
