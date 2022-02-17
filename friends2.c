#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//---DEFINITION OF ESTRUCT----//
typedef struct _doubly_node
{
    char val[255];
    struct _doubly_node *prev;
    struct _doubly_node *next;
} Doubly_node,Node;

typedef struct _doubly_linked_list
{
    Doubly_node *begin;
    Doubly_node *end;
    size_t size;
} Doubly_linked_list, List;

//--------CONSTRUCTOR E DESTRUTOR-----------//
Node *create_node (char val[])
{
    Node *node = (Node*)malloc(sizeof(Node));
    strcpy(node->val,val);
    node ->next = NULL;
    node ->prev = NULL;
    return node;
}


List *create_list()
{
    List *L = (List*)malloc(sizeof(List));
    L ->begin = NULL;
    L ->end = NULL;
    L ->size = 0;
    return L;
}

void destroy_list(List **L_ref)
{
    List *L = *L_ref;
    Node *p = L ->begin;
    Node *aux = NULL;

    while(p != NULL)
    {
        aux = p;
        p = p->next;
        free(aux);
    }

    //----desalocar-----//
    free(L);
    *L_ref = NULL;
}

//----------funções--//
void list_print(List *L)
{
  Node *p = L ->begin;
  printf("*L ->");
  while(p != NULL )
  {
    printf ("%s ->", p ->val);
    p = p->next;
  }
  printf("NULL\n");
  //this is a ternary IF! the IF of the PRO programers
	L->end == NULL ? printf("L->end = NULL\n") 
                  : printf("L->end = %s\n", L->end->val);
}
//verificar se a lista esta vazia

bool list_is_empty(List *L) 
{ 
	return L->size == 0;
}

void list_add_last(List *L, char val[]) {
  	Node *p = create_node(val);
  	if (list_is_empty(L)) {
    		L->end = p;
    		L->begin = p;
  	} else {
    		p->prev = L->end;
    		L->end->next = p;
  	}
  	L->end = p;
  	L->size++;
}



//--------TEST IN CODE-------//
int main(void)
{
  List *L1 =create_list();
  List *L2 =create_list();
//------------linha 01----// 
    char linha1[500];
    fgets(linha1, sizeof(linha1), stdin);
    //printf("%s",linha1);
    fflush(stdin);
  
    char *token;
    token = strtok(linha1, "\n ");

    while (token != NULL){
      list_add_last(L1,token);
      token = strtok(NULL,"\n");
    }
//------------linha 02----// 
    char linha2[500];
    fgets(linha2, sizeof(linha2), stdin);
    //printf("%s",linha2);
    fflush(stdin);
  
    token = NULL;
    token = strtok(linha2, "\n ");

    while (token != NULL){
      list_add_last(L2,token);
      token = strtok(NULL,"\n");
    }   
  //------------receber amigo----//  
    char friend[500];
    fgets(friend, sizeof(friend), stdin);
    //printf("%s",linha2);
    fflush(stdin);
  
    token = NULL;
    token = strtok(friend, "\n ");

    while (token != NULL){
      list_add_last(friend,token);
      token = strtok(NULL,"\n");
    } 
    
  list_print(L1);
  list_print(L2);

    
  destroy_list(&L1);
  destroy_list(&L2);
    return 0;
}