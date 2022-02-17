#include <stdio.h>
#include<string.h>

void forca (int estado){
    if (estado==0){
    printf("\n -------------------");
    printf("\n|                   |");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n -----");

} else if (estado == 1){
    printf("\n -------------------");
    printf("\n|                   |");
    printf("\n|                 (*-*)");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n -----");
}else if (estado == 2){
    printf("\n -------------------");
    printf("\n|                   |");
    printf("\n|                 (*-*)");
       printf("\n|                ||  ");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n -----");
}  else if (estado == 3){
    printf("\n -------------------");
    printf("\n|                   |");
    printf("\n|                   (*-*)");
    printf("\n|                   /||  ");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n -----");  
}else if (estado == 4){
    printf("\n -------------------");
    printf("\n|                   |");
    printf("\n|                   (*-*)");
    printf("\n|                   /||\\  ");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n -----");
}else if (estado == 5){
    printf("\n -------------------");
    printf("\n|                   |");
    printf("\n|                   (*-*)");
    printf("\n|                   /||\\  ");
        printf("\n|               /      ");    
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n -----");
}else if (estado == 6){
    printf("\n -------------------");
    printf("\n|                   |");
    printf("\n|                   (*-*)");
    printf("\n|                   /||\\  ");
    printf("\n|                   /  \\ ");       
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n_________JOGO FINALIZADO______|");
    printf("\n -----");
}


int main(void) {
    //1ºparte
    char p_sec[100];
    printf("Jogador 1 :\n");
    printf("Informe a palavra secreta\n");
    fgets(p_sec,100,stdin);
    printf("A palavra secreta é: %s", p_sec);
    printf("A palavra tem %lu caracteres",  strlen(p_sec)-1);
    for(int=0;i<30;i++){
        print("\n");
}

  //2ºparte
    p_sec[strlen(p_sec)-1]='\0'; 
    cha p_tela[100];
    strcpy(p_tela, p_sec);

    for (int i=0;i<strlen(p_tela);i++)
    {
        p_tela[i]='_';
    }

    int erros = 0;
    while (1)
    {

        forca(erros);
        printf("\n Adivinhe: ");
        for (int i = 0; i < strlen(p_tela); i++)
        {
            printf("%c ", p_tela[i]);
        }

        printf("\n Letra:");
        char letra;
        scanf(" %c", &letra);
        int incerteza = 1;
        for (int i = 0; i < strlen(p_tela); i++)
        {
           if (letra == p_sec[i])
           {
               p_tela[i]=letra;
               incerteza = 0; 
           } 
        }
        if (incerteza ==1)
        {
            erros++;
        }
        if (strcmp(p_tela,p_sec)==0)
        {
            printf("\n VENCEU NOSSA QUE JOGADOR INCRIVEL!");
            break;
        }
        
        if (erros==6)
        {
          forca(erros);  
          break;
        }
          
    }
    
    //imprimir a forca e os underlines

    return 0;
}