#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    string s;
    cin>>s;
    sort(s.begin(),s.end());
vector<string> v;
do
{
    v.push_back(s);
}while(next_permutation(s.begin(),s.end()));
std::cout << v.size() << std::endl;
for(string s:v)
cout<<s<<"\n";
	return 0;
}
