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

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;

    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    InsertLast(&Head,&Tail,101);

    
    Display(Head,Tail);

    return 0;
}