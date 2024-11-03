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
    }
}
class program62
{
    public static void main(String arg[])
    {
        SinglyCircular obj = new SinglyCircular();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(77);

        obj.Display();
    }
}