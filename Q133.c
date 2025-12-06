//Create an enum for months and print how many days each month has
#include <stdio.h>

// Create an enum for months
enum Month {
    JANUARY = 1, // Assign 1 to JANUARY so other months follow sequentially
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    // Loop through each month and print its days
    for (enum Month m = JANUARY; m <= DECEMBER; m++) {
        switch (m) {
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                printf("%d days in %d\n", 31, m);
                break;
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("%d days in %d\n", 30, m);
                break;
            case FEBRUARY:
                printf("%d days in %d (assuming a non-leap year)\n", 28, m);
                break;
            default:
                printf("Invalid month\n");
                break;
        }
    }

    return 0;
}
