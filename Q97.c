//Print the initials of a name
#include <stdio.h>
#include <string.h>
#include <ctype.h> // For toupper() and isspace()

void printInitials(char* name) {
    int i = 0;

    // Print the initial of the first word
    if (strlen(name) > 0 && isalpha(name[0])) {
        printf("%c", toupper(name[0]));
    }

    // Iterate through the rest of the string to find initials of subsequent words
    while (name[i] != '\0') {
        if (isspace(name[i])) {
            // Skip multiple spaces
            while (isspace(name[i]) && name[i] != '\0') {
                i++;
            }
            // If not at the end of the string and the character is an alphabet, print its uppercase
            if (name[i] != '\0' && isalpha(name[i])) {
                printf(".%c", toupper(name[i]));
            }
        }
        i++;
    }
    printf("\n");
}

int main() {
    char name[100]; // Assuming name won't exceed 99 characters

    printf("Enter a full name: ");
    // Use fgets to safely read input, preventing buffer overflow
    fgets(name, sizeof(name), stdin);

    // Remove the trailing newline character if present from fgets
    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");
    printInitials(name);

    return 0;
}
