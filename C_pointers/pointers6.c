/*Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main(). */

#include <stdio.h>

int sum(int *, int *);

int sum(int *a, int *b)
{
    return *a + *b;
}

int average(int *, int *);

int average(int *a, int *b)
{
    return (*a + *b) / 2.0;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("The sum of a and b is %d\n", sum(&x, &y));
    printf("The average of a and b is %d\n", average(&x, &y));
    return 0;
}