//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content
#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *filePointer;
    char fileName[100];
    char textToAppend[256]; // Buffer to store the user's input

    // Get the file name from the user
    printf("Enter the name of the file to open (e.g., mydata.txt): ");
    scanf("%s", fileName);

    // Open the file in append mode ("a")
    // If the file does not exist, it will be created.
    // If the file exists, the new data will be written at the end.
    filePointer = fopen(fileName, "a");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error opening file '%s'. It might not exist or there are permission issues.\n", fileName);
        exit(EXIT_FAILURE); // Exit the program with an error code
    }

    // Clear the input buffer after scanf
    while (getchar() != '\n'); 

    // Get the line of text from the user
    printf("Enter the line of text to append: ");
    fgets(textToAppend, sizeof(textToAppend), stdin);

    // Write the new line of text to the file
    // fprintf writes formatted output to a stream
    // The textToAppend already includes a newline character from fgets,
    // so no extra '\n' is needed here unless you want an additional blank line.
    fprintf(filePointer, "%s", textToAppend);

    // Close the file
    fclose(filePointer);

    printf("Text appended successfully to '%s'.\n", fileName);

    return 0; // Indicate successful execution
}
