#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks:\n");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Student lies in grade A");
    }
    else if (marks >= 80 && marks <= 90)
    {
        printf("Student lies in grade B");
    }
    else if (marks >= 70 && marks <= 80)
    {
        printf("Student lies in Grade C");
    }
    else if (marks >= 60 && marks <= 70)
    {
        printf("Student lies in Grade D");
    }
    else
    {
        printf("Student lies in Grade E");
    }

    return 0;
}