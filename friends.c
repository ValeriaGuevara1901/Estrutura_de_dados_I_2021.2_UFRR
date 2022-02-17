#include<stdio.h>

int main(void)
{
    //lista atual
  char nomes[3][40];
  char nomes_novos[3][40];
  int l;
  int opcao;
  char indicado;
  
  printf("Digite o nome de seu amigo:");
  for (l = 0; l < 4; l++)
  {
    printf("\nAmigo na posicao %d: ",l);
    scanf("%40[^\n]",nomes[l]);
    scanf("%c");
  }
  
  printf("Lista atual de amigos do Luiggy:");
  for (l = 0; l < 4; l++)
  {
    printf("\nNome na posicao %d: %s", l, nomes[l]);
  }
  ////---------------------------------------------------------//
  //insirindo novos amigos na lista de amigos//
  printf("\nDeseja inserir novo(s) amigos na sua lista?\n");
  printf("\n1 = Sim 2 = nao\n");
  scanf("%d",opcao);
  switch (opcao == 1 || opcao == 2)
    {
        case 1:
            printf("\nQuais os nomes de seu(s) novo(s) amigo(s)?\n");
            for (int l2 = 0; l2 < 4; l2++)
            {
                printf("\nAmigo na posicao %d: ",l2);
                scanf("%40[^\n]",nomes_novos[l2]);
                scanf("%c");
            }
            //--------------Para qual dos amigos indicar----------------------------//
            printf("\nPara qual de seus amigos da sua lista você vai indicar ?");
            scanf("%c",indicado);
             for (int l = 0; l < 4; l++)
            {
                if (indicado == nomes[l])
                {
                    for (int l = 0; l < 4; l++)
                    {
                        printf(nomes[l]);
                        for (int l2 = 0; l2 < 4; l2++)
                        {
                            printf(nomes_novos[l2]);
                        }
                    }
                }
            }
    
        break;
//-------------Quando o luiggy nao indica para ninuem-------------------//
        case 2:
            printf("Lista atual de amigos do Luiggy sem inserir amigos:");
            for (int l = 0; l < 4; l++)
            {
                printf(nomes[l]);
            }

        break;
    }
  return 0;
}