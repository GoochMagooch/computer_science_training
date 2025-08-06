#include <stdio.h>
#include <stdlib.h>

int main() {
    int input_array[5]; // Stores user input

    for (int i = 0; i < 5; i++) {
        printf("Enter a number: ");
        scanf("%d", &input_array[i]);
    }

    int iterator = 0;

    int array_length = sizeof(input_array) / sizeof(input_array[0]);
    for (int i = 0; i < array_length; i++) {
        if (input_array[i] > 50) {
            iterator += 1;
        }
    }
    
    int over_50_iterator = 0;
    int over_50_array[iterator];
    for (int i = 0; i < array_length; i++) {
        if (input_array[i] > 50) {
            over_50_array[over_50_iterator] = input_array[i];
            over_50_iterator += 1;
        }
    }

    puts("The numbers you chose that are over 50 are: ");
    for (int i = 0; i < iterator; i++) {
        printf("%d\n", over_50_array[i]);
    }

}
