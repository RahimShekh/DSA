/*
Write a program which accept matrix from user and return addition of diagonal elements.
*/
import java.util.*;

class program12
{
    public static void Matrix(int Brr[][],int iRow,int iCol)
    {
        int iSum = 0;

        for(int j = 0; j < iRow; j++)
        {
            for(int i = 0; i < iCol; i++)
            {
                if(i == j)
                {
                    iSum = iSum + Brr[i][j];
                }
            }
        }

        System.out.println("The Sum of Diagonal :"+iSum);
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