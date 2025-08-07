#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int ip[4];
    for (int i = 0; i < 4; i++) {
        printf("Enter octet %d: ", (i+1));
        scanf("%d", &ip[i]);
    }

    int length = sizeof(ip) / sizeof(ip[0]);
    for (int i = 0; i < length; i++) {
        if (i == length - 1) {
            printf("%d\n", ip[i]);
        } else {
            printf("%d.", ip[i]);
        }
    }
    return 0;
}