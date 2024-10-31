// Doubly Circular Linked List
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node ** PPNODE;

int Count(PNODE First,PNODE Last)
{
    int iCnt = 0;

    do
    {
        iCnt++;
        First = First->next;
    } while (First != Last->next);
    
    return iCnt;    
}
void Display(PNODE First,PNODE Last)
{
    do
    {
        printf("|%d|<=>",First->data);
        First = First->next;
    } while (First != Last->next);
    
}
void InsertFirst(PPNODE First,PPNODE Last,int No)
{
    PNODE newn = NULL;

    newn = new(NODE);

    newn->data = No;
    newn->prev = NULL;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;
    }
    (*Last)->next = *First;
    (*First)->prev = *Last;
}

void InsertLast(PPNODE First, PPNODE Last,int No)
{
    PNODE newn = NULL;

    newn = new(NODE);

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) || (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next = newn;
        newn->prev = *Last;
        *Last = newn;
    }
    (*Last)->next = *First;
    (*First)->prev = *Last;
}
void DeleteFirst(PPNODE First,PPNODE Last)
{
    if((*First == NULL) || (*Last == NULL))
    {
        cout<<"Linkedlist is empty";
        return;
    }
    else
    {
        *First = (*First)->next;
        delete (*Last)->next;
    }
    (*Last)->next = *First;
    (*First)->prev = *Last;
}

void DeleteLast(PPNODE First,PPNODE Last)
{

    if((*First == NULL) || (*Last == NULL))
    {
        return;
    }
    else if(*First == *Last)
    {
        delete *First;
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *Last = (*Last)->prev;
        delete (*Last)->next;
    }
    (*Last)->next = *First;
    (*First)->prev = *Last;
}

void InsertAtPos(PPNODE First,PPNODE Last,int No,int iPos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    int iLength = Count(*First,*Last);

    newn = new(NODE);

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid positon");
        return;
    }
    
    if(iPos == 1)
    {
        InsertFirst(First,Last,No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(First,Last,No);
    }
    else
    {
        temp = *First;

        for(int i = 1; i <iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    int iLength = Count(*First,*Last);

    if((iPos < 1) || (iPos >iLength))
    {
        return;
    }
    if(iPos ==1)
    {
        DeleteFirst(First,Last);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First,Last);
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
        temp2->next->prev = temp1;
        delete temp2;
    }
}
int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;

    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,123);

    InsertAtPos(&Head,&Tail,100,5);

    DeleteAtPos(&Head,&Tail,3);

    Count(Head,Tail);
    Display(Head,Tail);

    return 0;
}