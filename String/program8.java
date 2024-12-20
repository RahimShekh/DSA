//write a program which accept string from user and count number of capital chracters

import java.util.*;

class program8
{
    public static void Capital(String str1)
    {
        int iCnt = 0;
        for(int i = 0; i < str1.length(); i++)
        {
            char ch = str1.charAt(i);

            if((ch >='A') && (ch <='Z'))
            {
                iCnt++;
            }
        }

        System.out.println("The Count of Capital:"+iCnt);
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");
        String str = sobj.nextLine();

        Capital(str);
    }
}