import java.util.*;

class program8
{
    public static void Matrix(int Brr[][],int iRow,int iCol)
    {
        int Temp = 0;
        for(int i = 0; i < iRow-1; i= i+2)
        {
            for(int j = 0; j < iCol; j++)
            {
                Temp = Brr[i][j];
                Brr[i][j] = Brr[i+1][j];
                Brr[i+1][j] = Temp;
            }
        }
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

        System.out.println("The Reversed Matrix:");
        for(int i = 0;i < No1; i++)
        {
            for(int j = 0;j < No2; j++)
            {
                System.out.print("|"+Arr[i][j]+"|");
            }
            System.out.println();
        }
    }
}