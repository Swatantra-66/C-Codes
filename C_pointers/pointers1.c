/*Pointers is a variable which stores memory addresses of other variables*/

#include <stdio.h>

// & is address of operator
// * is  value at address operator

int main()
{
    int i = 56;
    int *j = &i;                            //  j is a pointer pointing to i and (j is an interger pointer)
    printf("The address of i is %p\n", &i); // we can use any of them
    printf("The address of i is %p\n", j);  //
    // we can use unsigned int is %u for exact valuee of memory address
    printf("The address of i is %u\n", j);
    printf("The value at address of j is %d\n", *(&i)); // value at address

    return 0;
}