#include <stdio.h>

int main()
{
    float num1, num2;
    int a, b, sum;
    scanf("%f", &num1);
    scanf("%f", &num2);

    a = (int)num1;
    b = (int)num2;

    sum = a + b;

    printf("The sum of numbers is %d", sum);
    return 0;
}