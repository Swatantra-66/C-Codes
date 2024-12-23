#include <stdio.h>

// ASCII  value of a is 97 and z is 122
// to check the character is in lowercase

int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c", &ch);
    printf("The value of character is %d\n", ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("The character is lowercase\n", ch);
    }
    else
    {
        printf("The character is uppercase\n", ch);
    }

    return 0;
}