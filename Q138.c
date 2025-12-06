//Print all enum names and integer values using a loop.
#include <stdio.h>

// Define an enumeration
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

// Create an array of strings to hold the names corresponding to the enum values
const char* DayNames[] = {
    "SUNDAY",
    "MONDAY",
    "TUESDAY",
    "WEDNESDAY",
    "THURSDAY",
    "FRIDAY",
    "SATURDAY"
};

int main() {
    printf("Enum Day members and their values:\n");

    // Loop through the integer values of the enum
    // We can use the last enum member as a sentinel for the loop limit
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        // Print the enum name (from the DayNames array) and its integer value
        printf("Name: %s, Value: %d\n", DayNames[i], i);
    }

    return 0;
}
