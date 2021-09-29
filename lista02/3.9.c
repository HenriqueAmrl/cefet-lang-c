#include <stdlib.h>
#include <stdio.h>

void ptmedio(float xa, float ya, float xb, float yb, float *xm, float *ym)
{
    *xm = (xa + xb) / 2;
    *ym = (ya + yb) / 2;
}


void main()
{
    float x, y;
    ptmedio(2, 1, 7, 6, &x, &y);
    printf("Xm = %f | Ym = %f", x, y);
}