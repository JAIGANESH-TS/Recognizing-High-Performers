#include <iostream>
using namespace std;
int co=0;
int m;int n;
string s[1000];
void dfs(int i,int j)
	{
	    int dir[]={0,1,0,-1,0};
	    s[i][j]='#';
	    for(int i21=0;i21<4;i21++)
	    {
	        int nx=i+dir[i21];
	        int ny=j+dir[i21+1];
	        if(nx<0 || ny<0 || nx>=m || ny>=n)
	        continue;
	        if(s[nx][ny]=='.')
	        dfs(nx,ny);
	    }
	}
int main() {
	// your code goes here
	    //int m;
	    //int n;
	    cin>>m>>n;
	    for(int i=0;i<m;i++)
	    cin>>s[i];
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(s[i][j]=='.'){
	            dfs(i,j);co++;
	            }
	        }
	    }
	    cout<<co;
	return 0;
}
