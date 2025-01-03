#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the no of elements");
    scanf("%d", &n);

    printf("Enter the elements");
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            int temp;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array :\n");
    for (i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
    return 0;
}