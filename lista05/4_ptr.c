#include <stdlib.h>
#include <stdio.h>


int ordenado(int * vet, int len) {
    int menor, aux;
    for(int i = 0; i < len; ++i) {
        menor = i;
        
        for(int j = i + 1; j < len; ++j)
            if(vet[j] < vet[menor])
                menor = j;

        if(i != menor) {
            aux = vet[i];
            vet[i] = vet[menor];
            vet[menor] = aux;
        }
    }
}


void main() {
    int len = 5;
    int * vetor = (int*)malloc(sizeof(int[len]));
    for(int c = 0; c < len; ++c)
        vetor[c] = 10 - c;
    ordenado(vetor, len);
    for(int x = 0; x < len; ++x)
    printf("%d\n", vetor[x]);
    free(vetor);
}
