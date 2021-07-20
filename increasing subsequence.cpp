#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	vector<int> v;
	while(n-->0)
	{
	    int no;cin>>no;
	    int ind=lower_bound(v.begin(),v.end(),no)-v.begin();
	    if(ind<v.size())
	    v[ind]=no;
	    else
	    v.push_back(no);
	}cout<<v.size();
	return 0;
}
