// Write a program which accept matrix and return largest number from both the diagonals.

import java.util.*;

class program14
{
    public static void Matrix(int Brr[][],int iRow,int iCol)
    {
        int i = 0, j = 0;
        int iMax = Brr[i][j];

        for(j = 0; j < iRow; j++)
        {
            for(i = 0; i < iCol; i++)
            {
                if(i == j && Brr[i][j] > iMax)
                {
                    iMax = Brr[i][j];
                }
                else if(j == iCol-1-j && Brr[i][j] > iMax)
                {
                    iMax = Brr[i][j];
                }
            }
        }

        System.out.println("The Maximum No:"+iMax);
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

        Matrix(Arr,No1,No2);

         for(int i = 0; i < No1; i++)
        {
            for(int j = 0; j < No2; j++)
            {
                System.out.print("|"+Arr[i][j]+"|");
            }
            System.out.println();
        }
    }
}