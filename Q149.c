//Use malloc() to allocate structure memory dynamically and print details
#include <stdio.h>
#include <stdlib.h> // Required for malloc() and free()

// Define a structure
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a pointer to the Person structure
    struct Person *personPtr;

    // Allocate memory dynamically for one Person structure using malloc()
    personPtr = (struct Person *)malloc(sizeof(struct Person));

    // Check if memory allocation was successful
    if (personPtr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Indicate an error
    }

    // Assign values to the members of the dynamically allocated structure
    printf("Enter name: ");
    scanf("%s", personPtr->name); // Use -> for pointer to structure members

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter height (in meters): ");
    scanf("%f", &personPtr->height);

    // Print the details of the dynamically allocated structure
    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);
    printf("Height: %.2f m\n", personPtr->height);

    // Free the dynamically allocated memory to prevent memory leaks
    free(personPtr);
    personPtr = NULL; // Set the pointer to NULL after freeing

    return 0; // Indicate successful execution
}
