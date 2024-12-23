#include <stdio.h>
#include <math.h>

// write a program  to compute  the roots of quadratic equation

int main()
{
    float a, b, c, D1, x1, x2, D;
    printf("Enter a ,b ,c");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D == 0)
    {
        x1 = x2 = b / 2 * a;
        printf("Roots are real and equal");
        printf("x1 = %.2f = %.2f", x1, x2);
    }
    else if (D > 0)
    {
        D1 = sqrt(D);
        x1 = (-b + D1) / 2 * a;
        x2 = (-b - D1) / 2 * a;
        printf("The roots of quadratic equation are %.2f and  %.2f", x1, x2);
    }
    else
    {
        printf("Roots does not exists");
    }

    return 0;
}