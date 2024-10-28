// IMP Linked List code
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
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First ->next!= NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
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

void InsertAtPos(PPNODE First , int No, int iPos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    int iLength = Count(*First);

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("InValid Position");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First,No);
    }
    else
    {
        temp = *First;
        for(int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}
int main()
{
    PNODE Head = NULL;

    int iNo = 0, iValue = 0;
    int No = 0;
    int insertNo = 0;

    printf("Enter the Linked list elements:");
    scanf("%d",&iNo);
   

    for(int i = 0; i < iNo; i++)
    {
        scanf("%d",&iValue);
        InsertFirst(&Head,iValue);
    }
    
    Display(Head);


    printf("Enter the position to insert Element:");
    scanf("%d",&No);

    Count(Head);

    printf("Enter the element u want to insert:");
    scanf("%d",&insertNo);

    InsertAtPos(&Head,insertNo,No);

    Display(Head);
   
    return 0;
}