#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long n;
	cin>>n;
	for(long i=1;i<=n;i++)
	{
	    long tot=(i*i)*(i*i-1)/2;
//	    no of 2*3 ->(i-1)*(i-2)
//	    no of 3*2 ->(i-2)*(i-1)
	    long attack=2*2*(i-1)*(i-2);
	    cout<<tot-attack<<"\n";
	}
	return 0;
}
