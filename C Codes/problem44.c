// program to  calculate the no of trailing/ending zeroes in factorial of any number
#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 5; n / i >= 1; i *= 5)
    {
        count += n / i;
    }

    printf("Number of trailing zeros in %d! is %d\n", n, count);

    return 0;
}
