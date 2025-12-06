//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <stdlib.h> // For exit()
#include <ctype.h>  // For isspace()

int main() {
    FILE *file;
    char path[100];
    int ch; // Use int for fgetc() return value to properly handle EOF
    int characters = 0;
    int words = 0;
    int lines = 0;
    int in_word = 0; // Flag to track if currently inside a word

    // Prompt user for file path
    printf("Enter the path to the text file: ");
    scanf("%s", path);

    // Open the file in read mode
    file = fopen(path, "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error: Unable to open file \"%s\".\n", path);
        exit(EXIT_FAILURE); // Exit the program if file cannot be opened
    }

    // Process the file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++; // Increment character count for every character read

        // Check for new line
        if (ch == '\n') {
            lines++;
        }

        // Check for words
        if (isspace(ch)) {
            in_word = 0; // Reset in_word flag if a space character is encountered
        } else if (in_word == 0) {
            words++;     // Increment word count if a non-space character is encountered after a space
            in_word = 1; // Set in_word flag to indicate being inside a word
        }
    }

    // Adjust lines and words for files that are not empty and don't end with a newline
    // If the file contains characters but doesn't end with a newline, the last line isn't counted by '\n'
    // and the last word isn't counted if it's followed by EOF directly without a space.
    if (characters > 0 && ch == EOF) {
        if (in_word == 1) { // If the file ends with a word
            // words is already incremented when the last word started
        } else { // If the file ends with whitespace and there was a word before
            // No adjustment needed for words here based on current logic
        }
        if (lines == 0 && characters > 0) { // If there are characters but no newlines, it's one line
            lines = 1;
        } else if (characters > 0 && lines > 0 && fseek(file, -1, SEEK_END) == 0 && fgetc(file) != '\n') {
            // If the file has lines and characters, and the last char isn't a newline, increment lines.
            // This is a more robust check for files not ending with a newline.
            lines++;
        }
    }


    // Print the results
    printf("\nFile Statistics for \"%s\":\n", path);
    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    // Close the file
    fclose(file);

    return 0;
}
