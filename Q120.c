//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <string.h>
#include <ctype.h> // For islower(), toupper(), tolower()

int main() {
    char str[1000]; // Declare a character array to store the string
    int i;
    int newSentence = 1; // Flag to indicate the start of a new sentence

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string, including spaces

    // Remove the trailing newline character if present
    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (newSentence && islower(str[i])) {
            str[i] = toupper(str[i]); // Capitalize the first letter of a new sentence
            newSentence = 0;
        } else if (!newSentence && isupper(str[i])) {
            str[i] = tolower(str[i]); // Convert subsequent letters to lowercase
        }

        // Check for sentence endings (period, exclamation mark, question mark)
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            newSentence = 1; // Set flag for a new sentence
        }
    }

    printf("Sentence case string: %s\n", str);

    return 0;
}
