//Assign explicit values starting from 10 and print them.
#include <stdio.h>

/*
 * This program demonstrates how to assign explicit integer values
 * to enum constants and print them.
 * By default, if the first enumerator is not initialized, its value is 0.
 * If a value is explicitly set, subsequent enumerators will increment from that value.
 */
enum Weekday {
    SUNDAY = 10,  // Explicitly assign 10 to SUNDAY
    MONDAY,       // Auto-assigned 11 (10 + 1)
    TUESDAY,      // Auto-assigned 12
    WEDNESDAY = 15, // Explicitly assign 15 to WEDNESDAY
    THURSDAY,     // Auto-assigned 16 (15 + 1)
    FRIDAY,       // Auto-assigned 17
    SATURDAY      // Auto-assigned 18
};

int main() {
    printf("Printing explicitly assigned enum values:\n");
    
    // Print each enum value. Enums are stored as integers.
    printf("SUNDAY:    %d\n", SUNDAY);
    printf("MONDAY:    %d\n", MONDAY);
    printf("TUESDAY:   %d\n", TUESDAY);
    printf("WEDNESDAY: %d\n", WEDNESDAY);
    printf("THURSDAY:  %d\n", THURSDAY);
    printf("FRIDAY:    %d\n", FRIDAY);
    printf("SATURDAY:  %d\n", SATURDAY);

    return 0;
}
