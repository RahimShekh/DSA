import java.util.*;

class program3
{
    public static void main(String arg[])
    {
        int iCnt = 0;

        Scanner sobj =  new Scanner(System.in);
        System.out.println("Enter the String:");

        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                iCnt++;
            }
        }
        System.out.println("The Number of Spaces:"+iCnt);
    }
}