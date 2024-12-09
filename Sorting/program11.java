import java.util.*;
class program11
{
    public static void SelectionSort(int Arr[],int iSize)
    {
        int i = 0,j = 0;
        int Temp = 0,min_index = 0;

        for(i = 0; i < iSize-1; i++)
        {
            min_index = i;

            for(j = i+1; j < iSize; j++)  // j ko isize take jana hoga
            {
                if(Arr[j] < Arr[min_index])
                {
                    min_index = j;
                }
            }
            Temp = Arr[i];
            Arr[i] = Arr[min_index];
            Arr[min_index] = Temp;
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

        SelectionSort(Brr,iValue);

        for(int i = 0; i < iValue; i++)
        {
           System.out.print("|"+Brr[i]+"|");
        }
    }
}
