
#include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
    int count= 0;
    bool isDis= true;
    for(int i=0; i<n;i++)
    {
        isDis= true;
        for(int j=arr[i-1]; j>=0; j--)
        {
            if(arr[i]==arr[j])
            {
                isDis=false;
                break;
            }
            
        }
        if(isDis==true)
        {
            count++;
        }
    }
    return count;
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
    cout<<countDistinct(arr, n);
    //int n=sizeof(arr[])/sizeof(arr[0]);
    
    return 0;
}
