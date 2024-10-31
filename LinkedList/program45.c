#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE First)
{
    
    while(First !=NULL)
    {
        printf("%d\n",First->data);
        First = First->next;
    }
}
void push(PPNODE First,int No)
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

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

int pop(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)
    {
        printf("stack is empty");
        return -1;
    }
    else
    {
        int iValue = 0;

        iValue = (*First)->data;
        temp = *First;
        *First = (*First)->next;
        free(temp);

        return iValue;
    }
}
int main()
{
    PNODE Head = NULL;

    push(&Head,101);
    push(&Head,51);
    push(&Head,26);
    push(&Head,11);

    int iRet = pop(&Head);

    printf("The Stack Element:\n");
    Display(Head);

    printf("The pop element :%d",iRet);
    return 0;
}
