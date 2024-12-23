#include <stdio.h>

int main()

{
    // The index of an array of  size n goesf from 0-(n-1)
    int mobile[3];

    printf("Enter the no of mobiles");

    scanf("%d", &mobile[0]);
    scanf("%d", &mobile[1]);
    scanf("%d", &mobile[2]);

    printf("The no of mobile 0 is %d\n", mobile[0]);
    printf("The no of mobile 2 is %d\n", mobile[2]);

    return 0;
}