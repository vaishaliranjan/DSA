/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
bool isSorted(int arr[],int n)
{
    for(int i=1; i<=n;i++)
       {
           if(arr[i-1]<=arr[i])
           {
               continue;
           }
           else
           {
               return 0;
           }
       }
       return 1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<isSorted(arr, n);

    return 0;
}