#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

class Queue
{
    public:
    PNODE First;
    int iCount;

    Queue();

    void Display();
    void EnQueue(int No);
    int  DeQueue();
};

Queue ::Queue()
{
    First = NULL;
    iCount = 0;
}
void Queue :: Display()
{
    PNODE temp = First;

    cout<<"Queue  Elements:"<<endl;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }

}
void Queue ::EnQueue(int No)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = new(NODE);

    newn->data = No;
    newn->next = NULL;

    if(First ==NULL)
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

int Queue ::DeQueue()
{
    PNODE temp = First;
    int iValue = 0;

    if(First == NULL)
    {
        cout<<"Queue is Empty";
        return -1;
    }
    else
    {
        iValue = temp->data;
        First = First->next;
        delete temp;  
    }
    return iValue;
    iCount--;
}
int main()
{
    Queue obj;

    obj.EnQueue(51);
    obj.EnQueue(23);
    obj.EnQueue(11);

    obj.Display();
    int iRet = obj.DeQueue();
    
    cout<<"The Removed Element:"<<iRet<<endl;

    obj.Display();
    return 0;
}