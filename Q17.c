//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h> 
#include <math.h>  

int main() {
    double a, b, c; // Coefficients of the quadratic equation
    double discriminant, root1, root2, realPart, imagPart;

    // Prompt the user to enter the coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c); // Read the coefficients from user input

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Categorize the roots based on the discriminant
    if (discriminant > 0) {
        // Case 1: Discriminant is positive, roots are real and distinct
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("root1 = %.2lf\n", root1);
        printf("root2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        // Case 2: Discriminant is zero, roots are real and equal
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("root1 = root2 = %.2lf\n", root1);
    } else {
        // Case 3: Discriminant is negative, roots are complex
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex (imaginary):\n");
        printf("root1 = %.2lf + %.2lf i\n", realPart, imagPart);
        printf("root2 = %.2lf - %.2lf i\n", realPart, imagPart);
    }

    return 0; // Indicate successful execution
}
