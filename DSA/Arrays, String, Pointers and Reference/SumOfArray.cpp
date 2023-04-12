#include <iostream>
using namespace std;
int sumOfArray(int arr[], int n)
{
    int sum =0;
    for(int i=0; i<n;i++)
    {
        sum += arr[i];
    }
    return sum;
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
    cout<<sumOfArray(arr, n);
    //int n=sizeof(arr[])/sizeof(arr[0]);
    
    return 0;
}
