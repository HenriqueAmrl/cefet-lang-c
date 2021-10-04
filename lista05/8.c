#include <stdio.h>


int bispo(int xi, int yi, int xf, int yf) {
    if(0 <= xf && xf <= 8 && //dentro do intervalo de x
       0 <= yf && yf <= 8 && //dentro do intervalo de y
       !(xi == xf && yi == yf) && //diferente dele mesmo
       (xi - yi == xf - yf || //diagonal1
        xi + yi == xf + yf)) //diagonal2
        return 1;
    else
        return 0;
}


void main() {
    printf("%d", bispo(8, 8, 7, 7));
    printf("\n%d", bispo(8, 8, 6, 7));
}
