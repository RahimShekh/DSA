//Write a program which Accept string from user and toggle case.

import java.util.*;

class program13
{
    public static void ToggleCase(String Str)
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
                System.out.print((char)(ch-32)); 
            }
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        ToggleCase(str);
    }
}