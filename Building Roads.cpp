#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> v[(int)1e5];
	bool visited[(int)1e5];
	int n;int m;
void dfs(int curr)
{
    visited[curr]=true;
    vector<int> adj=v[curr];
    for(auto it:adj){
    if(!visited[it])
    dfs(it);
    }
}
int main() {
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
	    int a;int b;cin>>a>>b;
	    a--;b--;
	    v[a].push_back(b);
	    v[b].push_back(a);
	}
	vector<int> ans;
	for(int i=0;i<n;i++)
	{
	    if(!visited[i])
	    { dfs(i);
	    ans.push_back(i);
	    }
	}
	std::cout << ans.size()-1 << std::endl;
	for(int i=1;i<ans.size();i++)
	cout<<1+ans[i-1]<<" "<<1+ans[i]<<endl;
	return 0;
}
