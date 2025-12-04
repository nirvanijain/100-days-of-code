//Write a program to find the LCM of two numbers
#include <stdio.h>

int main() {
    int num1, num2, max, lcm = 1;

    // Prompt user to enter two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Find the larger of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Start checking from 'max' to find the LCM
    // The loop continues indefinitely until an LCM is found
    while (1) {
        // Check if 'max' is divisible by both num1 and num2
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max; // If divisible, 'max' is the LCM
            break;     // Exit the loop
        }
        // If not divisible, increment 'max' by itself to check the next possible multiple
        max += max; 
    }

    // Print the calculated LCM
    printf("The LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
