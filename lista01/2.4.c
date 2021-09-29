#include <stdio.h>

float celtofah(float c)
{
    float f;
    f = 1.8 * c + 32;
    return f;
}


void main()
{
    printf("%f", celtofah(30));
}