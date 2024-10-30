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

void DeleteAtPos(PPNODE First, int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    int iLength = Count(*First);

    if((iPos < 1) || (iPos > iLength))
    {
        return;
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
    int iValue = 0, No= 0;
    int DeleteNo = 0;

    
    printf("Enter th LL Elements:");
    scanf("%d",&iValue);

    for(int i = 0; i < iValue; i++)
    {
        scanf("%d",&No);
        InsertFirst(&Head,No);
    }
    Display(Head);

    printf("Enter the element u want delete:");
    scanf("%d",&DeleteNo);

    DeleteAtPos(&Head,DeleteNo);
    Count(Head);
    Display(Head);
   
    return 0;
}