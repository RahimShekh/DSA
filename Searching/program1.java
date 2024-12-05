import java.util.*;

class program1
{
    public static boolean LinearSeacrch(int Arr[],int iSize,int iFind)
    {
        for(int i = 0; i < iSize; i++)
        {
            if(Arr[i] == iFind)
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

        System.out.println("Enter the No Elements:");
        int iValue = sobj.nextInt();

        int Brr[] = new int[iValue];

        for(int i = 0; i < iValue; i++)
        {
            Brr[i] = sobj.nextInt();
        }

        System.out.println("Enter the No to Find:");
        int iNo = sobj.nextInt();

        bRet = LinearSeacrch(Brr,iValue,iNo);

        if(bRet == true)
        {
            System.out.println("The Elements is present in the Array");
        }
        else
        {
            System.out.println("The Elements is not Present in the Array");
        }
    }
}