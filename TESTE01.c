#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int a, b;
    scanf ("%d %d",&a, &b);
    double media;
    media = (a+b)/2.0;
    printf("A media de %i + %d = %f", a, b, media);
    return EXIT_SUCCESS;
}