import java.util.*;

class program3
{
    public static void Matrix(int Brr[][],int iRow,int iCol)
    {
        int iSum = 0;

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                iSum = iSum + Brr[i][j];
            }
        }

        System.out.print("The Summation of Matrix:"+iSum);
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Rows:");
        int No1 = sobj.nextInt();

        System.out.println("Enter the column:");
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