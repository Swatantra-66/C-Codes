/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?*/
#include <stdio.h>

int returning_15(int *); // function prototype

// function definition
int returning_15(int *ptr)
{
    printf("The value of ptr is %d\n", ptr);
    printf("The value at ptr is %d\n", *ptr);
    return 5;
}

int main()
{
    int i = 6;
    int *ptr = &i;
    printf("The address of i is %p\n", ptr);
    printf("The value at address of i is %d\n", *ptr);
    returning_15(ptr);
    return 0;
}