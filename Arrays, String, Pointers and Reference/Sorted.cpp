
#include <iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
      cout<<"Enter n: ";
    cin>>n;
    int arr[n];
  
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<isSorted(arr, n);
    //int n=sizeof(arr[])/sizeof(arr[0]);
    
    return 0;
}
