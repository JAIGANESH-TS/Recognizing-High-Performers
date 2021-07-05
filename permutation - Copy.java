/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class permutation
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		try {
		    Scanner in=new Scanner(System.in);
		    int n=in.nextInt();
		   if(n==1)
		   {
		       System.out.println("1");return;
		   }
		   if(n==2 || n==3)
		   {
		       System.out.println("NO SOLUTION");return;
		   }
		   if(n%2==1)
		   {
		        for(int i=n-1;i>0;i-=2)
		        System.out.print(i+" ");
		        for(int i=n;i>0;i-=2)
		        System.out.print(i+" ");
		   }
		   else
		   {
		       for(int i=2;i<=n;i+=2)
		       System.out.print(i+" ");
		       for(int i=1;i<n;i+=2)
		       System.out.print(i+" ");
		   }
		} catch(Exception e) {
		}
	}
}