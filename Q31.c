//Write a program to take a number as input and print its equivalent binary representation
#include <stdio.h>

int main() {
    int decimalNumber;
    int binaryArray[32]; // Array to store binary digits (sufficient for a 32-bit integer)
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Handle the special case of 0
    if (decimalNumber == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // Convert decimal to binary using repeated division by 2
    int tempNumber = decimalNumber;
    while (tempNumber > 0) {
        binaryArray[i] = tempNumber % 2; // Store the remainder
        tempNumber /= 2;                // Divide by 2
        i++;
    }

    printf("Binary equivalent: ");
    // Print the binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryArray[j]);
    }
    printf("\n");

    return 0;
}
