#include <stdio.h>
// calculating  area of rectangle

int main()
{
    // int length = 5;
    // int breadth = 4;
    int length, breadth;

    printf("Enter length\n");
    scanf("%d", &length);
    printf("Enter breadth\n");
    scanf("%d", &breadth);
    printf("The area of rectange is %d", length * breadth);
    return 0;
}