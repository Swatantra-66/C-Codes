#include <stdio.h>

// sum should change the value x
int sum(int *, int *);

int sum(int *a, int *b)
{
    *a = 5; // this
    return (*a + *b);
}

int main()
{
    int x = 1, y = 10;
    printf("The sum of 1 and 10 is %d\n", sum(&x, &y));
    printf("The value of x is %d", x); // the value of x is changed
    return 0;
}