
#include <iostream>

using namespace std;
//using switch case
int main()
{
    char op;
    int a,b;
    cout<<"Enter the numbers "<<endl;
    cin>>a>>b;
    cout<<"Enter the operation "<<endl;
    cin>>op;
    switch(op)
    {
        case '+':
        {
             cout<<"Sum: ";
             cout<<a+b;
             break;
        }
         case '-':
        {
             cout<<"Difference: ";
             cout<<a-b;
             break;
        }
         case '*':
        {
            cout<<"Multiplication: ";
            cout<<a*b;
            break;
        }
         case '/':
        {
            cout<<"Division: ";
            cout<<a/b;
            break;
        }
        default: 
        {
            cout<<"Wrong Operation";
        }
    }

    return 0;
}
