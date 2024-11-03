#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

class stack
{
    public:
    PNODE First;
    int iCount;

    stack();

    void Push(int No);
    int Pop();
    void Display();

};

stack ::stack()
{
    First = NULL;
    iCount = 0;
}
void stack :: Display()
{
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
}
void stack ::Push(int No)
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
        newn->next  = First;
        First = newn;
    }
}

int stack::Pop()
{
    PNODE temp = First;

    if(First == NULL)
    {
        printf("Linked List is empty");
        return -1;
    }
    else
    {
        int iValue = 0;

        First = First->next;
        iValue = temp->data;
        delete temp;

        return iValue;
    }
}

int main()
{
    stack obj;

    obj.Push(51);
    obj.Push(21);
    obj.Push(11);

    obj.Display();

    int iRet = obj.Pop();

    cout<<"The pop Element is :"<<iRet;
    
    return 0;
}