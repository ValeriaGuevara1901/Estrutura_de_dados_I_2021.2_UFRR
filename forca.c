#include<stdio.h>
#include<stdlib.h>

int main(){
    char banco [10][3]={"cavalo"},{"cachorro"},{"papagaio"};
    int palavra = 0;
    char PALAVRA[10];
    int i;

    for(i=0;i<10;i++){
        printf("%c",banco[palavra][i]);
    }

    for(i=0;i<10;i++){
       PALAVRA[i]=banco[palavras][i];
    }
    printf("\n\n\n%s\n\n",PALAVRA);

    srand(time(NULL));

    palavra = rand() % 3;

System("pause");
    return 0;
}