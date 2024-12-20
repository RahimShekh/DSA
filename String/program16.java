//Write a program which accept string from user and accept one character return index of last
//occurence of that character.

import java.util.*;

class program16
{
    public static void main(String arg[])
    {
        int iCnt = 0;
        int iCount = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        System.out.println("Enter the chracter:");
        char ch = sobj.next().charAt(0);

        for(int i = 0; i < str.length(); i++)
        {
            iCnt++;

            if(str.charAt(i) == ch)
            {
                iCount = iCnt;
            }
        }

        System.out.print("The index of that chracter:"+iCount);
    }
}