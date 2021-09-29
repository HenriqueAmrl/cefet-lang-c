#include <stdbool.h>
#include <stdio.h>

bool vogal(char x)
{
    if( x == 'A' || x == 'a' ||
        x == 'E' || x == 'e' ||
        x == 'I' || x == 'i' ||
        x == 'O' || x == 'o' ||
        x == 'U' || x == 'u')
        return true;

    return false;
}


bool minuscula(char x)
{
    if(x >= 97 && x <= 122) return true;
    return false;
}


bool maiuscula(char x)
{
    if(x >= 65 && x <= 90) return true;
    return false;
}


bool letra(char x)
{
    if (maiuscula(x) || minuscula(x)) return true;
    return false;
}


bool consoante(char x)
{
    if (vogal(x)) return false;
    return true;
}


bool algarismo(char x)
{
    if(x >= 48 && x <= 57) return true;
    return false;
}


void main()
{
    char caractere;
    caractere = 'c';

    if(algarismo(caractere))
    {
        printf("É um número.");
    }

    else if(letra(caractere))
    {
        printf("É uma letra.\n");

        if(maiuscula(caractere)) printf("É maiúscula.\n");
        else if (minuscula(caractere)) printf("É minúscula.\n");

        if(vogal(caractere)) printf("É uma vogal.\n");
        else if(consoante(caractere)) printf("É uma consoante.\n");
    }

}