//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    int ch; // Use int to store the character read by fgetc() to accommodate EOF

    // Get source file name from the user
    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    // Open source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file '%s'.\n", sourceFileName);
        exit(EXIT_FAILURE); // Exit the program if source file cannot be opened
    }

    // Get destination file name from the user
    printf("Enter the destination file name: ");
    scanf("%s", destFileName);

    // Open destination file in write mode
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file '%s'.\n", destFileName);
        fclose(sourceFile); // Close the source file before exiting
        exit(EXIT_FAILURE); // Exit the program if destination file cannot be opened
    }

    // Copy contents character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully from '%s' to '%s'.\n", sourceFileName, destFileName);

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
