/*Write a program to print the address of a variable. Use this address to get the
value of the variable. */

#include <stdio.h>

int main()
{
    int i = 5;
    int *j = &i;

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);

    printf("The value at address of i is %d\n", *(&i));
    printf("The value at address of i is %d\n", *j);
    return 0;
}