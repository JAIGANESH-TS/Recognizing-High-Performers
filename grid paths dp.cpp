#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++)
	cin>>s[i];
	long dp[n][n];
	memset(dp,0,sizeof dp);
	for(int i=0;i<n;i++)
	{
	    if(s[0][i]=='.')
	    dp[0][i]=1;
	    else
	    break;
	}
	for(int i=0;i<n;i++)
	{
	    if(s[i][0]=='.')
	    dp[i][0]=1;
	    else
	    break;
	}for(int i=1;i<n;i++)
	{
	    for(int j=1;j<n;j++)
	    {
	        if(s[i][j]=='.')
	        dp[i][j]=(dp[i-1][j]+dp[i][j-1])%1000000007;
	    }
	}cout<<dp[n-1][n-1];
	return 0;
}
