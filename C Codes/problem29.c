#include <stdio.h>

// Ques : Write a program to  print the sum of first ten natural numbers using for loop

int main()
{
    int i = 1;
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum of first ten natural numbers is %d\n", sum);

    return 0;
}