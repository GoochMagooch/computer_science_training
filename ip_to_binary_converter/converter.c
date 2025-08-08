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
    char user_ip[15];
    int length = sizeof(ip) / sizeof(ip[0]);
    for (int i = 0; i < length; i++) {
        if (i == length - 1) {
            sprintf(user_ip, "%d\n", ip[i]);
        } else {
            sprintf(user_ip, "%d.", ip[i]);
        }
    }

    // Converts user IP address to binary
    char binary[35];
    int iterations = sizeof(bits) / sizeof(bits[0]);

    for (int i = 0; i < length; i++) {
        int temp_bit = ip[i];
        char temp[8];
        for (int j = 0; j < iterations; j++) {
            if (temp_bit - bits[j] >= 0) {
                sprintf(temp, "1"); // append 1 to temp
                temp_bit = temp_bit - bits[j]; // update temp_bit with temp_bit - bits[j]
            } else { // figure out how to append characters to strings
                sprintf(temp, "0"); // append 0 to temp
            }
            if (i == iterations - 1) {
                sprintf(binary, "%s", temp);
            } else {
                sprintf(binary, "%s.", temp);
            }
        }
    }

    printf("IPv4 address: \n%s\n", user_ip);
    printf("Binary representation of IPv4: \n%s\n", binary);
    return 0;
}
