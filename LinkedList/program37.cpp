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
int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;

    InsertFirst(&Head,&Tail,55);
    InsertFirst(&Head,&Tail,23);
    InsertFirst(&Head,&Tail,11);

    InsertLast(&Head,&Tail,77);
    InsertLast(&Head,&Tail,101);

    DeleteLast(&Head,&Tail);

    Display(Head,Tail);

    return 0;
}