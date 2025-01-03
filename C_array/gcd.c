#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    printf("Gcd of numbers is %d", num1);
    return 0;
}