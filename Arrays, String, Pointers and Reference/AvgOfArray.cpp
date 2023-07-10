#include <iostream>
using namespace std;
int avgOfArray(int arr[], int n)
{
    int sum=0;
    for(int i=0; i<n;i++)
    {
        sum += arr[i];
    }
   
    return sum/double(n);
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
    cout<<avgOfArray(arr, n);
    //int n=sizeof(arr[])/sizeof(arr[0]);
    
    return 0;
}
