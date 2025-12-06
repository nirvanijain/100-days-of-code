//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

// Define an enum for user roles
enum UserRole {
    ADMIN,  // Default value 0
    USER,   // Default value 1
    GUEST   // Default value 2
};

int main() {
    // Declare a variable of type UserRole
    enum UserRole currentUserRole;

    // Assign a role to the current user
    currentUserRole = ADMIN; // You can change this to USER or GUEST to test different roles

    // Display messages based on the assigned role
    switch (currentUserRole) {
        case ADMIN:
            printf("Welcome, Administrator! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have standard access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have limited access.\n");
            break;
        default:
            printf("Unknown user role.\n");
            break;
    }

    // You can also demonstrate the integer values of enum members
    printf("\nInternal integer values of roles:\n");
    printf("ADMIN: %d\n", ADMIN);
    printf("USER: %d\n", USER);
    printf("GUEST: %d\n", GUEST);

    return 0;
}
