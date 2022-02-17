#include<stdio.h>
#include<stdlib.h>

void tabuleiro(char casas2[3][3])
{
    system("cls");
    printf("\t %c | %c | %c \n", casas2[0][0],casas2[0][1],casas2[0][3]);
    printf("\t--------------------------------------------------------\n");
    printf("\t %c | %c | %c \n", casas2[1][0],casas2[1][1],casas2[1][3]);
    printf("\t--------------------------------------------------------\n");
    printf("\t %c | %c | %c \n", casas2[2][0],casas2[2][1],casas2[2][3]);
}
int main()
{
    char casas[3][3] = {{'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'},};
    
    char resposta;
    int contador_jogadas,l,c,vez = 0,i,j;
    do
    {
        contador_jogadas = 1;
        for(i=0;i<=2;i++){
            for(j=0;j<=2;j++){
                casas[i][j] = ' ';
            }
        }
        do{
           
            tabuleiro(casas);

            if(vez%2==0){
                printf("Jogador X\n");
            }else{
                printf("Jogador O\n");
            }

            printf("Digite a linha:");
            scanf("%i",&l);
            printf("Digite a coluna:");
            scanf("%i",&c);

            if (l< 1 || c < 1 || 1 > 3|| c > 3){
                l = 0;
                c = 0;
            }else if (casas[l-1][c-1] !=' '){
                l = 0;
                c = 0;
            }else{
                if (vez%2==0){
                    casas[l-1][c-1] = 'X';
                }else{
                    casas[l-1][c-1] = 'O';
                }
                vez++;
                contador_jogadas++;
            }
            //jogador x
            if(casas[0][0]=='X'&& casas[0][1]=='X'&& casas[0][2]=='X'){contador_jogadas = 11};
            if(casas[1][0]=='X'&& casas[1][1]=='X'&& casas[1][2]=='X'){contador_jogadas = 11};
            if(casas[2][0]=='X'&& casas[2][1]=='X'&& casas[2][2]=='X'){contador_jogadas = 11};
            if(casas[0][0]=='X'&& casas[1][0]=='X'&& casas[2][0]=='X'){contador_jogadas = 11};
            if(casas[0][1]=='X'&& casas[1][1]=='X'&& casas[2][1]=='X'){contador_jogadas = 11};
            if(casas[0][2]=='X'&& casas[1][2]=='X'&& casas[2][2]=='X'){contador_jogadas = 11};
            if(casas[0][0]=='X'&& casas[1][1]=='X'&& casas[2][2]=='X'){contador_jogadas = 11};
            if(casas[0][2]=='X'&& casas[1][1]=='X'&& casas[2][0]=='X'){contador_jogadas = 11};

            //jogador o
            if(casas[0][0]=='O'&& casas[0][1]=='O'&& casas[0][2]=='O'){contador_jogadas = 11};
            if(casas[1][0]=='O'&& casas[1][1]=='O'&& casas[1][2]=='O'){contador_jogadas = 11};
            if(casas[2][0]=='O'&& casas[2][1]=='O'&& casas[2][2]=='O'){contador_jogadas = 11};
            if(casas[0][0]=='O'&& casas[1][0]=='O'&& casas[2][0]=='O'){contador_jogadas = 11};
            if(casas[0][1]=='O'&& casas[1][1]=='O'&& casas[2][1]=='O'){contador_jogadas = 11};
            if(casas[0][2]=='O'&& casas[1][2]=='O'&& casas[2][2]=='O'){contador_jogadas = 11};
            if(casas[0][0]=='O'&& casas[1][1]=='O'&& casas[2][2]=='O'){contador_jogadas = 11};
            if(casas[0][2]=='O'&& casas[1][1]=='O'&& casas[2][0]=='O'){contador_jogadas = 11};
        
        }while (contador_jogadas<=9) 

        tabuleiro(casas);

        if(contador_jogadas==10){
            printf("Jogo empatado\n");
        }if(contador_jogadas==11){
            printf("Jogo VENCIDO pelo jogador X\n");
        }if(contador_jogadas==12){
            printf("Jogo VENCIDO pelo jogador O\n");
        }
        printf("Deseja jogar novamente? [S/N]");
        scanf("%s",&resposta);
    }  while (resposta == 'S');
    
}