#include <stdio.h>
#include <stdlib.h>

void employee(char * name, char * d, char * m, char * y, float salary, char chief)
{
    printf("%s, nascido em %s/%s/%s, recebe R$%.2f por mês, é chefe: %c", name, d, m, y, salary, chief);

}


void main()
{
    employee("Henrique", "09", "04", "2001", 1000, 'N');
}
