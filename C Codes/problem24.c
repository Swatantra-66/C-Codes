/*#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        printf("The number is %d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}
*/

#include <stdio.h>

// Ques : Write a program to  print the sum of first ten natural numbers using while loop

int main()
{
    int i = 1;
    int sum = 0;

    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("The sum of first ten natural numbers is %d\n", sum);

    return 0;
}