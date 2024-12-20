import java.util.*;

class program7
{
    public static void main(String arg[])
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        for(int i = 1; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch =='R')
            {
                iCnt++;
            }
        }

        System.out.println("The Count is:"+iCnt);
    }
}