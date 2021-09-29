#include <math.h>
#include <stdio.h>

const float pi = 3.141592;

float volume(float r)
{
    float v;
    v = (4 * pi * pow(r, 3)) / 3;
    return v;
}


void main()
{
    printf("%f", volume(3));
}