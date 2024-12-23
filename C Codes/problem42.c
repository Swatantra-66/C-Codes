#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, D, r1, r2;
    printf("Enter the vaalue of a,b,c:");
    scanf("%d %d %d", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        r1 = (-b + sqrt(D)) / 2 * a;
        r2 = (-b - sqrt(D)) / 2 * a;

        printf("The roots of quadratic eqn are %d and %d", r1, r2);
    }
    else if (D == 0)
    {
        r1 = r2 = b / 2 * a;

        printf("Both roots are real and equal");
        printf("r1 = %d = %d", r1, r2);
    }
    else
    {
        printf("Roots are imaginary");
    }

    return 0;
}