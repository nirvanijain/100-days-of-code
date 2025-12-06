//Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>
#include <string.h> // Required for strcpy

// Define the Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // Declare a variable of type struct Student
    struct Student student1;

    // Read data for the student
    printf("Enter student name: ");
    // Using fgets for safer string input to prevent buffer overflows
    fgets(student1.name, sizeof(student1.name), stdin);
    // Remove the trailing newline character if present from fgets
    student1.name[strcspn(student1.name, "\n")] = 0;

    printf("Enter roll number: ");
    scanf("%d", &student1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    // Print a newline to consume the leftover newline character from scanf
    // This prevents issues with subsequent fgets calls if more input were needed
    getchar(); 

    // Print the student's data
    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.roll_no);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
