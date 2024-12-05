import java.util.*;
class program2
{
     public static boolean BidirectionalSearch(int Arr[],int iSize,int iFind)
        {
            int iStart = 0;
            int iEnd = iSize-1;

            while(iStart <= iEnd)
            {
                if((Arr[iStart] == iFind) || (Arr[iEnd] == iFind))
                {
                    return true;
                }
                iStart++;
                iEnd--;
            }
            return false;
        }
    public static void main(String arg[])
    {
       boolean bRet = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the No Elements:");
        int iNo = sobj.nextInt();

        int Brr[] = new int[iNo];

        for(int i = 0; i < iNo; i++)
        {
            Brr[i] = sobj.nextInt();
        }

        System.out.println("Enter the No to Search:");
        int iValue = sobj.nextInt();

        bRet = BidirectionalSearch(Brr,iNo,iValue);

        if(bRet == true)
        {
            System.out.println("The Element is Present");
        }
        else
        {
            System.out.println("The Element is upsent");
        }
    }
}