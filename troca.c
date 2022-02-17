#include <stdio.h>

void troca (float *a, float *b)// a e b seria x=a e b=y 
{   //inicio do escopo
    float aux;  //troca como se fosse um recepente   
    aux = *a;
    *a = *b;
    *b = aux;
    //o poder de um poteiro,consigo alterar o valor o qual eu estou acessando usando como referencia a memoria e não o valor da variavel
}//fim do escopo

int main() 
{
    
    float x, y;
    printf("Insira um valor para X: ");
    scanf("%f", &x);
    printf("Insira um valor para Y: ");
    scanf("%f", &y);//até aqui insirem os valores normalmente
    
    troca(&x,&y);//chamamos a funçaõ e executa plenamente 
    
    printf("X = %.2f e Y = %.2f", x, y);//imprime depois de executada a funcação
    
    return 0;
}