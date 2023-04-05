//C program to calculate insurance
#include <stdio.h>

int main() {
    int age;
    float coverage, premium;
    
    // Input age and coverage
    printf("Enter your age: ");
    scanf("%d", &age); // Reads user input for age and stores it in the variable "age"
    
    printf("Enter the coverage amount: ");
    scanf("%f", &coverage); // Reads user input for coverage and stores it in the variable "coverage"
    
    // Calculate premium based on age and coverage
    if (age < 18) {
        premium = 500; // If the user is younger than 18, the premium is set to a flat rate of $500
    } else if (age >= 18 && age < 30) {
        premium = coverage * 0.05; // If the user is between 18 and 30, the premium is calculated as 5% of the coverage amount
    } else if (age >= 30 && age < 50) {
        premium = coverage * 0.08; // If the user is between 30 and 50, the premium is calculated as 8% of the coverage amount
    } else {
        premium = coverage * 0.12; // If the user is older than 50, the premium is calculated as 12% of the coverage amount
    }
    
    // Output the premium
    printf("Your insurance premium is: $%.2f", premium); // Outputs the calculated premium to the user, with 2 decimal places
    
    return 0;
}
