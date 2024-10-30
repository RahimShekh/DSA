//Doubly Linear

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyLL
{
    public:
    PNODE First;
    int iCount;

    DoublyLL();

    void Display();
    int Count();

    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No,int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

int DoublyLL ::Count()
{
    return iCount;
}

DoublyLL::DoublyLL()
{
    First = NULL;
    iCount = 0;
}

void DoublyLL ::Display()
{
    PNODE temp = NULL;
    temp = First;

    printf("|NULL|<=>");
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|<=>";
        temp = temp->next;
    }
    printf("|NULL|\n");
}

void  DoublyLL ::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new(NODE);

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    iCount++;
}

void DoublyLL ::InsertLast(int No)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = new(NODE);

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

void DoublyLL ::InsertAtPos(int No, int iPos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    int iLength = Count();

    newn = new(NODE);

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((iPos < 1) || (iPos > iLength+1))
    {
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(No);
    }
    else
    {
        temp = First;

        for(int i = 1; i <iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}   

void DoublyLL ::DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else
    {
        First = First->next;
        delete First->prev;
    }
    iCount--;
}

void DoublyLL::DeleteLast()
{
    PNODE temp = NULL;
    
    temp = First;
    
    if(First == NULL)
    {
        return;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void DoublyLL ::DeleteAtPos(int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    int iLength = Count();

    if((iPos < 1) || (iPos > iLength))
    {
        cout<<"Invalid postion";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iLength)
    {
        DeleteLast();
    }
    else
    {
        temp1 = First;

        for(int i = 1; i < iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        temp2->next->prev = temp1->next;
        delete temp2;
    }
}
int main()
{
    DoublyLL obj;

    obj.InsertFirst(55);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(77);
    obj.InsertLast(101);

    obj.InsertAtPos(30,4);
    
    obj.DeleteAtPos(4);

    obj.Display();
    obj.Count();

    return 0;
}