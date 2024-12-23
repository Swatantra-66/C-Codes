#include <stdio.h>

float c2f(float);

float c2f(float celcius)
{
    return ((9 * celcius) / 5) + 32;
}

int main()
{
    float celcius;
    scanf("%f", &celcius);
    printf("%.2f degree celcius is equal to %.2f degree fahrenhiet", celcius, c2f(celcius));
    return 0;
}