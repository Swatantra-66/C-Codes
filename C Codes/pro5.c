// \n is used for new line
// \t is used for horizontal tab
// \\ is used to insert backslash
//  \" is used to Inserts a double-quote character (").

#include <stdio.h>

int main()
{
    printf("Hello, World!\n");                // Newline
    printf("Tab\tseparated\n");               // Horizontal Tab
    printf("Backslash: \\\n");                // Backslash
    printf("Double Quote: \"\n");             // Double Quote
    printf("Carriage Return Example\rCAR\n"); // Carriage Return
    printf("Backspace Example: abc\bdef\n");  // Backspace
    printf("Alert sound\a\n");                // Alert

    return 0;
}
