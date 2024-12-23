#include <stdio.h>

int main()
{
    int a = 95;
    int b;

    printf("Enter b:");
    scanf("%d", &b);

    // Relationaal operators
    // == , =>, =<, <, >, !=

    if (95 % b == 0)
    {
        printf("95 is divisible by b\n");
    }
    else
    {
        printf("95 is not divisible by b\n");
    }

    return 0;
}