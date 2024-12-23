#include <stdio.h>
#include <math.h>

// program to check the number is prime or not
// A prime number is a natural number greater than 1 that is not divisible by any number other than 1 and itself.

int main()
{
    int i, n, isPrime = 1;

    printf("Enter a number:");
    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = 0;
    }
    else if (n == 2)
    {
        isPrime = 1;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}