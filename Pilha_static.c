/*
    --  Implementação de uma pilha Estsática (static stack)
    -- Autora: Valeria G.
    -- Data: 27/02/2022 às 22:41
*/

// Definition struck
#include <stdio.h>
#include<stdlin.h>
#include <stdbool.h>

//---------- DEFINITION STRUCK COMAND------
typedef struck _stack
{
    long capacity;
    int top; //controlador
    int *date;
} Stack;

// ----- construct and descontruct ------
Stack *Stack_create(long capacity)
{
    Stack *S = (Stack*) malloc(sizeof(Stack));
    S ->capacity = capacity;
    S ->tpo = -1;
    S ->data = malloc (capacity * sizeof(int));
    return S;
}

void Strack_destroy(Stack **S ref)
{
    Stack *S = *S_ref;
    free(S->date);
    free(S);
    *S_ref = NULL;
}

//----- FUNTION-----------
bool Stack_is_empty(Stack *S)
{
    return S ->top == -1;
}

bool Stack_is_full(Stack *S)
{
    return S ->top == (S-> capacity - 1);
}


void Stack_push(Stack *S, int val)
{
    if (Stack_is_full(S))
    {
        printf("Stack is full!!\n");
        exit (EXIT_FAILURE);
    }
    S->top++;
    S->date[S->top]=val;
}

void Stack_peek(Stack *S, int val)
{
    if (Stack_is_empty(S))
    {
        printf("Stack is empty!!\n");
        exit (EXIT_FAILURE);
    }
    return S->date[S->top];
}

void Stack_pop(Stack *S, int val)
{
    if (Stack_is_empty(S))
    {
        printf("Stack is empty!!\n");
        exit (EXIT_FAILURE);
    }
    int val = S->date[S->top];
     S->top --;
     return val;
}

void Stack_print(Stack *S)
{
    printf("Capacity %ld\n", S->Capacity);
    printf("Top %ld\n", S->Top);
    printf("Size %ld\n", S->top+1);

    for (long i = 0; i <= S->top; i++)
    {
       printf("%d, \n", S->date[i]);
        puts("");
    }
}
// ----- Test------------
int main()
{
    Stack *S = Stack_create(5);
    int top_val = 0;

    Stack_print(5);

    puts("\nPushing 0, 10. 20\n"); 
    Stack_push(S, 0); 
    Stack_push(S, 10); 
    Stack_push(S, 20); 
    Stack_print(S); 

    puts("\nPeeking\n");
    top_val = Stack_pop(S);
    printf("Top_val = %d", top_val);

    puts("\nPooping\n");
    top_val = Stack_pop(S);
    printf("Top_val = %d", top_val);

    puts("\nPushing 0, 10. 20\n"); 
    Stack_push(S, 0); 
    Stack_push(S, 10); 
    Stack_push(S, 20); 
    Stack_print(S); 

    Strack_destroy(&S);
    return 0;
}