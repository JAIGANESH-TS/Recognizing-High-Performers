#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--)
	{
	    long r,c;
	    cin>>r>>c;
	    long max=0;
	    if(r>c)
	    max=r;
	    else
	    max=c;
	    long ans=(max-1)*(max-1);
	    if(max&1)
	    {
	        if(max==c)
	        ans+=2*max-r;
	        else
	        ans+=c;
	    }
	    else
	    {
	        if(max==c)
	        ans+=r;
	        else
	        ans+=2*max-c;
	        
	    }cout<<ans<<endl;
	}
	return 0;
}
