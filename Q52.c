//Write a program to print the following pattern
#include <stdio.h>

int main() {
    int n, i, j;
    int blockSize = 1;   // first block has size 1
    int line = 1;        // track line number
    int toggle = 1;      // 1 = print stars, 0 = print blanks

    printf("Enter number of lines: ");
    scanf("%d", &n);

    while (line <= n) {
        for (i = 1; i <= blockSize && line <= n; i++, line++) {
            if (toggle == 1)
                printf("*\n");
            else
                printf("\n");
        }
        blockSize += 2;    // increase block size by odd number
        toggle = 1 - toggle; // switch between stars and blanks
    }

    return 0;
}