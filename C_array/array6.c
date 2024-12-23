// Repeat previous probleem for a general input provided by the user using scanf.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", n, i + 1, arr[i]);
    }

    return 0;
}
