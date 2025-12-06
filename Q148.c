//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h> // Required for strcmp

// Define a sample struct
typedef struct Person {
    char name[50];
    int age;
    float height;
} Person;

// Function to compare two Person structs
int arePersonsIdentical(Person p1, Person p2) {
    // Compare name using strcmp
    if (strcmp(p1.name, p2.name) != 0) {
        return 0; // Not identical if names differ
    }
    // Compare age
    if (p1.age != p2.age) {
        return 0; // Not identical if ages differ
    }
    // Compare height
    if (p1.height != p2.height) {
        return 0; // Not identical if heights differ
    }
    return 1; // Identical if all members match
}

int main() {
    // Declare two Person structs
    Person person1, person2;

    // Input for person1
    printf("Enter details for Person 1:\n");
    printf("Name: ");
    scanf("%49s", person1.name); // Limit input to prevent buffer overflow
    printf("Age: ");
    scanf("%d", &person1.age);
    printf("Height: ");
    scanf("%f", &person1.height);

    // Input for person2
    printf("\nEnter details for Person 2:\n");
    printf("Name: ");
    scanf("%49s", person2.name);
    printf("Age: ");
    scanf("%d", &person2.age);
    printf("Height: ");
    scanf("%f", &person2.height);

    // Check if the structs are identical
    if (arePersonsIdentical(person1, person2)) {
        printf("\nThe two persons are identical.\n");
    } else {
        printf("\nThe two persons are NOT identical.\n");
    }

    return 0;
}
