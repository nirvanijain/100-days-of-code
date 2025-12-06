//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <stdlib.h> // For exit()

// Define a structure to hold student information
struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    FILE *file_ptr;
    struct Student student_record;
    int num_students, i;

    // --- Writing student records to file ---

    // Open the file in write mode ("w")
    // If the file does not exist, it will be created. If it exists, its content will be overwritten.
    file_ptr = fopen("student_records.txt", "w");

    if (file_ptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1); // Exit the program if file cannot be opened
    }

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Loop to get student data and write to file
    for (i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", student_record.name); // Using %s for string input without spaces
        printf("Roll Number: ");
        scanf("%d", &student_record.roll_number);
        printf("Marks: ");
        scanf("%f", &student_record.marks);

        // Write the student record to the file using fprintf()
        fprintf(file_ptr, "%s %d %.2f\n", student_record.name, student_record.roll_number, student_record.marks);
    }

    // Close the file after writing
    fclose(file_ptr);
    printf("\nStudent records successfully written to student_records.txt\n");

    // --- Reading student records from file ---

    // Open the file in read mode ("r")
    file_ptr = fopen("student_records.txt", "r");

    if (file_ptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1); // Exit the program if file cannot be opened
    }

    printf("\nDisplaying student records from file:\n");
    printf("-----------------------------------\n");

    // Loop to read student data from file until End Of File (EOF) is reached
    while (fscanf(file_ptr, "%s %d %f", student_record.name, &student_record.roll_number, &student_record.marks) != EOF) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", student_record.name, student_record.roll_number, student_record.marks);
    }

    // Close the file after reading
    fclose(file_ptr);

    return 0;
}
