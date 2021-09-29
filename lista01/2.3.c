#include <math.h>
#include <stdio.h>

float delta(float a, float b, float c)
{
    float d;
    d = pow(b, 2)-4*a*c;
    return d;
}


void main()
{
    printf("%f", delta(2,8,-24));
}