//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, totalAmount;

    // Input from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (e.g., 5 for 5%%): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    // Formula: SI = (Principal * Rate * Time) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    // Formula: CI = P * (1 + R/100)^T - P
    // First, calculate the total amount with compound interest
    totalAmount = principal * pow((1 + rate / 100), time);
    // Then, subtract the principal to get the compound interest
    compoundInterest = totalAmount - principal;

    // Display the results
    printf("\n--- Results ---\n");
    printf("Principal Amount: %.2f\n", principal);
    printf("Interest Rate: %.2f%%\n", rate);
    printf("Time Period: %.2f years\n", time);
    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
