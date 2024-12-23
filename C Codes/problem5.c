#include <stdio.h>

// cal simple interest

int main()
{
    float principal, rate, time, simple_interest;

    // Prompt user for input
    // printf("Enter principal amount: ");
    // scanf("%f", &principal);

    // printf("Enter annual interest rate (in percentage): ");
    // scanf("%f", &rate);

    // printf("Enter time (in years): ");
    // scanf("%f", &time);

    printf("Enter Principal_rate, interest_rate, time:");
    scanf("%f %f %f %f", &principal, &rate, &time);

    rate = rate / 100;
    // Convert rate from percentage to decimal

    // Calculate simple interest
    simple_interest = principal * rate * time;

    // Print the result
    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}
