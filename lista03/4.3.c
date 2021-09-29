#include <stdio.h>

char* divisivel(int n1,int n2) {
    if(n1 % n2 == 0) return "divisivel";
    else return "indivisivel";
}


void main(){
    int n1;
    printf("Digite um número:\n");
    scanf("%d", &n1);
    if(divisivel(n1, 2) == "divisivel") printf("\nO número é par.");
    else printf("\nO número é ímpar.");
}