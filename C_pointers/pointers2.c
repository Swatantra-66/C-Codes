#include <stdio.h>

int main()
{
    // char i = 'S';
    // char *j = &i; // here j is an character pointer

    // float k = 15.156;
    // float *l = &k;
    int i = 10;
    int *j = &i;
    int **k = &j; // pointer to pointer

    printf("The address of i is %p\n", j);
    printf("The address of j is %p\n", k);
    // printf("The value at address of j is %d\n", *(&j));
    printf("The value of i is %d\n", *j);
    printf("The value of j is %d\n", *k);
    printf("The value of i is %d\n", **(&j));
    printf("The value of j is %d\n", **(&k));

    return 0;
}