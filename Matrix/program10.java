/*
Write a program which accept matrix from user and display transpose of the
matrix.

input :     3   2    5
            4   3    2
            8   4    1
output:     
            3   4    8
            2   3    4
            5   2    1
*/ 
import java.util.*;
class program10
{
    public static void Matrix(int Brr[][],int iRow,int iCol)
    {
        for(int j = 0; j < iRow; j++)
        {
            for(int i = 0; i < iCol; i++)
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