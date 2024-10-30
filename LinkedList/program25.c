//Doubly Linear linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE First)
{
    printf("|NULL|<=>");
    while(First != NULL)
    {
        printf("|%d|<=>",First->data);
        First = First->next;
    }
    printf("|NULL|\n");
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

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->prev = NULL;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;
    }
}

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
}

void InsertAtPos(PPNODE First,int No,int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iLength = Count(*First);

    newn = (PNODE)malloc(sizeof(NODE));

    newn->prev = NULL;
    newn->data = No;
    newn->next = NULL;

    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid Position");
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
        temp = *First;

        for(int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev= temp;
    }
}

void DeleteFirst(PPNODE First)
{
    if(*First == NULL)
    {
        printf("Linked list is empty");
        return;
    }
    else
    {
        *First = (*First)->next;
        free((*First)->prev);
        (*First)->prev = NULL;
    }
}
void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)
    {
        return;
    }
    else
    {
        temp = *First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void DeleteAtPos(PPNODE First, int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int iLength = Count(*First);

    if((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid Position");
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
        temp2->next->prev = temp1->next;
        free(temp2);
    }

}
int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,55);
    InsertFirst(&Head,25);
    InsertFirst(&Head,11);

    InsertLast(&Head,101);
    InsertLast(&Head,115);
    InsertLast(&Head,151);

    InsertAtPos(&Head,40,5);

    Display(Head);

    DeleteAtPos(&Head,5);

    Count(Head);

    Display(Head);
    return 0;
}