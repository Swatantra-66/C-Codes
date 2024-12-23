#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter numbers:");

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a >= b && a >= c && a >= d)
    {
        printf("a (%d) is greatest\n", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("b (%d) is  greatest\n", b);
    }
    else if (c >= a && c >= b && c >= d)
    {
        printf("c (%d) is greatest\n", c);
    }
    else if (d >= a && d >= b && d >= c)
    {
        printf("d (%d) is greatest\n", d);
    }

    return 0;
}