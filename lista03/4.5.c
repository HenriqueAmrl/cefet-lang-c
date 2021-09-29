int triangulo(int a,int b,int c) {
    if(a + b > c && a + c > b && b + c > a){
        if(a == b && a == c) return 3;
        else if(a == b || a == c || b == c) return 2;
        else return 1;
    }
    else
        return 0;
}


int main() {
    int a, b, c;

    printf("Digite os três lados de um triângulo: ");
    scanf("%d%d%d", &a, &b, &c);

    int triang = triangulo(a, b, c);
    if(triang != 0){
        printf("Os 3 lados formam um triangulo ");
        if(triang == 3)
            printf("Equilatero\n");
        else if(triang == 2)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um triângulo!\n");
}