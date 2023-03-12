#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int getMax(int arr[], int size)
{
    int max = 0;
    for(int i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

void countingSort(int arr[], int size)
{
    int maxx = getMax(arr,size); // find the maximum element
    int count[maxx+1] = {0};

    // update the count of every value in the count array 
    for(int i=0;i<size;i++)
    {
        count[arr[i]]++;
    }
    for(int i=1;i<=maxx;i++)
    {
        count[i] = count[i] + count[i-1];
    }
    int output[size];

    for(int i = size-1;i>=0;i--)
    {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    printArray(output,size);
}


int main()
{
    int arr[] = {5,4,7,5,6,2,11,9,8,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array : ";
    printArray(arr,size);
    countingSort(arr, size);
}
