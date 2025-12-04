//Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h> // Required for strlen()

void replaceSpacesWithHyphens(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) { // Loop until the null terminator is reached
        if (str[i] == ' ') { // Check if the current character is a space
            str[i] = '-';    // Replace space with a hyphen
        }
    }
}

int main() {
    char myString[] = "This is a string with spaces"; // Example string

    printf("Original string: %s\n", myString);

    replaceSpacesWithHyphens(myString); // Call the function to modify the string

    printf("Modified string: %s\n", myString);

    return 0;
}
