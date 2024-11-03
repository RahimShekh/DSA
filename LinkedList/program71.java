class node
{
    public int data;
    public node next;
}

class Stack
{
    public node First;
    public int iCnt;

    Stack()
    {
        First = null;
        iCnt = 0;
    }

    public void Display()
    {
        node temp = First;

        while(temp != null)
        {
            System.out.println("|"+temp.data+"|");
            temp = temp.next;
        }
    }
    public void Push(int No)
    {
        node newn = null;

        newn = new node();

        newn.next = null;
        newn.data = No;

        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First = newn;
        }
    }

    public int Pop()
    {
        int iValue = 0;
        if(First == null)
        {
            System.out.print("Stack is empty");
            return -1;
        }
        else
        {
           
            iValue = First.data;
            First = First.next;
        }
        return iValue;
    } 
}
class program71
{
    public static void main(String arg[])
    {
        int iRet = 0;
        Stack obj = new Stack();

        obj.Push(55);
        obj.Push(23);
        obj.Push(11);

        obj. Display();
        iRet = obj.Pop();
        
        System.out.println("The pop Element:"+iRet);
        obj.Display();

    }
}