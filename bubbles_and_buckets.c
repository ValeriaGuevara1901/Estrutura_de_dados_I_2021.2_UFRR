#include <stdio.h>
int permuta(int v[], int p, int q, int r)
{
    int iLocal, jLocal;
    int x=0;
    int contagem=0;
    int w[r - p];
    iLocal = p;
    jLocal = q;
    while (iLocal < q && jLocal < r)
    {
        if (v[iLocal] <= v[jLocal])
            w[x++] = v[iLocal++];
        else
        {
            w[x++] = v[jLocal++];
            contagem += q - iLocal;
        }
    }
    while (iLocal < q)
        w[x++] = v[iLocal++];
    while (jLocal < r)
        w[x++] = v[jLocal++];
    for (iLocal = p; iLocal < r; iLocal++)
        v[iLocal] = w[iLocal - p];

    return contagem;
}

int mergeSort(int ini, int v[],int size)
{
    int q;
    int indL = 0;
    int indR = 0;
    int permut = 0;
    if (ini < size - 1)
    {
        q = (ini + size) / 2;   //Metade do tamanho do vetor
        indL = mergeSort(ini, v, q);
        indR = mergeSort(q, v, size);
        permut = permuta(v, ini, q, size);
    }
    return indL + indR + permut;
}
int vet[500000];    //Impossível estourar XD

int main()
{
    int i, input=0;
    while (1)
    {
        scanf("%d", &input);    //Entrada
        if (input == 0)         //Saída do loop
            break;
        for (i = 0; i < input; i++) //Ler os dados e os inserir em vet
            scanf("%d", &vet[i]);
        int j = mergeSort(0, vet, input);//Inicio, vetor, tamanho; Possui recursão por ser Merge
        if (j % 2 == 0)
        {
            printf("Carlos\n");
        }
        else
        {
            printf("Marcelo\n");
        }
    }
}