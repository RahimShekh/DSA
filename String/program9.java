//Write a program which accept string from user and return differnce between frequency of small
// chracters and frequency of capital chracters.

import java.util.*;

class program9
{
    public static void main(String arg[])
    {
        int iCnt1 = 0, iCnt2 = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iCnt1++;
            }
            else if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                iCnt2++;
            }
        }

        System.out.println("The Differce :"+(iCnt2-iCnt1));
    }
}