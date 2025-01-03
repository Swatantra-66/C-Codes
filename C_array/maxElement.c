#include <stdio.h>

int main()
{

    int i, n, max, sec_max;
    printf("Enter the no of elements: \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    sec_max = arr[1];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > sec_max && arr[i] < max)
        {
            sec_max = arr[i];
        }
    }
    printf("Max element is %d\n", max);
    printf("Second max element is %d", sec_max);

    return 0;
}