#include <stdlib.h>
#include <stdio.h>


void multiplica_pelo_indice(int vet[], int len) {
    int c;
    for(c=0; c < len; ++c) {
        vet[c] *= c;
    }
}


void main() {
    int len = 4;
    int vetor[] = {1,2,3,4};
    multiplica_pelo_indice(vetor, len);
    
    for(int i = 0; i < 4; ++i) {
        printf("%d\n", vetor[i]);
    }
}
