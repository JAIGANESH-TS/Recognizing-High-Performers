#include <iostream>
#include <set>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int n;
	cin>>n;
	array<int,3> v[n];
	for(int i=0;i<n;i++)
    {
    cin>>v[i][1]>>v[i][0]>>v[i][2];
    }
    sort(v,v+n);
    set<array<long,2>> dp;
    long maxi=0;
    dp.insert({0,0});
    for(int i=0;i<n;i++)
    {
        auto pos=dp.lower_bound({v[i][1]});
        pos--;
        maxi=max(maxi,v[i][2]+(*pos)[1]);
        dp.insert({v[i][0],maxi});
    }
    cout<<maxi;
	return 0;
}
