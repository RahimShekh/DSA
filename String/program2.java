import java.util.*;

class program2
{
    public static void main(String arg[])
    {
        Scanner sobj =  new Scanner(System.in);
        System.out.println("Enter the String:");

        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.println("Entered String:"+Arr[i]);
        }
    }
}