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

void InsertLast(PPNODE First,int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

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
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)
    {
        printf("Linked List is Empty");
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        temp = *First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next->next);
        temp->next = NULL;
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
    InsertFirst(&Head,234);

    InsertLast(&Head,123);

    DeleteLast(&Head);

    Display(Head);

    iRet = Count(Head);

    printf("The count of Linked List:%d",iRet);
    return 0;
}