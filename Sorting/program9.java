import java.util.*;

class BubbleSort
{
    public int iValue;
    public int [] Arr;

    BubbleSort()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the No of Elemetns:");
        iValue = sobj.nextInt(); 

        Arr = new int[iValue];
    }

    public void Input()
    {
        Scanner sobj = new Scanner(System.in);
        for(int i = 0; i < iValue; i++)
        {
            Arr[i] = sobj.nextInt();
        } 
    }
    public void SortArray()
    {
        for(int i = 0; i < iValue; i++)
        {
            for(int j = 0; j < iValue-1; j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    int Temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = Temp;
                }
            }
        }
    }
    public void Display()
    {
        System.out.println("The Sorted Array:");

        for(int i = 0;i < Arr.length;i++)
        {
            System.out.print("|"+Arr[i]+"|");
        }  
    }
}
class program9
{
    public static void main(String arg[])
    {
        BubbleSort obj = new BubbleSort();

        obj.Input();
        obj.SortArray();
        obj.Display();
    }
}