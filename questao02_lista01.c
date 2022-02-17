#include <stdio.h>
#include<stdlib.h>

int main (void)
{
    int a, b, c, d;//declaracao de variaveis iniciais
    int *pa, *pb, *pc, *pd;//os ponteiros de cada variavel


    printf("Insira um valor para a: ");
    scanf("%d", &a);//leitura de a

    printf("Insira um valor para b: ");
    scanf("%d", &b);//leitura de b

    printf("Insira um valor para c: ");
    scanf("%d", &c);//leitura de c

    printf("Insira um valor para d: ");
    scanf("%d", &d);//leitura de d

    printf("troque os valores das variaveis \n");

    pa = &a;//salvo no ponteiro o endereco de memoria de cada uuma das variaveis
    pb = &b;
    pc = &c;
    pd = &d;

//modifico o valor das variaveis
    printf("Insira um valor para a: \n");
    scanf("%d",pa);
    printf("Insira um valor para b:\n");
    scanf("%d",pb);
    printf("Insira um valor para c: \n");
    scanf("%d",pc);
    printf("Insira um valor para d:\n ");
    scanf("%d",pd);
//aponto o ponteiro para a modificao das variaveis modificadas atraves de *ponteiro_de_alguem
    printf("Insira um valor para a: %d \n",*pa);
    printf("Insira um valor para b: %d \n", *pb);
    printf("Insira um valor para c: %d \n", *pc);
    printf("Insira um valor para d: %d \n", *pd);
    return 0;
}