#include <iostream>

using namespace std;

int main()
{
    
    int n,m;
    cout<<"Enter num: ";
    cin>>n;
    cout<<"Enter times: ";
    cin>>m;
    for(int i=1; i<=m; i++)
    {
        cout<<n*i<<endl;
    }
    return 0;
}
