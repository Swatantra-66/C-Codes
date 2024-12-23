#include <stdio.h>

int main()
{
    char st[5];

    scanf("%s", st);    // we dont need to give address of operator for strings input
    printf("%s\n", st); // we are using %s format specifier for printing strings

    return 0;
}