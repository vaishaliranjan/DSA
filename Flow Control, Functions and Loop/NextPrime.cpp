
#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cout<<"Enter num: ";
    cin>>n;
  
    int i;
    for(i=2; i<n; i++)
    {
        n++;
        if(n%i==0)
        {
            break;
        }
        
    }
    if(i==n)
    {
        cout<<n;
    }
    cout<<"no prime number";
    return 0;
}
