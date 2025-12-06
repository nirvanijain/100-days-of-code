//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
#include <string.h> // Required for strcpy

// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define the Employee structure with nested Date structure
struct Employee {
    int employee_id;
    char name[50];
    struct Date joining_date; // Nested Date structure
    float salary;
};

int main() {
    // Declare an Employee variable
    struct Employee emp1;

    // Input details for the employee
    printf("Enter Employee ID: ");
    scanf("%d", &emp1.employee_id);

    printf("Enter Employee Name: ");
    scanf("%s", emp1.name); // Note: scanf("%s", ...) stops at whitespace

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp1.joining_date.day, &emp1.joining_date.month, &emp1.joining_date.year);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp1.salary);

    // Print the employee details
    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", emp1.employee_id);
    printf("Name: %s\n", emp1.name);
    printf("Joining Date: %02d/%02d/%d\n", emp1.joining_date.day, emp1.joining_date.month, emp1.joining_date.year);
    printf("Salary: %.2f\n", emp1.salary);

    return 0;
}
