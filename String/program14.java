//Write a program which accept string from user and display only digits from that string.

import java.util.*;

class program14
{
    public static void DigitString(String Str)
    {
        for(int i = 0; i < Str.length(); i++)
        {
            char ch = Str.charAt(i);

            if(ch >= '0' && ch <='9')
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

        DigitString(str);
    }
}

