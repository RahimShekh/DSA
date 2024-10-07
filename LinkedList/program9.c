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
        printf("%d|",First->data);
        First = First->next;
    }
}
int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,55);
    InsertFirst(&Head,25);
    InsertFirst(&Head,13);

    Display(Head);

    iRet = Count(Head);

    printf("The count of Linked List:%d",iRet);
    return 0;
}