#include <stdio.h>

// program to find greatest of four numbers entered by user

int main()
{
    int num1, num2, num3, num4;
    printf("Enter your numbers:\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("Num1 (%d) is greatest\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4)
    {
        printf("Num2 (%d) is greatest\n", num2);
    }
    else if (num3 >= num1 && num3 >= num2 && num3 >= num4)
    {
        printf("Num3 (%d) is greatest\n", num3);
    }
    else if (num4 >= num1 && num4 >= num2 && num4 >= num3)
    {
        printf("Num4 (%d) is greatest\n", num4);
    }

    return 0;
}
