import java.util.*;

class Matrix
{
    public int Arr[][];
    public int iRow;
    public int iCol;

    public Matrix(int A, int B)
    {
        iRow = A;
        iCol = B;

        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
               System.out.print("|"+Arr[i][j]+"|");
            }
            System.out.println();
        }
    
    }
}
class program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Rows:");
        int No1 = sobj.nextInt();

        System.out.println("Enter the Columns:");
        int No2 = sobj.nextInt();

        Matrix obj = new Matrix(No1,No2);

        obj.Accept();
        obj.Display();
    }
}