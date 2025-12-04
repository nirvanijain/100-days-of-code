//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three integers: ");

    // Read the three numbers from the user
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check if num1 is the largest
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } 
    // Check if num2 is the largest
    else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } 
    // If neither num1 nor num2 is the largest, then num3 must be
    else {
        printf("The largest number is: %d\n", num3);
    }

    return 0; // Indicate successful program execution
}
