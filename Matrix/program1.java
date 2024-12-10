import java.util.*;

class program1
{
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

        System.out.println("Elements from the matrix : ");
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