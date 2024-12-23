// #include <stdio.h>

// calc. volume of cylinder

/*int main()
{
    int r = 5;
    int h = 8;
    printf("The volume of cylinder with radius %d and height %d is %f", r, h, 3.14 * r * r * h);
    return 0;
}
*/

#include <stdio.h>
// converting  degree celcius into fahrenheit

int main()
{

    float celcius, fahrenheit;
    printf("Enter the temp in celcius\n");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9 / 5) + 32;

    printf("%.2f celcius is equal to %.2f fahrenheit", celcius, fahrenheit);
    return 0;
}
