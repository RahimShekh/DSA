/*
    Accept character from user. if Character is small display its corresponding capital 
    character, and if it is small then display its corresponding capital. In other cases display 
    as it is.
*/
import java.util.*;

class program6
{
    public static void SmallCapital(char ctr)
    {
        if((ctr >='A') && (ctr <='Z'))
        {
            System.out.println((char)(ctr+32));
        }
        else
        {
           System.out.println((char)(ctr-32));  
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Chracter:");
        char ch = sobj.next().charAt(0);

        SmallCapital(ch);
    }
}
