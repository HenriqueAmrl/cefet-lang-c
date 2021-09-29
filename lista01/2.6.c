#include <math.h>
#include <stdio.h>

float distancia(float xa, float xb, float ya, float yb)
{
    float r;
    r = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
    return r;
}


void main()
{
    printf("%f", distancia(2, 4, -3, 5));
}