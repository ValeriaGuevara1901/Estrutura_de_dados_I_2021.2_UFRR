#include <stdio.h>
#include<stdlib.h>

//Vamos definir as constantes
#define Constante 5
#define Quebrado 9,3
#define Letra 'a'

//o main 
int main ()
{
    // definindo a constante na funcao main
    const int Lado = 10;

    //imprimir
    printf("%d \n", Constante);
    printf("%d \n", Quebrado);
    printf("%d \n", Letra);// ele exibiu  97 porque esta pegando a referencia da tabela ascii
    printf("%d \n", Lado);
}