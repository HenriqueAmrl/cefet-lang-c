#include <stdio.h>

//Adição
void adc(float nx, float dx, float ny, float dy, float *nz, float *dz)
{
    *nz = nx * dy + ny * dx;
    *dz = nx * ny;
}


//Subtração
void sub(float nx, float dx, float ny, float dy, float *nz, float *dz)
{
    *nz = nx * dy - ny * dx;
    *dz = nx * ny;
}


//Multiplicação
void mul(float nx, float dx, float ny, float dy, float *nz, float *dz)
{
    *nz = nx * ny;
    *dz = dx * dy;
}


//Divisão
void div(float nx, float dx, float ny, float dy, float *nz, float *dz)
{
    mul(nx, dx, dy, ny, &*nz, &*dz);
}


void main()
{
    float n, d;
    adc(2, 3, 5, 7, &n, &d);
    printf("Soma: %f/%f\n", n, d);

    sub(2, 3, 5, 7, &n, &d);
    printf("Subtração: %f/%f\n", n, d);
    
    mul(2, 3, 5, 7, &n, &d);
    printf("Multiplicação: %f/%f\n", n, d);

    div(2, 3, 5, 7, &n, &d);
    printf("Divisão: %f/%f\n", n, d);
}

/*
Como implementar a divisão de números racionais com uma só linha de código?
R: Reaproveitando a função responsável pela multiplicação.
*/