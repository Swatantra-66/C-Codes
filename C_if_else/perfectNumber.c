#include <stdio.h>

int main()
{
    int num, i, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the sum of proper divisors
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    // Check if the sum of divisors is equal to the number
    if (sum == num && num != 0)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}
