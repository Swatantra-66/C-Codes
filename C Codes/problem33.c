#include <stdio.h>

// program to compute average marks using it for conditions

int main()
{
    float m1, m2, m3, m4, m5, total, average;

    printf("Enter the marks of subject::");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;

    printf("Total marks is %.2f\n", total);
    printf("Average marks is %.2f\n", average);

    if (average > 60)
    {
        printf("Division:First\n");
    }
    else if (average >= 50 && average < 60)
    {
        printf("Division:Second\n");
    }
    else if (average >= 40 && average < 50)
    {
        printf("Division:Third\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}