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
}
class program55
{
    public static void main(String arg[])
    {
        Doubly obj = new Doubly();

        obj.InsertFirst(55);
        obj.InsertFirst(22);
        obj.InsertFirst(11);

        obj.Display();
    }
}