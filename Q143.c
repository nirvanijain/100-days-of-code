//Find and print the student with the highest marks
#include <stdio.h>
#include <string.h> // Required for strcpy

// Define a structure to store student information
struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    int num_students;

    // Get the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Declare an array of Student structures
    struct Student students[num_students];

    // Input information for each student
    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name); // Read name
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find the student with the highest marks
    int highest_marks_index = 0; // Assume the first student has the highest marks initially

    for (int i = 1; i < num_students; i++) {
        if (students[i].marks > students[highest_marks_index].marks) {
            highest_marks_index = i; // Update the index if a student with higher marks is found
        }
    }

    // Print the details of the student with the highest marks
    printf("\nStudent with the highest marks:\n");
    printf("Name: %s\n", students[highest_marks_index].name);
    printf("Roll Number: %d\n", students[highest_marks_index].roll_number);
    printf("Marks: %.2f\n", students[highest_marks_index].marks);

    return 0;
}
