class node
{
    public int data;
    public node next;
}

class Queue
{
    public node First;
    public int iCnt;

    public Queue()
    {
        First = null;
        iCnt = 0;
    }

    public void Display()
    {
        node temp = First;

        while(temp != null)
        {
            System.out.print("|"+temp.data+"|");
            temp = temp.next;
        }
    }
    public void EnQueue(int No)
    {
        node newn = null;
        node temp =   First;

        newn = new node();

        newn.data = No;
        newn.next = null;

        if(First == null)
        {
            First= newn;
        }
        else
        {
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
    }

    public int DeQueue()
    {
        int iValue = 0;

        if(First == null)
        {
            System.out.print("Queue is Empty");
        }
        else
        {
            iValue = First.data;
            First = First.next;
        }
        return iValue;
    }
}
class program72
{
    public static void main(String arg[])
    {
        Queue obj = new Queue();

        obj.EnQueue(55);
        obj.EnQueue(21);
        obj.EnQueue(11);

        int iRet = obj.DeQueue();

        System.out.println("The removed Element from stack:"+iRet);
        obj.Display();
    }
}