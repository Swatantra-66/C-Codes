#include <stdio.h>

// write a pprogram to the nuumber is positive or negative

int main()
{
    int N;
    printf("Enter N--");
    scanf("%d", &N);

    if (N > 0)
    {
        printf("%d is Positive", N);
    }
    else if (N < 0)
    {
        printf("%d is negative", N);
    }
    else
    {
        printf("Number is %d", N);
    }
    return 0;
}