/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
class minimizingcoins
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
	    //Arrays.fill(arr,Integer.MAX_VALUE);
	    dp[0]=0;
	    for(int i=1;i<=(int)x;i++)
	    {
	        dp[i]=999999999;
	        for(int j=0;j<n;j++)
	        {
	            if(arr[j]<=i)
	            dp[i]=Math.min(dp[i],1+dp[i-arr[j]]);
	        }
	    }
	    if(dp[(int)x]>=999999999)
	    dp[(int)x]=-1;
	    System.out.println(dp[(int)x]);
	}
}