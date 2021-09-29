#include <stdlib.h>
#include <stdio.h>


void inverte_vetor(int vet[], int len) {
    int c, j, aux;
    j = len -1;
    for(c=0; c < len/2; ++c) {
        aux = vet[c];
        vet[c] = vet[j];
        vet[j] = aux;
        --j;
    }
}


void main() {
    int len = 4;
    int vetor[4] = {1,2,3,4};
    int c;
    inverte_vetor(vetor, len);
    int i;
    for(i = 0; i < 4; ++i) {
        printf("%d\n", vetor[i]);
    }
}
