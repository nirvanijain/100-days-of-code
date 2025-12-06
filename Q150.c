//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#include <string.h> // Required for strcpy

// Define a structure named 'Person'
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare and initialize a structure variable
    struct Person person1 = {"Alice", 30, 5.7};

    // Declare a pointer to the 'Person' structure and initialize it
    // to point to 'person1'
    struct Person *personPtr = &person1;

    // Display original values using the pointer and -> operator
    printf("Original Data:\n");
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);
    printf("Height: %.2f\n", personPtr->height);

    // Modify structure members using the pointer and -> operator
    strcpy(personPtr->name, "Bob"); // Modify the name
    personPtr->age = 35;             // Modify the age
    personPtr->height = 6.1;         // Modify the height

    // Display modified values using the pointer and -> operator
    printf("\nModified Data:\n");
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);
    printf("Height: %.2f\n", personPtr->height);

    return 0;
}
