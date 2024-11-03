class node
{
    public int data;
    public node next;
}

class SinglyLL
{
    public node First;
    public int iCount;

    public SinglyLL()
    {
        First  = null;
        iCount = 0;
    }

    void Display()
    {
        node temp = First;

        while(temp != null)
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }
        System.out.print("|null|");

    }
    public int Count()
    {
        return iCount;
    }
   public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node();

        newn.data = No;
        newn.next = null;

        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First = newn;
        }
        iCount++;
    }

   public void InserLast(int No)
    {
        node newn = null;
        node temp = null;

        newn = new node();

        newn.data = No;
        newn.next = null;

        if(First == null)
        {
            First = newn;
        }
        else
        {
            temp = First;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        iCount++;
    }

    public void DeleteFirst()
    {
        

        if(First == null)
        {
            System.out.print("linked list is empty");
            return;
        }
        else
        {
            First = First.next;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        node temp = First;

        if(First == null)
        {
            System.out.print("Linked list is empty");
            return;
        }
        else if( First.next == null)
        {
            First = null;
        }
        else
        {
            while(temp.next.next != null)
            {
                temp =temp.next;
            }
            temp.next = null;
        }
        iCount--;
    }

    public void InsertAtPos(int No,int iPos)
    {
        node temp = First;
        node newn = null;
        int iLength = Count();

        newn = new node();
        newn.data = No;
        newn.next = null;

        if((iPos < 1) || (iPos > iLength+1))
        {
            System.out.print("invalid position");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos == iLength+1)
        {
            InserLast(No);
        }
        else
        {
            for(int i = 1;i <iPos-1; i++)
            {
                temp = temp.next;
            }   
            newn.next = temp.next;
            temp.next = newn;
        }
    }
}
class program53
{
    public static void main (String arg[])
    {
        SinglyLL obj = new SinglyLL();
        obj.InsertFirst(55);
        obj.InsertFirst(34);
        obj.InsertFirst(11);

        obj.InserLast(77);
        obj.InserLast(101);

        obj.InsertAtPos(25,4);
        obj.Display();
    }
}