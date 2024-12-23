/*Write a program to print the value of a variable i by using “pointer to pointer” type
of variable.*/

#include <stdio.h>

int main()
{
    int i = 10;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;

    printf("The address of i is %p\n", ptr1);
    printf("The value at address of i is %d\n", *ptr1);
    printf("The value at address of i is %d\n", **ptr2);

    return 0;
}