#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    printf("Enter elements:\n");
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reversing array
    for (i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}