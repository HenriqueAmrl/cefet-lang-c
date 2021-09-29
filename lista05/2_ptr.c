#include <stdlib.h>
#include <stdio.h>


void multiplica_pelo_indice(int * vet, int len) {
    int c;
    for(c=0; c < len; ++c) {
        vet[c] *= c;
    }
}


void main() {
    int len = 4;
    int * vetor = (int*)malloc(sizeof(int[len]));
    int c;
    for(c=0; c<4; c++)
        vetor[c] = c;
    multiplica_pelo_indice(vetor, len);
    int i;
    for(i = 0; i < 4; ++i) {
        printf("%d\n", vetor[i]);
    }
    free(vetor);
}
