// #include <stdio.h>

// int main()
// {
//     char shakib;
//     int i = 0;
//     printf("Enter Mota or Patla");
//     scanf("%c", &shakib);

//     if (i < 10)
//     {
//         printf("Shakib is %c", shakib);
//     }
//     else
//     {
//         printf("Patla");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter Numbers");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2)
    {
        // if (n1 > n3)
        //{
        printf("%d is greatest", n1);
        //}
    }
    // else if (n2 > n1)
    // {
    //     if (n2 > n3)
    //     {
    //         printf("%d iss greatest", n2);
    //     }
    // }
    else
    {
        if (n2 > n1)
            printf("%d is greatest", n2);
    }
    return 0;
}