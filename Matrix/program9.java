import java.util.*;

class program9
{
    public static void SwapColumn(int Brr[][],int iRow,int iCol)
    {
        int Temp = 0;
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol-1;j= j+2)
            {
                Temp = Brr[i][j];
                Brr[i][j] = Brr[i][j+1];
                Brr[i][j+1] = Temp;
            }
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

        SwapColumn(Arr,No1,No2);

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