#include <stdio.h>
#include <stdlib.h>

int ascendente(void const *a, void const *b )
{
    return (*(int*)a - *(int*)b );
}

int descendente(void const *a, void const *b )
{
    return (*(int*)b - *(int*)a );
}

int main(){
    int n, i, num, par, impar;
    
    scanf("%d", &n);
    par = 0;
    impar = 0;
    int nump[n];
    int numi[n];
    
    for(i = 0; i < n; i++){
        scanf("%d", &num);
        if(num%2 == 0){
            nump[par] = num;
            par++;
        }else{
            numi[impar] = num;
            impar++;
        }
    }
    qsort(nump, par, sizeof(int), ascendente);
    qsort(numi, impar, sizeof(int), descendente);
    for(i = 0; i < par; i++){
        printf("%d\n",nump[i]);
    }
    for(i = 0; i < impar; i++){
        printf("%d\n",numi[i]);
    }
    
    return 0;
}