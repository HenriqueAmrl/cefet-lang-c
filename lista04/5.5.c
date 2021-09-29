#include <stdio.h>


int fib(int n) {
    int res;
    if(n == 1) return 0;
    else if(n == 2) return 1;
    
    res = fib(n-1) + fib(n-2);
    return res;
}


void main() {
    printf("%i", fib(8));
}