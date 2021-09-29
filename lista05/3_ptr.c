#include <stdlib.h>
#include <stdio.h>


int maior_valor(int * vet, int len) {
    int c, maior;
    
    for(c=0; c < len; ++c) {
        if(c == 0)
            maior = vet[c];
        else if (vet[c] > maior)
            maior = vet[c];
    }
    return maior;
}


void main() {
    int len = 200;
    int * vetor = (int*)malloc(sizeof(int[len]));
    int c;
    for(c=0; c<len; c++)
        vetor[c] = c;
    printf("%d", maior_valor(vetor, len));
    free(vetor);
}
