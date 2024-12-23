#include <stdio.h>
// write a  program to check the number is even or  odd

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);
    }
    return 0;
}