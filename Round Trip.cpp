#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool v[(int)1e5];
	int p[(int)1e5];
	int n;int m;
	vector<int> adj[(int)1e5];
void dfs(int i,int par)
{
    v[i]=true;
    for(int e:adj[i])
    {
        if(e==par)
        continue;
        if(v[e])
        {
         vector<int> ans;int temp=i;
         while(i^e)
         {
             ans.push_back(i);
             i=p[i];
         }
         ans.push_back(e);
         ans.push_back(temp);
         cout<<ans.size()<<endl;
         for(int it:ans)cout<<1+it<<" ";
         exit(0);
        }
        else
        {
            p[e]=i;
            dfs(e,i);
        }
    }
}
int main() {
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
	    int a;int b;cin>>a>>b;
	    a--;b--;
	    adj[a].push_back(b);
	    adj[b].push_back(a);
	}
    for(int i=0;i<n;i++)
    {
        if(!v[i]){
            dfs(i,-1);
        }
    }
	cout<<"IMPOSSIBLE";
	return 0;
}
