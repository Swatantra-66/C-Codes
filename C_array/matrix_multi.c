// matrix multiplication

#include <stdio.h>

int main()
{
    int i, j, k;
    int rows1 = 3, cols1 = 2; // Dimensions for the first matrix
    int rows2 = 2, cols2 = 3; // Dimensions for the second matrix

    // First matrix
    int a[3][2];

    // Second matrix
    int b[2][3];

    // Resultant matrix
    int result[3][3] = {0};

    // Taking input for the first matrix
    printf("Enter elements for the first matrix (3x2):\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Taking input for the second matrix
    printf("Enter elements for the second matrix (2x3):\n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the result
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
