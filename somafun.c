#include<stdio.h>
#include<stdlib.h>

int soma (int n1, int n2)
{
    int valorsoma;
    int i = n1 - n2;

    if (i == 0) return valorsoma;
     else if ( i <= n2) return valorsoma = (soma(n1,n2)+valorsoma);
   /* for (int i = n1; i <= n2; i++)
    {
        valorsoma = valorsoma + i;
    }*/
}

int main (void)
{
    int n1, n2;
    printf("Por favor inserir 2 numeros com valores inteiros entre 3 ate 7\n");
    printf("Por favor inserir o n1\n");
    scanf("%d",&n1);
    printf("Por favor inserir o n2\n");
    scanf("%d",&n2);
    
    //chamada da função
    printf("Resultado : %d\n",soma(n1,n2));

    return 0;
}