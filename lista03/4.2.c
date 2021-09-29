float fabs(float num) {
    if(num > 0) return num;
    else return num*(-1);
    }


void main() {
    printf("%f\n", fabs(433));
    printf("%f", fabs(-433));
}