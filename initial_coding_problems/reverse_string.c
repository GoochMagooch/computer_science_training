#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // char reversed_string[] = {'/0'};
    char username[10];
    printf("Enter your name: ");
    scanf("%s", username);
    for (int i = 0; i < strlen(username); i++) {
        printf("%c\n", username[i]);
    }
    // int length = sizeof(username) / sizeof(username[0]);
    // printf(length);

    
    return 0;
}
