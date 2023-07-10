/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // string str;
    // cin>>str;
    // string rev="";
    // for(int l= str.length()-1; l>=0;l--)
    // {
    //     rev= rev+str[l];
    // }
    // if(rev==str)
    // {
    //     cout<<"Palindrome";
    // }
    // else
    // {
    //     cout<<"Not palindrome";
    // }

    // return 0;
    
    string str;
    cin>>str;
    int start= 0, end = str.length()-1;
    while(start<end){
        if(str[start]!=str[end])
        {
            cout<<"NO";
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    cout<<"YES";
    return 0;
}
