/*Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.*/

#include <stdio.h>

int main()
{
    int arr[] = {3, 4, 1, 6, 3, 7, 9, 8, 2, 5};

    int *ptr = &arr[0];

    printf("The value of array at address %u is %d\n", ptr + 2, *(ptr + 2));

    return 0;
}

/*
If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
(i) True.
(ii) False
(iii) Depends

Ans - False because *(S+3) will refers to the fouth element not the third elemnt.
*/