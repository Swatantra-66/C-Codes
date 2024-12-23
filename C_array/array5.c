/*Write a program to create an array of 10 integers and store multiplication table of
5 in it. */

// #include <stdio.h>

// int main()
// {
//     int arr[] = {0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
//     int n = 5;

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d X %d = %d\n", n, i, arr[i]);
//     }

//     return 0;
// }

// Write a program to create an array of 10 integers and store multiplication table of
// 5 in it

#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("5 X %d = %d\n", i + 1, arr[i]);
    }

    return 0;
}