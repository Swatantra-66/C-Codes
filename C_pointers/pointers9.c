// Write a function and pass the value by reference.
#include <stdio.h>

int sum(int *, int *);

int sum(int *a, int *b)
{
    *b = 6;
    return *a + *b;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("The sum of a and b is %d", sum(&x, &y));
    return 0;
}
