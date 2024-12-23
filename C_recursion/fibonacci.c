#include <stdio.h>

// Function prototype
int fibonacci(int n);

// Function definition
int fibonacci(int n)
{
    // Base cases for the first two Fibonacci numbers
    if (n == 1)
    {
        return 0; // Fibonacci(1) = 0
    }
    else if (n == 2)
    {
        return 1; // Fibonacci(2) = 1
    }
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);

    // Output the nth term in the Fibonacci series
    printf("The %dth term in the Fibonacci series is %d\n", n, fibonacci(n));

    return 0;
}
