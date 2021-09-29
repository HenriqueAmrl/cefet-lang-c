/*
-Aluno: Carlos Henrique do Amaral Reis
-Programação estruturada - 2021/1
-Atividade avaliativa 1
*/


#include <stdio.h>


//Questão 1
void menorMaior(int* a, int* b) {
    if(*b > *a) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}


//Questão 2
int quantidadeDeDivisores(int num) {
    int c, result = 0;
    for(c = 1; c <= num; ++c) {
        if(num % c == 0) {
            ++result;
        }
    }
    return result;
}


//Questão 3
int primo(int num) {
    if(quantidadeDeDivisores(num) == 2) {
        return 1;
    }
    
    return 0;
}


//Questão 4
int menorDivisorPrimo(int num) {
    if(num == 1) {
        return 1;
    }
    
    int c;
    for(c = 1; c < num; ++c) {
        if(primo(c) == 1 && num % c == 0) {
            return c;
        }
    }

}


//Questão 5
int mmc(int a, int b) {
    int resultado = 1;
    while(!(a == b && b == 1)) {
        int primoa = menorDivisorPrimo(a);
        int primob = menorDivisorPrimo(b);
        menorMaior(&primoa, &primob);
        int divisor = primoa;

        a = a % divisor == 0 ? a / divisor:a;
        b = b % divisor == 0 ? b / divisor:b;

        resultado *= divisor;
    }

    return resultado;
}


void main() {
    printf("-=-=-=-=-=-=Manipulação de números inteiros-=-=-=-=-=-=\n\n");
    int n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("\n\n-=-=-=-=-=-=Análise-=-=-=-=-=-=\n");

    int maior = n1;
    int menor = n2;
    menorMaior(&maior, &menor);

    printf("\nMenor número entre %d e %d: %d", n1, n2, menor);
    printf("\nMaior número entre %d e %d: %d", n1, n2, maior);

    printf("\nQuantidade de divisores de %d: %d", n1, quantidadeDeDivisores(n1));
    printf("\nQuantidade de divisores de %d: %d", n2, quantidadeDeDivisores(n2));

    printf("\nPrimalidade de %d: %s", n1, primo(n1) == 1 ? "VERDADEIRA":"FALSA");
    printf("\nPrimalidade de %d: %s", n2, primo(n2) == 1 ? "VERDADEIRA":"FALSA");

    printf("\nMenor divisor primo de %d: %d", n1, menorDivisorPrimo(n1));
    printf("\nMenor divisor primo de %d: %d", n2, menorDivisorPrimo(n2));

    printf("\nMMC entre %d e %d: %d\n", n1, n2, mmc(n1, n2));
}
