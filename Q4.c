//Write a program ro calculate the area and circumference of a circle given its radius
#include <stdio.h>

int main() {
    // Define the value of Pi as a constant
    #define PI 3.14159

    float radius, area, circumference;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area of the circle
    // Formula: Area = π * r^2
    area = PI * radius * radius;

    // Calculate the circumference of the circle
    // Formula: Circumference = 2 * π * r
    circumference = 2 * PI * radius;

    // Print the results
    printf("The area of the circle is: %.2f\n", area);
    printf("The circumference of the circle is: %.2f\n", circumference);

    return 0;
}
