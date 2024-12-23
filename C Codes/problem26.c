#include <stdio.h>

// program to create a table and taking the sum of the table

int main()
{
    int n, i;
    int table = 1;
    int sum = 0;

    printf("Enter Number:");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        table = n * i;
        printf("%d X %d = %d\n", n, i, table);
        sum += table;
    }
    printf("The Sum of the above table is %d\n", sum);

    return 0;
}