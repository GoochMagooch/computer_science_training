#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Requests user input and store in 'username'
    char username[10];
    printf("Enter your name: ");
    scanf("%s", username);

    char reversed_string[10]; // initialize empty string for future reversed string
    int index = strlen(username) - 1; // Set index as length of username - 1

    // Populate reversed_string with reversed version of username
    for (int i = 0; i < strlen(username); i++) {
        reversed_string[i] = username[index - i];
    }

    printf("Your name is: %s\n", reversed_string);
    return 0;
}
