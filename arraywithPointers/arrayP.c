#include <stdio.h>

int main()
{
    int v = 100;
    int *ptr;
    ptr = &v;

    printf("The value of v is %d\n", v);
    printf("The value of v is %d\n", *ptr);
    printf("The value of v is %p\n", &v);
    printf("The value of v is %d\n", v);

    return 0;
}