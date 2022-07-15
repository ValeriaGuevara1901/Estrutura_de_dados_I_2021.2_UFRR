#include <stdio.h>
void main() 
{
    float A, B, C;
    printf("Insira um valor para a 1 Nota: ");
    scanf("%f", &A);
    printf("Insira um valor para  a 2 Nota: ");
    scanf("%f", &B);//até aqui insirem os valores normalmente
    printf("Insira um valor para  a 3 Nota: ");
    scanf("%f", &C);//até aqui insirem os valores normalmente
    float X = A + B + C;
    float MEDIA = X/3;
    printf("MEDIA= %.2f", MEDIA);//imprime depois de executada a funcação
}