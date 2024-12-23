#include <stdio.h>

// struct Person
// {
//     int mobileNo;
//     float salary;
// };

// int main()
// {
//     struct Person p;
//     p.salary = 100.0;
//     p.mobileNo = 9876897437;
// }

struct Distance
{
    int feet;
    float inch;
} dist1, dist2, sum;

int main()
{
    printf("1st distance\n");
    printf("Enter feet:");
    scanf("%d", &dist1.feet);
    printf("Enter inch:");
    scanf("%f", &dist1.inch);
    printf("Enter 2nd distance\n");
    printf("Enter feet:");
    scanf("%d", &dist2.feet);
    printf("Enter inch:");
    scanf("%f", dist2.inch);
}