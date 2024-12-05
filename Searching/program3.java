import java.util.*;
class program3
{
    public static boolean BiSearch(int Arr[],int iSize,int iFind)
    {
        int j = iSize-1;

        for(int i = 0; i <= j; i++,j--)
        {
            if(Arr[i] == iFind || Arr[j] == iFind)
            {
                return true;
            }
        }
        return false;
    }
    public static void main(String arg[])
    {
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the No of Elements:");
        int iNo = sobj.nextInt();

        int Brr[] = new int[iNo];

        for(int i = 0; i < iNo; i++)
        {
            Brr[i] = sobj.nextInt();
        }
        
        System.out.println("Enter the No to Search:");
        int iValue = sobj.nextInt();

        bRet =  BiSearch(Brr,iNo,iValue);

        if(bRet == true)
        {
            System.out.println("Element is Present");
        }
        else
        {
            System.out.println("Element is not  present");
        }
    }
}