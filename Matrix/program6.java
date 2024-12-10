import java.util.*;

class program6
{
    public static void Matrix(int Brr[][],int iRow,int iCol)
    {
        int iSum = 0;

        if(iRow != iCol)
        {
            System.out.println("Unable to get Diagonal");
            return;
        }

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                
                if(i == j)
                {
                    iSum = iSum + Brr[i][j];
                    System.out.print("|"+Brr[i][j]+"|");
                }
            }
        }

        System.out.println("The Sum of Diagonal:"+iSum);
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