#include <stdio.h>
// to calc the total no of sqaures along lenght and breadth in rectangle

int main()

{
    int n, m, v;
    printf("Enter Numbers:");
    scanf("%d %d %d", &n, &m, &v);

    int stone_n = (n + v - 1) / v;
    int stone_m = (m + v - 1) / v;

    printf("The minimun no of stones required are %d", stone_n * stone_m);

    return 0;
}