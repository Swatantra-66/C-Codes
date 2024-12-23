#include <stdio.h>
// carriage return

int main()
{
    printf("maverick is good \r Swatantra");

    return 0;
}

/*The \r character is used to move the cursor back to the beginning of the line.
printf("\rProgress: %d%%", i); updates the line with the current progress percentage.
fflush(stdout); ensures that the output is printed immediately.
usleep(50000); pauses the program for 50 milliseconds to simulate work being done.*/