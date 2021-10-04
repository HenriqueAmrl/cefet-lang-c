#include <stdio.h>


int torre(int xi, int yi, int xf, int yf) {
    if(0 <= xf && xf <= 8 && //dentro do intervalo de x
       0 <= yf && yf <= 8 && //dentro do intervalo de y
       !(xi == xf && yi == yf) && //diferente dele mesmo
       ((xi - xf == 1 || xi + xf == 1) && yi == yf || //somente um movimento horizontal
        (yi - yf == 1 || yi + yf == 1) && xi == xf //somente um movimento vertical
       ))
        return 1;
    else
        return 0;
}


void main() {
    printf("%d", torre(5, 5, 4, 5));
    printf("\n%d", torre(5, 5, 6, 7));
}