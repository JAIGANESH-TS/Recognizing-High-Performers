
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
#include<bits/stdc++.h>
using namespace std;
// find square root of number without sqrt() function
static int countt = 0;
int main()
{	
  int input = 121;
  int low = 0, high = input, mid = 0,temp; 
  while(low<=high)
  {
    countt++;
    mid = (low + high)/2;
    cout<<"low : "<<low<<" high : "<<high<<" Mid : "<< mid <<" Mid*Mid : "<< mid*mid << " Value : "<<input<<endl;
    if(mid*mid == input)
    {
      temp = mid;
      break;
    }
    else
    {
      if(mid*mid<input)
      {
        // values is present on the right side 
        low = mid + 1;
        temp = mid;
      }
      else
      {
        // value is present on left side
        high = mid - 1;
      }
    }
  }
  float finalAnswer = temp;
  float incrementFactor = 0.1;
  
  for(int i=0;i<=3;i++)
  {
    while(finalAnswer * finalAnswer <= input)
    {
      finalAnswer = finalAnswer + incrementFactor;
    }
    finalAnswer = finalAnswer - incrementFactor;// rollback
    incrementFactor = incrementFactor * 0.1;
  }

  cout<<"Square Root of "<<input<<" :: "<<finalAnswer<<endl;
  cout<<"Number of iterations : "<<countt;
}
