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
    }
}
class program58
{
    public static void main(String arg[])
    {
        Doubly obj = new Doubly();

        obj.InsertFirst(55);
        obj.InsertFirst(22);
        obj.InsertFirst(11);

        obj.InsertLast(77);
        obj.InsertLast(81);
        obj.InsertLast(101);

        obj.DeleteLast();

        obj.Display();
    }
}