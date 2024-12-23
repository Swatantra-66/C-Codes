#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    num = -num;

    if (num < 0)
    {
        printf("Absolute value is %d\n", num);
    }
    else
    {
        printf("Error");
    }

    return 0;
}