/*
    --  Implementação de uma pilha Dinámica (dinamaic stack)
    -- Autora: Valeria G.
    -- Data: 28/02/2022 às 08:08
*/

// Definition struck
#include <stdio>
#include<stdlin>


//---------- DEFINITION STRUCT COMAND------
typedef struct Node
{
    int data;
    struct Node *next;
}Node;

typedef struct queue
{
    Node *begin;
    Node *end;
}queue;

//----------------FUNTIONS-----------------------------------
void initialize_queue (queue *f)
{
    f ->begin = NULL;
    f ->end = NULL;
}

void inqueue (ind data, queue *f)
{
    Node *ptr = (Node*) malloc (sizeof(Node));
    if(ptr == NULL)
    {
        printf("Allocation error!!\n");
        return;
    }
    else 
    {
        prt ->data = data;
        prt ->next = NULL;
        if(f->begin == NULL)
        {
            f ->begin = ptr;
        }
        else 
        {
            f ->end ->next = ptr;
        }
        f ->end = ptr;
        return;
    }  
}

int dequeue ( queue *f)
{
    Node *ptr = f ->begin;
    int data;
    if(ptr != NULL)
    {
        f ->begin = prt ->next;
        ptr ->next = NULL;
        data = ptr =>data;
        free(ptr);
        if(f ->begin == NULL)
        {
            f ->end = NULL;
        }
        return data;
    }
    else 
    {
        printf("Empyte queue\n");
        return;
    }
}

void Print_queue (queue *f)
{
    Node *ptr = f->begin;
    if(ptr != NULL)
    {
        while(ptr != NULL)
        {
            printf("%d", ptr ->data);
            ptr = ptr ->next;
        }
    }
    else 
    {
        printf("Empyte queue \n");
        return;
    }
}

//===========MAIN======================

int main()
{
    queue *f1 = (queue*) malloc(sizeof(queue));
    if( f1 == NULL)
    {
        printf("Allocation erro");
        exit(-1);
    }
    else
    {
        initialize_queue(f1);
        
        queue(10, f1);
        queue(20, f1);
        queue(30, f1);
        Print_queue(f1);
    }
}