#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin>>n;
	long dp[n+1];
		for(int i=1;i<=n;i++)
		dp[i]=1e9;
		dp[0]=0;
		long mod=1000000007;
		for(int i=1;i<=n;i++)
		{
		    int temp=i;
		    while(temp)
		    {
		        dp[i]=min(dp[i],1+dp[i-temp%10]);
		        temp/=10;
		    }
		}
		cout<<dp[(int)n];
	return 0;
}
