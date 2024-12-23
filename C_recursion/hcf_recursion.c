#include <stdio.h>

// Function to calculate GCD using recursion
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate LCM using the relationship: LCM(a, b) = (a * b) / GCD(a, b)
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers to find their LCM: ");
    scanf("%d %d", &num1, &num2);

    // Call the lcm function
    int result = lcm(num1, num2);

    // Print the result
    printf("The LCM of %d and %d is %d\n", num1, num2, result);

    return 0;
}
