//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt
#include <stdio.h>
#include <ctype.h> // For the toupper() function

int main() {
    FILE *inputFile;
    FILE *outputFile;
    int character;

    // Open input.txt for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
        return 1; // Indicate an error
    }

    // Open output.txt for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not open output.txt for writing.\n");
        fclose(inputFile); // Close the input file before exiting
        return 1; // Indicate an error
    }

    // Read character by character from input.txt
    while ((character = fgetc(inputFile)) != EOF) {
        // Convert lowercase to uppercase using toupper()
        // toupper() returns the uppercase equivalent if the character is lowercase,
        // otherwise it returns the character unchanged.
        fputc(toupper(character), outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("Text successfully converted to uppercase and written to output.txt.\n");

    return 0; // Indicate successful execution
}
