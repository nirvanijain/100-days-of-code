//Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *fptr;
    char name[50];
    int age;

    // Open the file in write mode ("w")
    fptr = fopen("info.txt", "w");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1); // Exit the program if file cannot be opened
    }

    // Get user input for name and age
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read name including spaces
    // Remove trailing newline character from name, if present
    name[strcspn(name, "\n")] = 0; 

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write name and age to the file using fprintf()
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Age: %d\n", age);

    // Close the file
    fclose(fptr);

    printf("Data successfully saved to info.txt.\n");

    return 0;
}
