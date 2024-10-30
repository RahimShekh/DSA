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

    void Display();
    void InsertFirst(int No);
    void InsertLast(int No);

};

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL ::Display()
{
    while(First != NULL)
    {
        cout<<"|"<<First->data<<"|->";
        First = First->next;
    }
    cout<<"|NULL|"<<endl;
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
}
int main()
{
    SinglyLL obj;

    obj.InsertFirst(55);
    obj.InsertFirst(25);
    obj.InsertFirst(11);

    obj.InsertLast(91);

    obj.Display();

    return 0;
}