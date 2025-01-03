#include <stdio.h>

void towerOfHanoi(int n, char fromRod, char toRod, char auxRod)
{
    if (n == 1)
    {
        printf("Move disc 1 from rod %c to rod %c\n", fromRod, toRod);
        return;
    }

    towerOfHanoi(n - 1, fromRod, auxRod, toRod);
    printf("Move disc %d from rod %c to rod %c\n", n, fromRod, toRod);
    towerOfHanoi(n - 1, auxRod, toRod, fromRod);
}

int main()
{
    int n;
    printf("Enter the number of discs: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'C', 'B'); // A, B, and C are names of the rods

    return 0;
}
