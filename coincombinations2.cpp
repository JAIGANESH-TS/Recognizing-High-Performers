#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	int t;
	cin>>n>>t;
	long arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		long dp[t+1];
		for(int i=0;i<=t;i++)
		dp[i]=0;
		dp[0]=1;
		long mod=1000000007;
		for(int i=0;i<n;i++)
		{
		    for(int j=1;j<=t;j++)
		    {
		        if(arr[i]<=j)
		        dp[j]=(dp[j]+dp[(int)(j-arr[i])])%mod;
		    }
		}
		cout<<dp[(int)t];
	return 0;
}
