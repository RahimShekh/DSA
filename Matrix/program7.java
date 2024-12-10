import java.util.*;

class program7
{
    public static void Matrix(int Brr[][],int iRow,int iCol)
    {
        int iSum1 = 0,iSum2 = 0;

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(Brr[i][j] % 2 == 0)
                {
                    iSum1 = iSum1 + Brr[i][j];
                }
                else
                {
                    iSum2 = iSum2 + Brr[i][j];
                }
            }
        }
        System.out.println("The Sum of Even Matrix:"+iSum1);
        System.out.println("The Sum of Odd Matrix:"+iSum2);
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Rows:");
        int No1 = sobj.nextInt();

        System.out.println("Enter the Col:");
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