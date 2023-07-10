#include <iostream>
using namespace std;
int max(int arr[], int n)
{
    int max=arr[0];
    for(int i=0; i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
   
    return max;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
  
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<max(arr, n);
    //int n=sizeof(arr[])/sizeof(arr[0]);
    
    return 0;
}
