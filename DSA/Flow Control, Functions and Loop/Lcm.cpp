#include <iostream>

using namespace std;

int main()
{
    
    int a,b,g=1,n;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    
    if(a>b)
    {
        n=a;
    }
    else
    {
        n=b;
    }
    for(int i=n;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
           cout<<"LCM "<<i;
           break;
        }
    }
    

    return 0;
}
