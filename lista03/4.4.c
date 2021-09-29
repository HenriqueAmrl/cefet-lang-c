float maiordedois(int n1,int n2) {
    if(n1 > n2) return n1;
    else return n2;
}


float maiordetres(int n1, int n2, int n3) {
    return maiordedois(n1, n2) > n3 ? maiordedois(n1, n2): n3;
}


void main() {
    printf("%f", maiordetres(4, 9, 8));
}