#include <stdio.h>
#include<stdlib.h>

int potenciador (int nb, int ne)
{
  /* Inicializacoes */
  int i = 0;
  int potenciador = 0;
  /* Calculo da potencia */
 // for (int i = 0; i != ne; i++) 
 /* {
    potencia = potencia * nb;

  }*/
  if (ne == 0 ) return potencia;
  else if ( ne < potencia )return potencia = potenciador(nb, ne-1)*potencia; 
}

int main() 
{
  int nb,        /* base                         */ 
      ne;        /* expoente                     */
      
  printf("\nCalculo de potencias\n");
  printf("\nDigite um numero da base : ");
  scanf("%d", &nb);
  printf("Digite um numero de seu exponente: ");
  scanf("%d", &ne);

  printf("\nO valor de %d elevado a %d: %d", nb, ne, potenciador(nb,ne));
  return 0;
}