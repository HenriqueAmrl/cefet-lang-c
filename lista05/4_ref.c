#include <stdlib.h>
#include <stdio.h>


int ordenado(int vet[], int len) {
    int menor, aux;
    for (int i = 0; i < (len-1); ++i) {
        menor = i;
        
        for(int j = (i+1); j < len; ++j)
            if(vet[j] < vet[menor])
                menor = j;

        if (i != menor) {
            aux = vet[i];
            vet[i] = vet[menor];
            vet[menor] = aux;
        }
    }
}


void main() {
    int len = 5;
    int vetor[] = {9,2,7,9,1};
    ordenado(vetor, len);
    for(int c = 0; c < len; ++c)
        printf("%d\n", vetor[c]);
}
