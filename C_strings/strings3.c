/*Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal.*/

#include <stdio.h>

int main()
{
    char str1[] = "Swatantra";

    for (int i = 0; i < 9; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");

    printf("%s\n", str1);
    return 0;
}