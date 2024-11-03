class node
{
    public int data;
    public node prev;
    public node next;
}

class DoublyCL
{
    public node First;
    public node Last;
    public int iCnt;

    public DoublyCL()
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
            System.out.print("|"+temp.data+"|<=>");
            temp = temp.next;
        }while(temp != Last.next);
    }
    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node();

        newn.data = No;
        newn.next = null;
        newn.prev = null;

        if((First == null) && (Last == null))
        {
            First = newn;
            Last  = newn;
        }
        else
        {
            newn.next = First;
            First.prev = newn;
            First = newn;
        }
        First.prev = Last;
        Last.next = First;
    }

    public void InsertLast(int No)
    {
        node newn = null;

        newn =  new node();

        newn.data = No;
        newn.next = null;

        if((First == null) && (Last ==  null))
        {
            First = newn;
            Last = newn;
        }
        else
        {
            Last.next  = newn;
            newn.prev = Last;
            Last = newn;
        }
        Last.next = First;
        First.prev= Last;
    }
}

class program67
{
    public static void main(String arg[])
    {
        DoublyCL obj = new DoublyCL();

        obj.InsertFirst(55);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(77);
        obj.Display();
    }
}