#include <stdio.h>

int main()
{
    printf("Hello world my name is Valeria\n");

    int r = 7;
    int g = 2;
    
    printf ("A soma desses numeros da: %d\n", r+g);

    char c = 'a';
    printf ("A letra a exibir e : %c\n", c);

    /*aqui vamos mexer um pouco com a tabela ascii*/
    char b = 97;
    printf ("A letra a exibir e : %c, utilizando a referencia da tabela ascii\n", b);

    int y = 5;

    printf ("diferenca entre n++ %i\n", y++);/*Explicação de por que deu 5 na tela, o nosso codigo em c lee-se da direita para esquerda e dessa mesma forma é executado logo
    como y = 5 exibe-se 5 e depois incremente*/
    printf("%i\n",y);/*aqui dara 6 pois após ser incrementado na linha anterior, foi exibido diretamente */
    printf ("diferenca entre ++n %i\n", ++y);

    return 0;
}