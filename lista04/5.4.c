#include <stdio.h>


int fatorial(int num) {
    int c;
    int res;

    if(num == 0) return 1;

    res = num * fatorial(num-1);

    return res;
}


void main() {
    printf("%i", fatorial(5));
}