#include <stdio.h>
#include <stdlib.h>


void ordena_matriz(int ** matriz,  int linhas, int colunas) {
    int menorl, menorc, aux, l;

    //percorrendo linhas
    for(int i = 0; i < linhas; ++i) {
        //percorrendo colunas
        for(int j = 0; j < colunas; ++j) {
            menorl = i;
            menorc = j;

            //percorrendo linhas após o menor
            for(int k = i; k < linhas; ++k) {
                //percorrendo colunas
                for(l = 0; l < colunas; ++l) {
                    //somente após o menor
                    if(!(k == i && l <= j)) {
                        if(matriz[k][l] < matriz[menorl][menorc]) {
                            menorl = k;
                            menorc = l;
                        }
                    }
                }
            }
            if (i != menorl || j != menorc) {
                    aux = matriz[i][j];
                    matriz[i][j] = matriz[menorl][menorc];
                    matriz[menorl][menorc] = aux;
            }
        }
    }
}


void main() {
    int l = 5;
    int c = 5;
    int ** matriz;
    
    //Alocação de memória
    matriz = (int**)malloc(sizeof(int*)*l);
    for(int h = 0; h < l; ++h)
        matriz[h] = (int*)malloc(sizeof(int)*c);

    //Atribuição de valores para teste
    for(int i = 0; i < l; ++i)
        for(int j = 0; j < c; ++j) {
            matriz[i][j] = 100 - i * j;
        }
    
    for(int i = 0; i < l; ++i) {
        printf("\n");
        for(int j = 0; j < c; ++j) {
            printf("%i\t", matriz[i][j]);
        }
    }

    ordena_matriz(matriz, l, c);
    printf("\n____________________________\n");
    for(int i = 0; i < l; ++i) {
        printf("\n");
        for(int j = 0; j < c; ++j) {
            printf("%i\t", matriz[i][j]);
        }
    }
}