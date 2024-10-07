#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }

}
void Display(PNODE First)
    {
        while(First != NULL)
        {
            printf("%d|",*First);
            First = First->next;
        }

    }

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,25);
    InsertFirst(&Head,10);

    Display(Head); 
    return 0;
}