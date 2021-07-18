/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class trailingzero
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner in=new Scanner(System.in);
		long n=in.nextLong();
	    long ans=0;
	    while(n>0)
	    {
	        ans+=n/5;n=n/5;
	    }
	    System.out.println(ans);
	}
}
