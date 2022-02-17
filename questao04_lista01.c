#include <stdio.h>
#include<stdlib.h>

int main (void)
{
   int vetor[9];//declaracao o nome do vetor e o espaço que ele deve ter 

   printf("Preenechemento de numeros randons  dentro  do vetor\n");
    
    //preenchendo o vetor
   for (int i = 0; i< 10 ; i++)
    {    
       vetor[i]= rand();//preenchemento rando do vetor
    }

    //exibir valores que foram preenchidos randomicamente no vetor
   for (int i = 0; i< 10 ; i++)
    {    
      printf ("o vetor[%d]= %d\n",i+1, vetor[i]);//preenchemento rando do vetor
    }

    //comparacao de conteudo do vetor
   for (int i=0; i < 10 ;i++)//linha
   {
      for (int j = 0; j < 10; j ++)//coluna a percorrer no vetor
      {
         if (vetor[i] > vetor [j])
         {
            int auxiliar_armazena = vetor [i];
            vetor[i] = vetor[j];
            vetor[j] = auxiliar_armazena;
         }
      }
   }

    //impressao  
   for (int i = 0; i < 10; i++)
   {
     int *pvetor;
      pvetor = &vetor[i];
      printf("o vetor %d [%d]  = este espaco de memoria %d \n",vetor[i], i+1, pvetor);
    }

    return 0;
}