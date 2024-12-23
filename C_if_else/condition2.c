#include <stdio.h>

// conditions operators
// if , else, if else

int main()
{
    int age = 65;

    if (age > 70)
    {
        printf("You can drive and you are older person");
    }
    else if (age > 18)
    {
        printf("You can drive");
    }
    else
    {
        printf("You cannot drive");
    }
    return 0;
}