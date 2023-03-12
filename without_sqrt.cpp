using namespace std;
// find square root of number without sqrt() function
static int countt = 0;
int main()
{	
  int input = 14641;
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
  cout<<temp;
  cout<<"Number of iterations : "<<countt;
}
