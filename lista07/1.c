#include <stdio.h>

struct pessoa
{
    char* sexo;
    char* estadoCivil;
};



void main() {
    struct pessoa joao;
    joao.sexo = "masculino";
    joao.estadoCivil = "solteiro";
    printf("%s, %s", joao.sexo, joao.estadoCivil);
