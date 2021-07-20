#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> v[(int)1e5];
	int p[(int)1e5];
	int n;int m;
int main() {
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
	    int a;int b;cin>>a>>b;
	    a--;b--;
	    v[a].push_back(b);
	    v[b].push_back(a);
	}
	queue<int> q;
	q.push(0);
	memset(p,-1,n*4);
	while(q.size()>0)
	{
	    int c=q.front();q.pop();
	    for(auto it:v[c])
	    {
	    if(p[it]<0)
	    {
	    p[it]=c;
	    q.push(it);
	    }
	    }
	}
	vector<int> ans;
	if(p[n-1]>=0)
	{int t=n-1;
	    while(t)
	    {
	        ans.push_back(t);
	        t=p[t];
	    }
	    ans.push_back(0);
	    reverse(ans.begin(),ans.end());
	    cout<<ans.size()<<"\n";
	    for(auto it:ans)
	    cout<<it+1<<" ";
	}
	else
	cout<<"IMPOSSIBLE";
	return 0;
}
