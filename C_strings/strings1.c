#include <stdio.h>
// strings are basically character array

int main()
{
    char _str[] = {'S', 'W', 'A', 'T', 'A', 'N', 'T', 'R', 'A', '\0'};

    for (int i = 0; i < 9; i++)
    {
        printf("%c\n", _str[i]);
    }

    return 0;
}