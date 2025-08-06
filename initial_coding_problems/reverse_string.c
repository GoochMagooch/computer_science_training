#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char reversed_string[10];
    char username[10];
    printf("Enter your name: ");
    scanf("%s", username);
    int index = strlen(username) - 1;
    for (int i = 0; i < strlen(username); i++) {
        reversed_string[i] = username[index - i];
    }
    printf("Your name is: %s\n", reversed_string);
    return 0;
}
