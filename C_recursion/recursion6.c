// program to calc sumof first n natural number using recursion;
#include <stdio.h>

int sumN(int);

int sumN(int n)
{
    return (n * (n + 1) / 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("The sum of first %d natural number is %d", n, sumN(n));
    return 0;
}