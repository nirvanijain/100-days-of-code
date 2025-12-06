//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

// Define an enum named 'Status' with members SUCCESS, FAILURE, and TIMEOUT.
// The default integer values are 0, 1, and 2, respectively.
typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

// A function to get the string representation of an enum value.
// Enums in C are stored as integers, not strings, so a mapping is required.
const char* get_status_message(Status status) {
    switch (status) {
        case SUCCESS:
            return "Operation successful.";
        case FAILURE:
            return "Operation failed.";
        case TIMEOUT:
            return "Operation timed out.";
        default:
            return "Unknown status.";
    }
}

int main() {
    // Declare a variable of type 'Status' and assign it a value.
    Status current_status = SUCCESS;

    // Print a message based on the enum value.
    printf("Current status is: %s\n", get_status_message(current_status));

    // Change the status and print a different message.
    current_status = TIMEOUT;
    printf("New status is: %s\n", get_status_message(current_status));

    return 0;
}
