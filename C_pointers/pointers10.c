#include <stdio.h>

int *sum(int, int b); // function prototype

int *sum(int a, int b)
{
    int sum = a + b;
    int *ptr = &sum;
    printf("The sum is %d\n", sum);
    return ptr;
}

float *average(int, int); // function prototype

float *average(int a, int b)
{
    float average = ((a + b) / 2.0);
    float *ptr = &average;
    printf("The average is %f\n", average);
    return ptr;
}

int main()
{
    int x = 4;
    float y = 6;
    int *ptr1;
    float *ptr2;

    ptr1 = sum(x, y);
    ptr2 = average(x, y);

    printf("The address of sum is %p and address of average is %p\n", ptr1, ptr2);

    return 0;
}