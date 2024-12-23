#include <stdio.h>

int main()
{
    int a = 2;
    int b = 3;
    int c = 3;
    int d = 1;

    printf("The value is %d\n", a * b / c + 10);
    printf("The value is %d\n", 3 * b / 2 * c + 7 * a);
    printf("The value is %d", 3 * a / b - c + d);

    // Here the priority of  * , /  is more than +
    // therefore the precedence is left to right

    return 0;
}