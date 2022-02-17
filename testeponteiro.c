#include <stdio.h>

int main (void)
{
    int a, b, c;
    int *pc;

    a = 2;
    c = 3;
    pc = &c;//salvo endereço de memoria de c no ponteiro pc
    *pc = 3;//acesso a modificacao de valor da variavel de c

    b = a +(*pc);
    printf("%d",b);
    return 0;
}