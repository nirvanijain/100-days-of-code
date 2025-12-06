//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters
#include <stdio.h>
#include <ctype.h> // For isalpha() and tolower()

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int vowels = 0;
    int consonants = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1; // Indicate an error
    }

    // Read character by character until the end of the file
    while ((ch = fgetc(file)) != EOF) {
        // Convert character to lowercase for easier comparison
        ch = tolower(ch);

        // Check if the character is an alphabet
        if (isalpha(ch)) {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                // If it's an alphabet and not a vowel, it's a consonant
                consonants++;
            }
        }
        // Digits and special characters are ignored by not being processed
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0; // Indicate successful execution
}
