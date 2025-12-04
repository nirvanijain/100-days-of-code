//Write a program to find the 1’s complement of a binary number and print it
#include <stdio.h>
#include <string.h>

int main() {
    char binaryNumber[100]; // To store the input binary number
    char onesComplement[100]; // To store the calculated 1's complement
    int i, length;

    printf("Enter a binary number: ");
    scanf("%s", binaryNumber);

    length = strlen(binaryNumber);

    // Iterate through the binary number and find its 1's complement
    for (i = 0; i < length; i++) {
        if (binaryNumber[i] == '0') {
            onesComplement[i] = '1';
        } else if (binaryNumber[i] == '1') {
            onesComplement[i] = '0';
        } else {
            printf("Error: Invalid binary digit entered.\n");
            return 1; // Exit with an error code
        }
    }

    onesComplement[length] = '\0'; // Null-terminate the complement string

    printf("Original binary number: %s\n", binaryNumber);
    printf("1's complement: %s\n", onesComplement);

    return 0; // Indicate successful execution
}
