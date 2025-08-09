#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int bits[8] = {128, 64, 32, 16, 8, 4, 2, 1}; // Array of bits to run against octets

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
    printf("IPv4 address: ");
    char user_ip[15];
    int length = sizeof(ip) / sizeof(ip[0]);
    for (int i = 0; i < length; i++) {
        if (i == length - 1) {
            printf("%d", ip[i]);
        } else {
            printf("%d.", ip[i]);
        }
    }

    // Converts user IP address to binary
    printf("\nBinary representation of IPv4: ");
    int iterations = sizeof(bits) / sizeof(bits[0]);

    for (int i = 0; i < length; i++) {
        int temp_bit = ip[i];
        int binary[8];
        for (int j = 0; j < iterations; j++) {
            if (temp_bit - bits[j] >= 0) {
                binary[j] = 1; // append 1 to temp
                temp_bit = temp_bit - bits[j]; // update temp_bit with temp_bit - bits[j]
            } else { // figure out how to append characters to strings
                binary[j] = 0; // append 0 to temp
            }
        }
        if (i == length - 1) {
            for (int x = 0; x < iterations; x++) {
                if (x == iterations - 1) {
                    printf("%d\n", binary[x]);
                } else {
                    printf("%d", binary[x]);
                }
            }
        } else {
            for (int y = 0; y < iterations; y++) {
                if (y == iterations - 1) {
                    printf("%d.", binary[y]);
                } else {
                    printf("%d", binary[y]);
                }
            }
        }
    }
    return 0;
}
