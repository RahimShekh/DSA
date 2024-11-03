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
    }

    void DeleteFirst()
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
    }
}
class program51
{
    public static void main (String arg[])
    {
        SinglyLL obj = new SinglyLL();
        obj.InsertFirst(55);
        obj.InsertFirst(34);
        obj.InsertFirst(11);

        obj.InserLast(77);
        obj.InserLast(101);

        obj.DeleteFirst();
        obj.Display();
    }
}