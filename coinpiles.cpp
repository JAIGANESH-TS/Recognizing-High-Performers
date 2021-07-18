#include <iostream>
using namespace std;
int main() {
	// your code goes here
	long n;
	cin>>n;
	for(long i=1;i<=n;i++)
	{
	    long a;cin>>a;long b;cin>>b;
	    if((a+b)%3==0 && 2*a>=b && 2*b>=a)
	    cout<<"YES"<<"\n";
	    else
	    cout<<"NO"<<"\n";
	}
	return 0;
}
