#include <stdio.h>

int main()
{
    int marks[] = {12, 56, 35, 65};

    int *ptr = &marks[0];

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The marks at index %d is %u\n", i, marks[i]);
    // }

    for (int i = 0; i < 4; i++)
    {
        printf("The value of marks at index %d is %u\n", i, *ptr);
        ptr++;
    }

    return 0;
}