import java.util.Scanner;
class node
{
    public int data;
    public node next;
    public node prev;
}
class Doubly
{
    public node First;
    public int iCnt;

    public Doubly()
    {
        First = null;
        iCnt = 0;
    }

    public int Count()
    {
        return iCnt;
    }

    public void Display()
    {
        node temp = First;

        System.out.print("|null|->");
        while(temp != null)
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }
        System.out.print("|null|");
    }

    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node();

        newn.data = No;
        newn.next = null;
        newn.prev = null;

        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First.prev = newn;
            First = newn;
        }
        iCnt++;
    }
    public void InsertLast(int No)
    {
        node temp = First;
        node newn =  null;

        newn = new node();
        newn.data = No;
        newn.next = null;
        newn.prev = null;

        if(First == null)
        {
            First = newn;
        }
        else
        {
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp;
        }
        iCnt++;
    }

    public void DeleteFirst()
    {
        if(First == null)
        {
            System.out.print("Linked List is Empty");
            return;
        }
        else
        {
            First = First.next;
            First.prev = null;
        }
        iCnt--;
    }

    public void DeleteLast()
    {
        node temp = null;

        if(First == null)
        {
            System.out.print("Linked list Empty");
            return;
        }
        else
        {
            temp = First;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        iCnt--;
    }
    public void InsertAtPos(int No,int iPos)
    {
        node newn = null;
        node temp = First;
        int iLength = Count();

        newn = new node();

        newn.next = null;
        newn.data = No;
        newn.prev = null;

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
            for(int i=1; i < iPos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
            newn.prev = temp;
        }
        iCnt++;
    }
    
}
class program60
{
    public static void main(String arg[])
    {
        Doubly obj = new Doubly();

        Scanner sobj = new Scanner(System.in);

        obj.InsertFirst(55);
        obj.InsertFirst(22);
        obj.InsertFirst(11);

        obj.InsertLast(77);
        obj.InsertLast(81);
        obj.InsertLast(101);

        System.out.println("Enter the no:");
        int iNo = sobj.nextInt();
        obj.InsertAtPos(33,iNo);

        obj.Display();
    }
}