/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class dicecombinations
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner in=new Scanner(System.in);
		long n=in.nextLong();
		long dp[]=new long[(int)n+1];
		dp[0]=1;
		for(int i=1;i<=n;i++)
		{
		    for(int j=1;j<=Math.min(6,i);j++)
		    {
		        dp[i]=(dp[i]+dp[i-j])%1000000007;
		    }
		}
		System.out.println(dp[(int)n]);
	}
}
