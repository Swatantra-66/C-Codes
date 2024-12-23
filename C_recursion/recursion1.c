#include <stdio.h>

int factorial(int); // function prototype

int factorial(int n) // function definition
{
    if (n == 0 || n == 1) // base condition
    {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}