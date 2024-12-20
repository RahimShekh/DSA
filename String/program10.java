// Write a program which accept string from user and cheack whether it contains vowels or not.

import java.util.*;

class program10
{
    public static void main(String arg[])
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] =='a' ||Arr[i] =='e' ||Arr[i] =='i' ||Arr[i] =='o' ||Arr[i] =='u')
            {
                iCnt++;
            }
        }

        System.out.println("The Vowels Count :"+iCnt);
    }
}