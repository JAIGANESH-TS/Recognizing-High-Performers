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

void heapify(int arr[],int n, int parentIndex)
{
    int leftChildIndex = 2*parentIndex + 1;
    int rightChildIndex = 2*parentIndex + 2;
    int largestValueIndex = parentIndex;

    // if parent value is smaller than the child values
    // then parent value is swapped with the largest of the two child values

    if((arr[largestValueIndex] < arr[leftChildIndex]) && (leftChildIndex<n) )
    {
        largestValueIndex = leftChildIndex;
    }
    if((arr[largestValueIndex] < arr[rightChildIndex]) && (rightChildIndex<n))
    {
        largestValueIndex = rightChildIndex;
    }
    if(largestValueIndex != parentIndex) // if the largest value between parent, left and right is not the parent Value 
    {
        int temp = arr[largestValueIndex];
        arr[largestValueIndex] = arr[parentIndex];
        arr[parentIndex] = temp;

        // re-heapify value that was swapped
        heapify(arr,n,largestValueIndex);
    }
}


void createHEAP(int arr[], int n)
{
    // heapify all parent values starting from n/2 -1
    for(int i=n/2-1;i>=0;i--) 
    {
        heapify(arr,n,i);
    }
    cout<<"HEAP : ";
    printArray(arr,n);
}

void heapSort(int arr[], int n)
{
    createHEAP(arr,n); // #1. create a max heap
    // arr[0] will be the largest value in the MAX HEAP 
    int count=1;
    for(int i=n-1;i>0;i--)
    { 
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
        cout<<"after Iteration #"<<count<<" : Array ";
        printArray(arr,n);
        count++;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array : ";
    printArray(arr,n);
    heapSort(arr,n);
}
