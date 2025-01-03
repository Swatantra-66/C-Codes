#include <stdio.h>

int main()
{
    int i, j;
    int r = 3, c = 2;

    int a[3][2];
    int b[3][2];

    int result[3][2];

    // first matrix
    printf("Enter first matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Second matrix
    printf("Enter second matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // resultant matrix

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Matrix Addition :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}