//Find the digit that occurs the most times in an integer number
#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle negative numbers by taking the absolute value
    if (number < 0) {
        number = -number;
    }

    // Handle the case of 0 separately, as the loop won't run for it
    if (number == 0) {
        printf("The most frequent digit is: 0\n");
        return 0;
    }

    int digit_counts[10] = {0}; // Initialize all counts to 0

    // Extract digits and count their occurrences
    while (number > 0) {
        int digit = number % 10;
        digit_counts[digit]++;
        number /= 10;
    }

    int max_frequency = INT_MIN;
    int most_frequent_digit = -1;

    // Find the digit with the maximum frequency
    for (int i = 0; i < 10; i++) {
        if (digit_counts[i] > max_frequency) {
            max_frequency = digit_counts[i];
            most_frequent_digit = i;
        }
    }

    printf("The most frequent digit is: %d\n", most_frequent_digit);

    return 0;
}
