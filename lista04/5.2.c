#include <stdio.h>


float expon(int num, int exp) {
    float res;
    int c = 0;
    if(exp >= 1) {
        for(c = 1; c <= exp; c = c+1) {
            if(c == 1) res = num;
            else res = num * res;
        }
        return res;
    }
    else if(exp <= -1) {
        res = 1/root(num, exp*(-1));
        return res;
    }
    else return 1;
}


void main() {
    printf("%f", expon(-3, -2));
}