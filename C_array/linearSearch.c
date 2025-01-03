#include <stdio.h>

int main()
{
    int i, n, data;
    int found = 0;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the data");
    scanf("%d", &data);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            printf("Found data is %d at index %d", data, i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Data does not exist");
    }

    return 0;
}