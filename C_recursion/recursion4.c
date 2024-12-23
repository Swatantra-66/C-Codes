// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2.
#include <stdio.h>

float attr_force(float);

float attr_force(float mass)
{
    float g = 9.8;
    return (mass * g);
}

int main()
{
    float mass;
    scanf("%f", &mass);
    printf("The attraction force on body of mass %.2f is %.2f", mass, attr_force(mass));
    return 0;
}