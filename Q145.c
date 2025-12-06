//Return a structure containing top student's details from a function.
#include <stdio.h>
#include <string.h> // For strcpy

// Define the Student structure
struct Student {
    char name[50];
    int roll_number;
    float marks;
};

// Function to find and return the top student
struct Student findTopStudent(struct Student students[], int num_students) {
    struct Student top_student;
    // Initialize with the first student as a starting point
    if (num_students > 0) {
        top_student = students[0];
    } else {
        // Handle the case of an empty array (no students)
        strcpy(top_student.name, "N/A");
        top_student.roll_number = -1;
        top_student.marks = -1.0;
        return top_student;
    }

    for (int i = 1; i < num_students; i++) {
        if (students[i].marks > top_student.marks) {
            top_student = students[i];
        }
    }
    return top_student;
}

int main() {
    // Create an array of students
    struct Student students[] = {
        {"Alice", 101, 95.5},
        {"Bob", 102, 88.0},
        {"Charlie", 103, 98.2},
        {"David", 104, 91.0}
    };
    int num_students = sizeof(students) / sizeof(students[0]);

    // Call the function to get the top student
    struct Student top = findTopStudent(students, num_students);

    // Display the details of the top student
    printf("Top Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_number);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
