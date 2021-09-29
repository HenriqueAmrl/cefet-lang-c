#include <stdlib.h>
#include <stdio.h>


int maior_valor(int vet[], int len) {
    int maior;
    
    for(int c = 0; c < len; ++c) {
        if(c == 0)
            maior = vet[c];
        else if (vet[c] > maior)
            maior = vet[c];
    }
    return maior;
}


void main() {
    int len = 4;
    int vetor[] = {1,2,3,4};
    printf("%d", maior_valor(vetor, len));
}
