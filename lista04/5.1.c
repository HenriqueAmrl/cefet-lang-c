#include <stdio.h>

int piso(float num) {
    int fl;
    fl = num;
    return fl;
}


int teto(float num) {
    return piso(num)+1;
}

void main() {
    printf("%d\n", piso(4.1));
    printf("%d", teto(4.1));
}