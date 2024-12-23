/*Write a program to change the value of a variable to ten times of its current
value. */
#include <stdio.h>

void change_to_10times(int *);

void change_to_10times(int *n)
{
    *n = *n * 10;
}

int main()
{
    int x = 10;
    printf("The value of x is %d\n", x);
    change_to_10times(&x);
    printf("Now the value of x is %d\n", x);
    return 0;
}