//Write a program to print the following pattern
#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = n; i >= 1; i--) {
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}