//If array is already sorted

import java.util.*;

class program7
{
    public static void BubbleSortEffiecient(int Arr[],int iSize)
    {
       bool flag = true;

    
    for(i = 0; (i < iSize -1) && (flag == true) ; i++)  
    {
        flag = false;
        
        for(j = 0; j< iSize - 1 - i; j++)  
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                flag = true;
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

        BubbleSortEffiecient(Brr,iValue);

        for(int i = 0; i < iValue; i++)
        {
           System.out.print("|"+Brr[i]+"|");
        }
        
    }
}