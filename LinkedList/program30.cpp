//Implemention of linked list using OOPS
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

class SinglyLL
{
    public:
    PNODE First;
    int iCount;

    SinglyLL();

    int Count();
    void Display();
    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No, int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);

};

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

int SinglyLL :: Count()
{
    return iCount;
}
void SinglyLL ::Display()
{
    while(First != NULL)
    {
        cout<<"|"<<First->data<<"|->";
        First = First->next;
    }
    cout<<"|NULL|\n";
}

void SinglyLL ::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new(NODE);

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void SinglyLL ::InsertLast(int No)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = new(NODE);

    newn->data = No;
    newn->next = NULL;

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
    }
    iCount++;
}

void SinglyLL :: InsertAtPos(int No, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iLength = Count();

    newn = new(NODE);

    newn->data = No;
    newn->next = NULL;

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

        for(int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

    }
    iCount++;
}

void SinglyLL ::DeleteFirst()
{
    PNODE temp = NULL;

    if(First == NULL)
    {
        return;
    }
    else
    {
        temp = First;
        First = First->next;
        delete temp;
    }
    iCount--;
}

void SinglyLL::DeleteLast()
{
    PNODE temp = NULL;

    if(First == NULL)
    {
        return;
    }
    else
    {
        temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void SinglyLL ::DeleteAtPos(int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int iLength = Count();

    if((iPos < 1) || (iPos > iLength))
    {
        cout<<"Invalid Position";
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

        for(int i = 1; i <iPos-1; i++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;

    }
    iCount--;
}
int main()
{
    int iRet = 0;
    SinglyLL obj;

    obj.InsertFirst(55);
    obj.InsertFirst(25);
    obj.InsertFirst(11);

    obj.InsertLast(91);
    obj.InsertLast(111);
    obj.InsertLast(200);

    obj.InsertAtPos(101,4);

    obj.DeleteFirst();
    obj.DeleteLast();
    obj.DeleteAtPos(3);
    
    obj.Display();
    iRet = obj.Count();

    cout<<"The Count of LinkedList node:"<<iRet;

    return 0;
}