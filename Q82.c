//Print each character of a string on a new line
#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the string
    int i = 0;     // Initialize a counter variable

    printf("Enter a string: ");
    scanf("%s", str); // Read the string from the user

    printf("Individual characters on new lines:\n");

    // Loop through the string until the null terminator ('\0') is encountered
    while (str[i] != '\0') {
        printf("%c\n", str[i]); // Print the current character followed by a newline
        i++;                    // Increment the counter
    }

    return 0;
}
