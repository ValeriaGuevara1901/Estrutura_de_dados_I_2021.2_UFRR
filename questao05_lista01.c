#include <stdio.h>
#include<stdlib.h>
#include <string.h>

#define SIZE 69 //LIMITAR PARA 69 CARACTERES

void inicio (char **p_palavras, int numeros_d_palavras)
{
    int size, i;
    char entrada[SIZE];

    for ( i = 0 ; i < numeros_d_palavras; i++)
    {
        gets(entrada);
        printf(" %d:",i);
        p_palavras[i] = malloc((size+1)*sizeof(char));
        size =strlen(entrada);
        strcpy(p_palavras[i],entrada);
    }
}

//para exibir o que esta escrito 
void escreve(char **p_palavras, int numero_d_palavras)
{
    for (int i = 0; i < numero_d_palavras; i++)
    {
        printf("%s\n",p_palavras[i]);
    }
}

int main ()
{
    char **p_palavras;//declarei o ponteiro
    
    int numero_d_palavras,size;//para controlar o for

    printf("Insira a quantidade de palavras que deseja armazenar na matriz:");
    scanf("%d",&numero_d_palavras);

    p_palavras = malloc(numero_d_palavras*sizeof(char*));//vetor de ponteiors
//o size é otamanho que eu solicito para usuario para saber o tamanho de cada string
  
  //para entrar na funncao
  inicio(p_palavras, numero_d_palavras);
  escreve(p_palavras, numero_d_palavras);

  // liverar o espaço de memoria usado 
    for (int i = 0 ; i < numero_d_palavras ; i++)
    {
        free(p_palavras[i]);
    }
    free(p_palavras);

    return 0;
}