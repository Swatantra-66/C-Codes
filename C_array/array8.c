/*Write a program containing functions which counts the number of positive
integers in an array. */

#include <stdio.h>

int count(int arr[], int n)
{
    int no_of_positive = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > 0)
        {
            no_of_positive++;
        }
    }
    return no_of_positive;
}

int main()
{
    int arr[] = {-1, 3, 2, 6, 9, -2, 10, 5, 7, -15};
    printf("No of positive integers is %d", count(arr, 10));

    return 0;
}