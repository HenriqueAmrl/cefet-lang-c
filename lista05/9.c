#include <stdio.h>
#include<stdlib.h>


int cavalo(int xi, int yi, int xf, int yf) {
    if(0 <= xf && xf <= 8 && //dentro do intervalo de x
       0 <= yf && yf <= 8 && //dentro do intervalo de y
       !(xi == xf && yi == yf) && //diferente dele mesmo
       (
            (
                (abs(xi + xf) == 2 || abs(xi - xf) == 2) &&
                (abs(yi + yf) == 1 || abs(yi - yf) == 1)
            ) ||
            (
                (abs(yi + yf) == 2 || abs(yi - yf) == 2) &&
                (abs(xi + xf) == 1 || abs(xi - xf) == 1)
            )
       )
    )        
        return 1;
    else
        return 0;
}


void main() {
    printf("%d", cavalo(5, 5, 6, 7));
    printf("\n%d", cavalo(5, 5, 6, 6));
}