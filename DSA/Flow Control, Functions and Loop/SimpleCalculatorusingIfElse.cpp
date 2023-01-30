
#include <iostream>

using namespace std;
//using if else
int main()
{
    char op;
    int a,b;
    cout<<"Enter the numbers "<<endl;
    cin>>a>>b;
    cout<<"Enter the operation "<<endl;
    cin>>op;
    if(op=='+')
    {
        cout<<"Sum: ";
        cout<<a+b;
    }
    else if(op=='-')
    {
        cout<<"Difference: ";
        cout<<a-b;
    }
    else if(op=='*')
    {
        cout<<"Multiplication: ";
        cout<<a*b;
    }
    else
    {
        cout<<"Division: ";
        cout<<a/b;
    }

    return 0;
}
