#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//---DEFINITION OF ESTRUCT----//
typedef struct _doubly_node
{
    char val[256];
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
    strcpy(node ->val, val);
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
}
//verificar se a lista esta vazia
bool list_is_empty(List *L, char val[])
{
  return L ->size == 0;
}

//-----------teste da funcao  de reversa de adicao pela calda---//
void list_add_last(List *L, char val[])
{
  Node *p = create_node(val);
  if (list_is_empty(L)) 
  {
    L->begin = p;
  } 
  else 
  {
    p->prev = L->end;
    L->end->next = p;
  }
  L->end = p;
  L->size++;
}


//--------TEST IN CODE-------//
int main(void)
{
   List *L =create_list();
    list_add_last(L,"ss");
  
    list_print(L);
    destroy_list(&L);

    return 0;
}