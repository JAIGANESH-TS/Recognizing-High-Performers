#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int r;int c;
string s[(int)1e3];
string path[(int)1e3];
int main() {
	// your code goes here
	cin>>r>>c;
	for(int i=0;i<r;i++)
	cin>>s[i];
	queue<array<int,2>> q;
	int sx=0;
	int sy=0;
	int dx=0;
	int dy=0;
	for(int i=0;i<r;i++)
	{
	    path[i]=string(c,0);
	    for(int j=0;j<c;j++)
	    {
	    if(s[i][j]=='A')
	    {
	        sx=i;sy=j;
	    }
	    if(s[i][j]=='B')
	    {
	        dx=i;dy=j;
	    }
	    path[i][j]='*';
	    }
	    
	}
	int dir[]={0,1,0,-1,0};
	char ch[]={'R','D','L','U'};
	q.push({sx,sy});
	s[dx][dy]='.';
	while(q.size()>0)
	{
	    array<int,2> curr=q.front();
	    q.pop();
	    if(curr[0]==dx && curr[1]==dy)
	    break;
	    for(int i=0;i<4;i++)
	    {
	        int nx=dir[i]+curr[0];
	        int ny=dir[1+i]+curr[1];
	        if(nx<0 || ny<0 || nx>=r || ny>=c || s[nx][ny]=='#')
	        continue;
	        q.push({nx,ny});
	        path[nx][ny]=ch[i];
             s[nx][ny]='#';
	    }
	}
	if(path[dx][dy]!='*'){cout<<"YES"<<"\n";
	string p="";
/*	for(int i=0;i<r;i++)
	{
	    for(int j=0;j<c;j++)
	    cout<<path[i][j];
	    cout<<endl;
	}*/
	while(true)
	{
	  if(dx==sx && dy==sy)
	    break;
	    if(path[dx][dy]=='L'){p+="L";
	     dy++;
	    }
	     else if(path[dx][dy]=='R'){
	     dy--;p+="R";
	     }
	     else if(path[dx][dy]=='U')
	     {dx++;p+="U";
	     }else{
	     dx--;p+="D";
	}}
	reverse(p.begin(),p.end());
	cout<<p.size()<<endl<<p;
	}
	else
	cout<<"NO";
	return 0;
}
