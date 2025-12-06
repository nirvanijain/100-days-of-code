//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>
#include <stdlib.h> // Required for exit()

int main() {
    char filename[100]; // Buffer to store the filename
    FILE *filePointer; // Pointer to the file

    // Ask the user for the filename
    printf("Enter the name of the file: ");
    scanf("%s", filename); // Read the filename from user input

    // Attempt to open the file in read mode ("r")
    filePointer = fopen(filename, "r");

    // Check if the file pointer is NULL, indicating an error
    if (filePointer == NULL) {
        printf("Error: Could not open file '%s'. It may not exist or there are permission issues.\n", filename);
    } else {
        // File opened successfully, read and display its content
        printf("Content of '%s':\n", filename);
        int character;
        while ((character = fgetc(filePointer)) != EOF) {
            putchar(character); // Print each character to the console
        }
        printf("\n"); // Add a newline for better formatting after content

        // Close the file
        fclose(filePointer);
    }

    return 0; // Indicate successful execution
}
