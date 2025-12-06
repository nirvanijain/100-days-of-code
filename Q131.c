//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>

// Create an enumeration for days of the week
enum Day {
    SUNDAY,    // Default value is 0
    MONDAY,    // Default value is 1
    TUESDAY,   // Default value is 2
    WEDNESDAY, // Default value is 3
    THURSDAY,  // Default value is 4
    FRIDAY,    // Default value is 5
    SATURDAY   // Default value is 6
};

int main() {
    // Array of strings to store day names for printing
    const char* dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    // Iterate through the enumeration and print each day and its integer value
    for (enum Day day = SUNDAY; day <= SATURDAY; day++) {
        printf("%s has integer value: %d\n", dayNames[day], day);
    }

    return 0;
}
