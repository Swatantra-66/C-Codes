// program  to calculate average of three numbers usinf recursion
#include <stdio.h>

float average(int, int, int); // function  prototype

// function definition
float average(int num1, int num2, int num3)
{
    return (float)(num1 + num2 + num3) / 3;
}

int main()
{
    int num1 = 6, num2 = 4, num3 = 10;
    printf("The average of num1,num2 and num3 is %f", average(num1, num2, num3));
    return 0;
}