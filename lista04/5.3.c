#include <stdbool.h>
#include <stdio.h>


bool primo(int n1) {
    int c;
    if(n1 == 1) return false;
    
    for(c = 1; c<n1; ++c) {
        if(c !=1 && n1 % c == 0) return false;
    }
    return true;
}


void main() {
    printf("%s", primo(7) ? "True":"False");
}
