
#include <iostream>

using namespace std;

int main()
{
    
    int n,count;
    cin>>n;
    
    while(n>0)
    {
       
        count++;
         n=n/10;
    }
    cout<<count;

    return 0;
}
