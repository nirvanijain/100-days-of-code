//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached
#include <stdio.h>
#include <stdlib.h> // Required for exit()

int main() {
    FILE *file_ptr;
    char buffer[256]; // Buffer to store each line read from the file
    const char *filename = "info.txt";

    // Open the file in read mode ("r")
    file_ptr = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file_ptr == NULL) {
        perror("Error opening file"); // Print a system-defined error message
        exit(EXIT_FAILURE); // Exit the program with an error status
    }

    printf("Contents of %s:\n", filename);

    // Read lines from the file until fgets() returns NULL (end of file or error)
    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s", buffer); // Print the line read to the console
    }

    // Close the file
    fclose(file_ptr);

    return 0; // Indicate successful execution
}
