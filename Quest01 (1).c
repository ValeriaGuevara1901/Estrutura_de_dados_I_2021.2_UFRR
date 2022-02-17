#include <stdio.h>
#include<math.h>

int soma(int n1,int n2){
    int cont = abs(n2-n1); int sum = n1;
    if (cont == 0) return sum;
    else if (cont==1) return (sum+n2);
    else if (cont>1) sum = sum + soma(n1+1,n2);
    return sum;
}
int main(){
    int um,dois;
    printf("Insira 2 inteiros (separados por espaço).\n");
    scanf("%d %d",&um,&dois);
    printf("%d",soma(um,dois));
    return 0;
}
