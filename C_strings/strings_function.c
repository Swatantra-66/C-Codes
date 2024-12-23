#include <stdio.h>
#include <string.h>

int main()
{

    char _str1[] = "Swatantra";
    char _str2[10];

    // strlen() this fuction is used to count the no of characters in strings excluding the null character.
    printf("The length of the string is %d\n", strlen(_str1));
    strcpy(_str2, _str1);
    printf("%s %s\n", _str1, _str2);

    strcat(_str1, _str2);
    printf("%s %s\n", _str1, _str2);

    int x = strcmp("Swatantra", "1Yadav");
    printf("%d\n", x);

    return 0;
}