#include <stdlib.h>
#include <stdio.h>


float media_matriz(int **matriz, int linhas, int colunas) {
    int soma = 0;
    for(int i = 0; i < linhas; ++i)
        for(int j = 0; j < colunas; ++j) {
            soma += matriz[i][j];
        }

    return soma / (linhas * colunas);
}


void main() {
    int l = 10;
    int c = 5;
    int ** matriz;
    
    //Alocação de memória
    matriz = (int**)malloc(sizeof(int*)*l);
    for(int h = 0; h < l; ++h)
        matriz[h] = (int*)malloc(sizeof(int)*c);

    //Atribuição de valores para teste
    for(int i = 0; i < l; ++i)
        for(int j = 0; j < c; ++j) {
            matriz[i][j] = 100 - l*c;
        }
    printf("%f", media_matriz(matriz, l, c));

}