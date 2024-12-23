#include <stdio.h>
// income tax

int main()
{
    float tax = 0;
    int income;

    printf("Enter income:\n");
    scanf("%d", &income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (income - 500000);
    }
    printf("The total tax you need to pay is %.2f", tax);

    return 0;
}