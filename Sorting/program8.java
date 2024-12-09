//for decresing sorting
import java.util.*;

class program8
{
    public static void BubbleSort(int Arr[],int iSize)
    {
        for(int i = 0; i < iSize-1; i++)
        {
            for(int j = 0; j < iSize-1-i; j++)
            {
                if(Arr[j] < Arr[j+1])
                {
                    int Temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = Temp;
                    
                }
            }
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the No elements:");
        int iValue = sobj.nextInt();

        int Brr[] = new int[iValue];

        for(int i = 0; i < iValue; i++)
        {
            Brr[i] = sobj.nextInt();
        }

        BubbleSort(Brr,iValue);

        for(int i = 0; i < iValue; i++)
        {
           System.out.print("|"+Brr[i]+"|");
        }
        
    }
}