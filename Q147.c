//Store employee data in a binary file using fwrite() and read using fread()
#include <stdio.h>
#include <stdlib.h> // For exit()

// Define the Employee structure
typedef struct {
    int id;
    char name[50];
    char department[30];
    float salary;
} Employee;

int main() {
    FILE *fp;
    Employee emp_write, emp_read;

    // --- Writing Employee Data to Binary File ---
    fp = fopen("employees.bin", "wb"); // Open in write binary mode
    if (fp == NULL) {
        perror("Error opening file for writing");
        exit(1);
    }

    printf("Enter employee details to write:\n");

    // Employee 1
    emp_write.id = 101;
    snprintf(emp_write.name, sizeof(emp_write.name), "Alice Smith");
    snprintf(emp_write.department, sizeof(emp_write.department), "HR");
    emp_write.salary = 60000.00;
    fwrite(&emp_write, sizeof(Employee), 1, fp);

    // Employee 2
    emp_write.id = 102;
    snprintf(emp_write.name, sizeof(emp_write.name), "Bob Johnson");
    snprintf(emp_write.department, sizeof(emp_write.department), "IT");
    emp_write.salary = 75000.00;
    fwrite(&emp_write, sizeof(Employee), 1, fp);

    printf("Employee data written to employees.bin\n\n");
    fclose(fp);

    // --- Reading Employee Data from Binary File ---
    fp = fopen("employees.bin", "rb"); // Open in read binary mode
    if (fp == NULL) {
        perror("Error opening file for reading");
        exit(1);
    }

    printf("Reading employee data from employees.bin:\n");
    while (fread(&emp_read, sizeof(Employee), 1, fp) == 1) {
        printf("ID: %d, Name: %s, Department: %s, Salary: %.2f\n",
               emp_read.id, emp_read.name, emp_read.department, emp_read.salary);
    }

    fclose(fp);
    return 0;
}
