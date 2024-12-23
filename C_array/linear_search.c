#include <stdio.h>

int main()
{
    int i, n, data, a[10];
    int found = 0; // Flag to indicate if data is found

    // Input number of elements
    printf("Enter the number of elements you want: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input the data to search for
    printf("Enter the data you want: ");
    scanf("%d", &data);

    // Linear search
    for (i = 0; i < n; i++)
    {
        if (a[i] == data)
        {
            printf("Found data at index %d\n", i);
            found = 1; // Set found flag to true
            break;     // Exit the loop since data is found
        }
    }

    // If data is not found, print a message
    if (!found)
    {
        printf("Data not exist\n");
    }

    return 0;
}
