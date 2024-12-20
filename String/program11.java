//Write a program which accept string from user and display it in reverse order.

import java.util.*;

class program11
{
    public static void Reverse(char Brr[])
    {
       int iEnd = Brr.length-1;
       int iStart = 0;
       char Temp;

       while(iStart < iEnd)
       {
            Temp = Brr[iStart];
            Brr[iStart] = Brr[iEnd];
            Brr[iEnd]  = Temp;

            iStart++;
            iEnd--;
        } 
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        Reverse(Arr);

        String Str1 = new String(Arr);  // Converted back to string from array

        System.out.println(Str1);
    }
}