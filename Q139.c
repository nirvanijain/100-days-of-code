//Show that enums store integers by printing assigned values.
#include <stdio.h>

// Define an enumeration for days of the week
enum Day {
    SUNDAY,    // Default value 0
    MONDAY,    // Default value 1
    TUESDAY,   // Default value 2
    WEDNESDAY, // Default value 3
    THURSDAY,  // Default value 4
    FRIDAY,    // Default value 5
    SATURDAY   // Default value 6
};

// Define another enumeration with explicitly assigned values
enum Month {
    JANUARY = 1,
    FEBRUARY,  // Automatically assigned 2
    MARCH = 5,
    APRIL,     // Automatically assigned 6
    MAY = 10
};

int main() {
    printf("--- Default Enum Values (Day) ---\n");
    printf("SUNDAY: %d\n", SUNDAY);
    printf("MONDAY: %d\n", MONDAY);
    printf("TUESDAY: %d\n", TUESDAY);
    printf("WEDNESDAY: %d\n", WEDNESDAY);
    printf("THURSDAY: %d\n", THURSDAY);
    printf("FRIDAY: %d\n", FRIDAY);
    printf("SATURDAY: %d\n", SATURDAY);

    printf("\n--- Explicitly Assigned Enum Values (Month) ---\n");
    printf("JANUARY: %d\n", JANUARY);
    printf("FEBRUARY: %d\n", FEBRUARY);
    printf("MARCH: %d\n", MARCH);
    printf("APRIL: %d\n", APRIL);
    printf("MAY: %d\n", MAY);

    return 0;
}
