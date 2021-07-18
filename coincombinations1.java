/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
class coincombinations1
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner in=new Scanner(System.in);
	    int n=in.nextInt();
	    long x=in.nextLong();
	    long dp[]=new long[(int)x+1];
	    int arr[]=new int[n];
	    for(int i=0;i<n;i++)
	    arr[i]=in.nextInt();
	    dp[0]=1;
	    for(int i=1;i<=(int)x;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(arr[j]<=i)
	            dp[i]=(dp[i]+dp[i-arr[j]])%1000000007;
	        }
	    }
	    System.out.println(dp[(int)x]);
	}
}
