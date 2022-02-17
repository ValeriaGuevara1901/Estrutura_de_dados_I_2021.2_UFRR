#include <stdio.h>
#include<stdlib.h>

int main (void)
{
    int vetor[9];//declaracao o nome do vetor e o espaço que ele deve ter 

    printf("Insira os valores para preencher o vetor\n");
    //preenchendo o vetor
    for (int i = 0; i< 10 ; i++)
    {    
        printf("Insira um valor para a posicao %d: \n",i+1);
        scanf("%d", &vetor[i]);//leitura do valor que vetor recebe
    }

    //aponto o ponteiro para ( *ponteiro_de_alguem) o valor armazenado no vetor fiz forçando o vetor mesmo
        int*pvetor0 =&vetor[0];//salvando o endereço de memoria do vetor
        pvetor0 = vetor;//salvando o valor do vetor no endereço de memoria anteriormente localizado

        int*pvetor1 =&vetor[1];
        pvetor1 = vetor;

        int*pvetor2 =&vetor[2];
        pvetor2 = vetor;

        int*pvetor3 =&vetor[3];
        pvetor3 = vetor;

        int*pvetor4 =&vetor[4];
        pvetor4 = vetor;

        int*pvetor5 =&vetor[5];
        pvetor5 = vetor;

        int*pvetor6 =&vetor[6];
        pvetor6 = vetor;

        int*pvetor7 =&vetor[7];
        pvetor7 = vetor;

        int*pvetor8 =&vetor[8];
        pvetor8 = vetor;

        int*pvetor9 =&vetor[9];
        pvetor9 = vetor;

        //imprimir ponteiros
        printf("o valor na posicao 1 para a: %d \n",*(pvetor0+0));
        printf("o valor na posicao 2 para a: %d \n",*(pvetor1+1));
        printf("o valor na posicao 3 para a: %d \n",*(pvetor1+2));
        printf("o valor na posicao 4 para a: %d \n",*(pvetor1+3));
        printf("o valor na posicao 5 para a: %d \n",*(pvetor1+4));
        printf("o valor na posicao 6 para a: %d \n",*(pvetor1+5));
        printf("o valor na posicao 7 para a: %d \n",*(pvetor1+6));
        printf("o valor na posicao 8 para a: %d \n",*(pvetor1+7));
        printf("o valor na posicao 9 para a: %d \n",*(pvetor1+8));
        printf("o valor na posicao 10 para a: %d \n",*(pvetor1+9));
    
    return 0;
}