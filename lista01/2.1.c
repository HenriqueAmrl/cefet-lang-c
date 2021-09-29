#include <stdio.h>

const float pi = 3.141592;

float radiano(float g)
{
    float r;
    r = (g*pi)/180;
    return r;
}


void main()
{
    printf("%f", radiano(30));
}