
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the numbers "<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"The largest number: ";
        cout<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"The largest number: ";
        cout<<b;
    }
    else
    {
        cout<<"The largest number: ";
        cout<<c;
    }

    return 0;
}
