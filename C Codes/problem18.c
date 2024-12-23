#include <stdio.h>

//  print the numbers from 10 to 20

int main()
{
    int i = 0;
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The numbers is %d\n", i);
        }

        i++;
    }

    return 0;
}