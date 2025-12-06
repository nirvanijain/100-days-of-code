//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
#include <string.h> // Required for strcpy

// Define a structure
struct Person {
    char name[50];
    int age;
    float height;
};

// Function to print structure members (pass by value)
void printPersonInfo(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f meters\n", p.height);
}

int main() {
    // Declare and initialize a Person structure variable
    struct Person person1;
    strcpy(person1.name, "Alice");
    person1.age = 30;
    person1.height = 1.65;

    // Call the function to print the structure members
    printPersonInfo(person1);

    return 0;
}
