/* Write a program which accept string from user and copy the content of that string from
user and copy the content of that string into another string(implement strcpy() function)
*/
import java.util.*;

class program17
{
    public static String CopyString(String ctr)
    {
        String ctr2 ="";
        for(int i = 0; i < ctr.length(); i++)
        {
            ctr2 += ctr.charAt(i);
        }

        return ctr2;
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();
        
        String str2 = CopyString(str);

        System.out.println("The Copied String:"+str2);
    }
}