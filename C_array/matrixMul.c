#include <stdio.h>

int main()
{
    int i, j, k;
    int r1 = 3, r2 = 2, c1 = 2, c2 = 3;

    int a[3][2];
    int b[2][3];

    int result[3][3] = {0};

    // first matrix
    printf("Enter first matrix\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Second matrix
    printf("Enter second matrix\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // resultant matrix

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}