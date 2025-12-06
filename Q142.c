//Store details of 5 students in an array of structures and print all.
#include <stdio.h>
#include <string.h> // Required for strcpy

// Define a structure to hold student details
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    // Declare an array of 5 Student structures
    struct Student students[5];

    // Input details for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        // Use scanf with %s to read a single word name
        // For names with spaces, use fgets or a more robust scanf approach
        scanf("%s", students[i].name); 
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Print details of all 5 students
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks); // Print marks with 2 decimal places
        printf("---------------------------\n");
    }

    return 0;
}
