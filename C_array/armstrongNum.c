#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, remainder, n = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    // Calculate number of digits
    while (temp != 0)
    {
        temp /= 10;
        ++n;
    }

    temp = num;

    // Calculate sum of powers of digits
    while (temp != 0)
    {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
