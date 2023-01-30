
#include <iostream>

using namespace std;
//the leap year should either be divisible by 400
//or divisible by 4 and not be 100(both condition) then
//the year will be the leap year
int main()
{
    int year;
    cout<<"Enter the year "<<endl;
    cin>>year;
    if(year%4==0 && year%100!=0)
    {
        cout<<"Leap year";
    }
    else if(year%400==0)
    {
        cout<<"Leap year";
    }
    else 
    {
        cout<<"Not a leap year";
    }
    

    return 0;
}
