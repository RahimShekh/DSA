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

void InsertLast(PPNODE First,int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    temp = *First;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp =temp->next;
        }
        temp->next = newn;
    }
    
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

void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;
    temp = *First;

    if(*First == NULL)
    {
        return;
    }
    else
    {
        *First = (*First)->next;
        free(temp);

    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;
    temp = *First;

    if(*First == NULL)
    {
        return;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        free(temp->next);
    }

}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("|%d|->",First->data);
        First = First->next;
    }
    printf("|NULL|\n");
}

int  Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    printf("The element in Linked list:%d\n",iCnt);
}

void InsertAtPos(PPNODE First,int No,int iPos)
{
    int iLength = 0;

    PNODE temp = NULL;
    PNODE newn = NULL;

    iLength = Count(*First);

    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid position");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First,No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(First,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        temp = *First;

        for(int i = 1; i < iPos-1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE First,int iPos)
{
    int iLength = 0;
    iLength = Count(*First);

    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    if((iPos < 1) || (iPos > iLength))
    {
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First);
    }
    else
    {
        temp1 = *First;

        for(int i = 1; i < iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }
}
int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    InsertFirst(&Head,5);

    InsertLast(&Head,200);
    InsertLast(&Head,500);

    InsertAtPos(&Head,55,4);
    DeleteAtPos(&Head,6);

    Display(Head);
    Count(Head);

    return 0;
}