#include<stdio.h>
#include<stdlib.h>

int fatorial (int f)
{
    if (f == 1) 
    return 1;
    else 
    return f * fatorial(f-1);
}

int main()
{
   int d;
    printf("Insira um valor para o fatorial ");
    scanf("%d", &d);

    printf("O valor do fatorial e : %d",fatorial(d));
}