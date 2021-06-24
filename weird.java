import java.util.*;
public class weirdalgp
{
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        long n=in.nextLong();
        while(n>1)
        {
            System.out.println(n);
            if(n%2==0)
            n=n/2;
            else
            n=3*n+1;
        }
        System.out.println(1);
    }
}
