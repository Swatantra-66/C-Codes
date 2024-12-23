#include <stdio.h>

int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    int *ptr;
    printf("*ptr = %d \n", *ptr);
    printf("*(ptr+1) = %d \n", *(ptr + 1));
    printf("*(ptr-1) = %d \n", *(ptr - 1));

    return 0;
}