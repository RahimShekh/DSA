//write a program which accept string from user and convert it into lower case

import java.util.*;

class program12
{
    public static void LowerCase(String Str)
    {
        for(int i = 0; i < Str.length(); i++)
        {
            char ch = Str.charAt(i);

            if(ch >= 'A' && ch <='Z')
            {
                System.out.print((char)(ch+32));
            } 
            else
            {
                System.out.print(ch); 
            }
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        LowerCase(str);
    }
}