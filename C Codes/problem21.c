#include <stdio.h>

int main()
{
    int i = 1;
    int num;
    printf("Enter Number:");
    scanf("%d", &num);

    do
    {
        printf("The Natural numbers is %d\n:", i);
        i++;
    } while (num >= i);

    return 0;
}