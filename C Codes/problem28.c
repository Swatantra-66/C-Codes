#include <stdio.h>

// Ques : Write a program to  print the sum of first ten natural numbers using do while loop

int main()
{
    int i = 1;
    int sum = 0;

    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    printf("The sum of first ten natural numbers is %d\n", sum);

    return 0;
}