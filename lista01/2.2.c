#include <math.h>
#include <stdio.h>

const float pi = 3.141592;

float radiano(float g)
{
    float r;
    r = (g*pi)/180;
    return r;
}


float area(float a, float b, float x)
{
    float r, g;
    g = sin(radiano(x));
    r = (a*b*g)/2;
    return r;
}


void main()
{
    printf("%f", area(3, 4, 90));
}