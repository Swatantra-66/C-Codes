#include <stdio.h>

int main()
{
    int r, c, i, j;

    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    int transpose[c][r];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transposing the matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transposed matrix is:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
