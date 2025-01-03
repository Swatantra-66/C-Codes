#include <stdio.h>

int main()
{
    int n, r = 0;
    int original;
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
    }

    if (original == r)
    {
        printf("%d is a palindrome.\n", original);
    }
    else
    {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}