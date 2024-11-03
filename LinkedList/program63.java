class node
{
    public int data;
    public node next;
}

class SinglyCircular
{
    public node First;
    public node Last;
    public int iCnt;

    public SinglyCircular()
    {
        First = null;
        Last = null;
        iCnt = 0;
    }

    public int Count()
    {
        return iCnt;
    }

    public void Display()
    {
        node temp = First;
        do
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }while(temp != Last.next);
    } 
    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node();

        newn.data = No;
        newn.next =  null;

        if((First == null) && (Last == null))
        {
            First = newn;
            Last = newn;
        }
        else
        {
            newn.next = First;
            First = newn;
        }
        Last.next = First;
        iCnt++;
    }

    public void InsertLast(int No)
    {
        node newn = null;

        newn = new node();
        newn.data = No;
        newn.next = null;

        if((First == null) && (Last == null))
        {
            First = newn;
            Last = newn;
        }
        else
        {
            node temp = First;

            while(temp.next != Last.next)
            {
                temp = temp.next;
            }
            temp.next = newn;
            Last = newn;
        }
        Last.next  = First;
        iCnt++;
    }

    public void InsertAtPos(int No, int iPos)
    {
        int iLength = Count();
        node temp = null;
        node newn = null;

        newn = new node();

        newn.data = No;
        newn.next = null;

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

            for(int i= 1; i <iPos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;
        }
    }
}
class program63
{
    public static void main(String arg[])
    {
        SinglyCircular obj = new SinglyCircular();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(77);
        obj.InsertLast(101);
        obj.InsertLast(121);

        obj.InsertAtPos(45,4);

        obj.Display();
    }
}