// Write a program which accept matrix and No and return the frequency of No

import java.util.*;

class program13
{
    public static void Matrix(int Brr[][],int iRow,int iCol,int iNo)
    {
        int iCnt = 0;

        for(int j = 0; j < iRow; j++)
        {
            for(int i = 0; i < iCol; i++)
            {
                if(iNo == Brr[i][j])
                {
                    iCnt++;
                }
            }
        }

        System.out.println("The Frequency of that No :"+iCnt);
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Rows:");
        int No1 = sobj.nextInt();

        System.out.println("Enter the Columns:");
        int No2 = sobj.nextInt();

        int Arr[][] = new int[No1][No2];

        for(int i = 0; i < No1; i++)
        {
            for(int j = 0; j < No2; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Enter the No:");
        int iValue = sobj.nextInt();

        Matrix(Arr,No1,No2,iValue);
    }
}
