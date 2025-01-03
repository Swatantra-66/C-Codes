#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Removing duplicates
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n;)
        {
            if (arr[j] == arr[i])
            {
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--; // reduce size of array after removing the duplicate
            }
            else
            {
                j++;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
