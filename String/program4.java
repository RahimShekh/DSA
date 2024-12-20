//single char input from user
import java.util.*;

class program4
{
    public static void main(String arg[])
    {
        int iCnt = 0;

        Scanner sobj =  new Scanner(System.in);
        System.out.println("Enter the Character:");

        char str = sobj.next().charAt(0);

        System.out.println("The Entered Chracter:"+str);
    }
}