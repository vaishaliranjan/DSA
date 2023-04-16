/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    string newstr="";
    int l= str.length()-1;
    while(l>=0)
    {
        newstr= newstr + str[l];
        l--;
    }
    cout<<newstr;

    return 0;
}
