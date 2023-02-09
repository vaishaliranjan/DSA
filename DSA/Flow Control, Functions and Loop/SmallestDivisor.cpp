#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cout<<"no. ";
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            x=i;
            break;
        }
    }
    cout<<x;

    return 0;
}
