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

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("|%d|->",First->data);
        First = First->next;
    }
    printf("|NULL|\n");
}

void InsertFirst(PPNODE First, int No)
{
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
        newn->next = *First;
        *First = newn;
    }
}


int main()
{
    PNODE Head = NULL;
    int iValue = 0;
    int iNo = 0;

    printf("Enter the Elements:");
    scanf("%d",&iNo);

    for(int i = 1; i < iNo; i++)
    {
        scanf("%d",&iValue);
        InsertFirst(&Head,iValue);
    }

    Display(Head);
    return 0;
}