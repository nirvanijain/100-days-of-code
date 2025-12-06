//Define a struct with enum Gender and print person's gender
#include <stdio.h>
#include <string.h> // Required for strcpy

// Define an enumeration for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define a struct for a Person
struct Person {
    char name[50];
    int age;
    enum Gender gender; // Member of type enum Gender
};

int main() {
    // Create a Person variable
    struct Person person1;

    // Assign values to person1's members
    strcpy(person1.name, "Alice");
    person1.age = 30;
    person1.gender = FEMALE; // Assign an enum value

    // Print the person's information, including gender
    printf("Person Name: %s\n", person1.name);
    printf("Person Age: %d\n", person1.age);

    // Use a switch statement to print the gender string based on the enum value
    printf("Person Gender: ");
    switch (person1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    // Create another Person variable
    struct Person person2;
    strcpy(person2.name, "Bob");
    person2.age = 25;
    person2.gender = MALE;

    printf("\nPerson Name: %s\n", person2.name);
    printf("Person Age: %d\n", person2.age);
    printf("Person Gender: ");
    switch (person2.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    return 0;
}
