#include <stdio.h>

// Ques : Write a program to  print the sum of first ten natural numbers using while loop

int main()
{
    int i = 1;
    int sum = 0;
    int n = 10;

    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("The sum of first ten natural numbers is %d\n", sum);

    return 0;
}