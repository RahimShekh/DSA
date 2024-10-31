//Singly Circlular LL
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int Count(PNODE First,PNODE Last)
{
    int iCount = 0;
    do
    {
        iCount++;
        First = First->next;
    } while (First != Last->next);
    return iCount;
    
}
void Display(PNODE First, PNODE Last)
{
    if((First == NULL) && (Last == NULL))
    {
        printf("Linked list is Empty");
        return;
    }

    do
    {
        printf("|%d|->",First->data);
        First = First->next;
    } while (First != Last->next);
    
}
void InsertFirst(PPNODE First, PPNODE Last,int No)
{
    PNODE newn = NULL;

    newn = new(NODE);

    newn->data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
    (*Last)->next = *First;
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = new(NODE);

    newn->data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        temp = *First;
        while(temp->next != *First)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->next = *First;
    }
    *Last = (*Last)->next;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))
    {
        return;
    }
    else
    {
        *First = (*First)->next;
        delete (*Last)->next;
    }
    (*Last)->next = *First;
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        return;
    }
    else
    {
        temp = *First;
        while(temp->next != *Last)
        {
            temp = temp->next;
        }
        delete *Last;
        *Last = temp;
    }
    (*Last)->next = *First;
}
void InsertAtPos(PPNODE First,PPNODE Last, int No,int iPos)
{
    PNODE temp1 = NULL;
    PNODE newn  = NULL;

    int iLength = Count(*First,*Last);

    newn = new(NODE);
    newn->data = No;
    newn->next = NULL;

    if((iPos < 1) || (iPos > iLength+1))
    {
        cout<<"Invalid position";
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
        temp1= *First;

        for(int i = 1; i < iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        newn->next = temp1->next;
        temp1->next = newn;
        
    }
}

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{
    PNODE temp1= NULL;
    PNODE temp2 = NULL;

    int iLength = Count(*First,*Last);

    if((iPos < 1) || (iPos > iLength))
    {
        return;
    }

    if(iPos == 1)
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

        for(int i =1; i < iPos-1;i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
    }
}
int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;

    InsertFirst(&Head,&Tail,55);
    InsertFirst(&Head,&Tail,23);
    InsertFirst(&Head,&Tail,11);

    InsertLast(&Head,&Tail,77);
    InsertLast(&Head,&Tail,101);

    InsertAtPos(&Head,&Tail,100,3);

    DeleteAtPos(&Head,&Tail,4);
    Display(Head,Tail);


    return 0;
}