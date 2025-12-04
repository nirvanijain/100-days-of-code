//Write a program to print the following pattern
#include <stdio.h>

int main() {
    int i, j, k, n = 5;

    for (i = n; i >= 1; i--) {
        // Print spaces
        for (k = 1; k < i; k++) {
            printf(" ");
        }
        // Print numbers
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}