#include <stdio.h>

// break = exit the loop now

int main()
{

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        if (i == 6)
        {
            break;
        }
    }

    return 0;
}