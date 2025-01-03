#include <stdio.h>

int main()
{
    int num, i, isPrime = 1; // Assume the number is prime initially

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0; // If num is divisible by i, it's not prime
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
