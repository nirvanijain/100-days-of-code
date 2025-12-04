//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria
#include <stdio.h>

int main() {
    int percentage;

    // Prompt the user to enter the percentage
    printf("Enter the percentage (0-100): ");
    scanf("%d", &percentage);

    // Validate the input to ensure it's within the 0-100 range
    if (percentage < 0 || percentage > 100) {
        printf("Invalid input: Percentage must be between 0 and 100.\n");
    } else {
        // Assign the grade based on the criteria
        if (percentage >= 90) {
            printf("Grade: A\n");
        } else if (percentage >= 80) {
            printf("Grade: B\n");
        } else if (percentage >= 70) {
            printf("Grade: C\n");
        } else if (percentage >= 60) {
            printf("Grade: D\n");
        } else {
            printf("Grade: F\n");
        }
    }

    return 0;
}
