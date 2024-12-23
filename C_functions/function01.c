#include <stdio.h>

// function prototype
int sum(int, int);

// function definition
int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int a = 5;
    int b = 11;

    int c1 = sum(a, b); // function call
    printf("%d\n", c1);

    int a1 = 20;
    int b1 = 44;

    int c2 = sum(a1, b1); // function call
    printf("%d\n", c2);
}