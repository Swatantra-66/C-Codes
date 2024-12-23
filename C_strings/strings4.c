#include <stdio.h>
#include <string.h>

int main()
{
    char str_array[] = {'A', 'L', 'P', 'H', 'A', 'B', 'E', 'T', '\0'};

    printf("The length of %s is %d\n", str_array, strlen(str_array));

    return 0;
}