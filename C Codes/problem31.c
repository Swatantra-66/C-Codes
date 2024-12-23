#include <stdio.h>

// program  to calculate facorial of  number using while loop
//  eg ; 5 factorial = 5x4x3x2x1=120

int main()
{
    int n = 5;
    int product = 1;
    int i = 1;

    while (i <= n)
    {
        product *= i;
        i++;
    }
    printf("The factorial of %d is %d", n, product);

    return 0;
}