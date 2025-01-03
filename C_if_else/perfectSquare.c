#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int sqrtNum = sqrt(num); // Calculate the square root of the number

    if (sqrtNum * sqrtNum == num)
    {
        printf("%d is a perfect square.\n", num);
    }
    else
    {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
