//input should be sorted and should be in incresing
// 3  9  11  21  55  77 
import java.util.*;

class program4
{
    public static boolean BinarySearch(int Arr[],int iSize,int target)
    {
        int iStart = 0,iEnd = iSize-1;

        while(iStart < iEnd)
        {
            int iMid = iStart + (iEnd - iStart / 2);

            if(Arr[iMid] == target)
            {
                return true;
                
            }
            else if(target > Arr[iMid])
            {
                iStart = iMid + 1;
            }
            else if(target < Arr[iMid])
            {
                iEnd = iMid - 1;
            }
        }
        return false;
    }
    public static void main(String arg[])
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter the No of Elements:");
        int iNo = sobj.nextInt();

        int Brr[] = new int[iNo];

        for(int i = 0; i < iNo; i++)
        {
            Brr[i] = sobj.nextInt();
        }

        System.out.println("Enter No u Want to Search:");
        int iValue = sobj.nextInt();

        boolean bRet = BinarySearch(Brr,iNo,iValue);

        if(bRet == true)
        {
            System.out.println("The Element is Present");
        }
        else
        {
            System.out.println("The Element is not present");
        }
    }
}