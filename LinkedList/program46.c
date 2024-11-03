#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node  NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("%d\t",First->data);
        First = First->next;
    }
}
void EnQueue(PPNODE First, int No)
{
    PNODE temp  = NULL;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while(temp->next!= NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}
void DeQueue(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)
    {
        printf("Queue is empty");
        return;
    }
    else
    {
        temp = *First;
        *First = (*First)->next;
        free (temp);
    }
}
int main()
{
    PNODE Head = NULL;

    EnQueue(&Head,51);
    EnQueue(&Head,22);
    EnQueue(&Head,11);

    DeQueue(&Head);

    printf("Queue Elements:\n");
    Display(Head);
    return 0;
}