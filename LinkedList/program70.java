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

    public int Count()
    {
        return iCnt;
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
        iCnt++;
    }

    public void InsertLast(int No)
    {
        node newn = null;

        newn =  new node();

        newn.data = No;
        newn.next = null;
        newn.prev = null;

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
        iCnt++;
    }

    public void DeleteFirst()
    {
        if((First == null) && (Last == null))
        {
            System.out.print("Linked list is empty");
            return;
        }
        else
        {
            First = First.next;
        }
        Last.next = First;
        First.prev = Last;
        iCnt--;
    }

    public void DeleteLast()
    {
        if((First == null) && (Last == null))
        {
            System.out.print("Linked List is Empty");
            return;
        }
        else
        {
            Last = Last.prev;
        }
        Last.next = First;
        First.prev = Last;
        iCnt--;
    }

    public void InsertAtPos(int No,int iPos)
    {
        node newn = null;
        node temp = First;
        int iLength = Count();

        newn = new node();

        newn.data = No;
        newn.next = null;
        newn.prev = null;

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

            for(int i = 1; i <iPos-1; i++)
            {
                temp =  temp.next;
            }
            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
            newn.prev = temp;
        }
          iCnt++;
    }

    public void DeleteAtPos(int iPos)
    {
        node temp1 = null;
        node temp2 = null;
        int iLength = Count();

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iLength)
        {
            DeleteLast();
        }
        else
        {
            temp1 = First;

            for(int i = 1;i <iPos-1; i++)
            {
                temp1 = temp1.next;
            }
            temp2 = temp1.next;
            temp1.next = temp2.next;
            temp2.next.prev = temp1;
        }
        
    }
}

class program70
{
    public static void main(String arg[])
    {
        DoublyCL obj = new DoublyCL();

        obj.InsertFirst(55);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(77);
        obj.InsertLast(111);
        obj.InsertLast(121);

        obj.InsertAtPos(37,5);

        obj.DeleteAtPos(4);
        obj.Display();
    }
}