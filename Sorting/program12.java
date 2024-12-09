import java.util.*;
class program12
{
    public static void InsertionSort(int Arr[],int iSize)
    {
        for(int i = 1; i < iSize; i++)
        {
            int selected = Arr[i];
            int j = i-1;

            while(j >= 0 && Arr[j] > selected)
            {
                Arr[j+1] = Arr[j];
                j--;
            }
            Arr[j+1] = selected;
        }    
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Elements:");
        int iValue = sobj.nextInt();

        int Brr[] = new int[iValue];

        for(int i = 0; i < iValue; i++)
        {
            Brr[i] = sobj.nextInt();
        }

        InsertionSort(Brr,iValue);

        for(int i = 0; i < iValue; i++)
        {
           System.out.print("|"+Brr[i]+"|");
        }
    }
}     
    

