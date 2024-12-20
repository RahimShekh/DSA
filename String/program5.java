import java.util.*;

class program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");
        char ctr = sobj.next().charAt(0);

        if((ctr >= 'a') && (ctr <= 'z'))
        {
            System.out.println("The chracter is Small");
        }
        else
        {
            System.out.println("The Chracter is not Small");
        }

    }
}