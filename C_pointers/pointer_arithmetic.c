#include <stdio.h>

int main()
{
    // POINTER ARITHMETIC USING INTEGER POINTER
    int a = 10;
    int *ptr1 = &a;

    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr1);
    ptr1++;
    printf("The value of ptr1 is %u\n", ptr1);
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     // POINTER ARITHMETIC USING CHARACTER POINTER
//     char a = 'B';
//     char *ptr1 = &a;

//     printf("The address of a is %u\n", &a);
//     printf("The address of a is %u\n", ptr1);
//     ptr1++;
//     printf("The value of ptr1 is %u\n", ptr1);
//     return 0;
// }