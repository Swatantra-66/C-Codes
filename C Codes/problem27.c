#include <stdio.h>

// program  to print a facorial of  number using for loop
//  eg ; 5 factorial = 5x4x3x2x1=120

int main()
{
    int n = 5;
    int product = 1;

    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial is %d", product);

    return 0;
}