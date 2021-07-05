/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class repetitions
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		try {
		Scanner in=new Scanner(System.in);
		String s=in.next();
		int co=1;int max=1;char ch=s.charAt(0);
		for(int i=1;i<s.length();i++)
		{
		    if(ch==s.charAt(i))
		    co++;
		    else
		    co=1;
		    ch=s.charAt(i);
		    max=Math.max(max,co);
		}
		System.out.println(max);
		} catch(Exception e) {
		}
	}
}
