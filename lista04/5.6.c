#include <stdio.h>


int oposto(int num) {
    int c;
    int res = num;
    
    //Positivos
    if(num > 0) {
        for(c=0; c < 2; ++c) {
            int c2;
            for(c2=0; c2 < num; ++c2) {
            --res;
            }
        }
        return res;
    }

    //Negativos
    else if(num < 0) {
        for(c=0; c < 2; ++c) {
            int c2;
            for(c2=0; c2>num; --c2) {
            ++res;
            }
        }
        return res;
    }

    //Zero
    else return 0;
}


int absoluto(int num) {
    int c;
    int res = num;
    
    //Positivos
    if(num >= 0) return res;

    //Negativos
    else if(num < 0) {
        for(c=0; c < 2; ++c) {
            int c2;
            for(c2=0; c2>num; --c2) {
            ++res;
            }
        }
        return res;
    }
}


int subtracao(int n1,int n2) {
    int c;
    int res = n1;
    for(c=1; c <= n2; ++c) {
        --res;
    }
    return res;
}


int adicao(int n1,int n2) {
    int c;
    int res = n1;
    for(c=1; c <= n2; ++c) {
        ++res;
    }
    return res;
}


int multiplicacao(int n1,int n2) {
    int c, c2;
    int res = n1;
    for(c=1; c < n2; ++c) {
        for(c2=1; c2 <= n1; ++c2) {
        ++res;
        }
    }
    return res;
}


int divisao(int n1, int n2) {
    int res = 0;
    while(n1 >= n2) {
        n1 = subtracao(n1, n2);
        ++res;
    }
    return res;
}


int resdiv(n1, n2) {
    int res = 0;
    while(n1 >= n2) {
        n1 = subtracao(n1, n2);
    }
    return n1;
}


void main() {
    printf("Oposto: %i\n", oposto(-7));
    printf("Absoluto: %i\n", absoluto(8));
    printf("Subtração: %i\n", subtracao(100, 98));
    printf("Adição\t%i\n", adicao(50, 22));
    printf("Multiplicação:\t%i\n", multiplicacao(10, 15));
    printf("Divisão:\t%i\n", divisao(110, 10));
    printf("Resto da divisão:\t%i\n", resdiv(111, 10));
}