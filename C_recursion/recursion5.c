/*The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.*/
/* THis is fibonacci serie - 0,1,1,2,3,5,8,13,21,34,55,89,144,...*/
// #include <stdio.h>

int fibonacci(int); // function prototype

int fibonacci(int n) // function definition
{
    if (n == 1 || n == 2) // base case;
    {
        return n - 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("The value of fibonacci series at %d is %d", n, fibonacci(n));
    return 0;
}

//
// #include <stdio.h>

// int fibonacci(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return n - 1;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// int main()
// {
//     int n;
//     printf("Enter the no of terms:");
//     scanf("%d", &n);
//     printf("Fibonacci Series");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d", fibonacci(i));
//     }
//     printf(" ");
//     return 0;
// }