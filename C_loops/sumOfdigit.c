#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        int num = arr[i];
        while (num != 0)
        {
            sum += num % 10;
            num = num / 10;
        }
    }

    printf("Sum of digits of array elements is %d\n", sum);

    return 0;
}
