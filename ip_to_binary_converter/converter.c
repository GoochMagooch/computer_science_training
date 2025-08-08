#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int bits[8] = {1, 2, 4, 8, 16, 32, 64, 132}; // Array of bits to run against octets

    // Requests user input and stores inputs in array of ints
    int ip[4];
    for (int i = 0; i < 4; i++) {
        int octet;
        printf("Enter octet %d: ", (i+1));
        scanf("%d", &octet);
        if (octet > 255) {
            printf("Error: octet must be between 0 and 255\n");
            return 0;
        } else {
            ip[i] = octet;
        }
    }

    // Outputs user inputs formatted as 8 bit IP address
    int length = sizeof(ip) / sizeof(ip[0]);
    for (int i = 0; i < length; i++) {
        if (i == length - 1) {
            printf("%d\n", ip[i]);
        } else {
            printf("%d.", ip[i]);
        }
    }

    // Converts user IP address to binary


    return 0;
}
