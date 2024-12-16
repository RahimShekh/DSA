/*
Write a program which accept matrix and reverse the contents of each row.
*/
import java.util.*;

class program11
{
    public static void Matrix(int Brr[][],int iRow,int iCol)
    {
        for(int i = 0; i < iRow; i++)
        {
            for(int j = iCol-1; j >=0; j--)
            {
                System.out.print("|"+Brr[i][j]+"|");
            }
            System.out.println();
        }
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
    }
}