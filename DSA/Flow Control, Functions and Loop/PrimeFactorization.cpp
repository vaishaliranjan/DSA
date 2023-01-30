
#include <iostream>

using namespace std;
bool isPrime(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
       
    }
    return true;
}
//first we started with 2 then if the number is prime we check if the number is divisible
//by the given number, if yes we print the number then we multiply the number by itself if its still dvisible then we print 
//that number again and so on
void prime_factors(int n)
{
    for(int i=2; i<n;i++)
    {
        int x=i;
        if(isPrime(i))
        {
            while(n%x==0)
            {
            cout<<i<<" ";
            x=x*i;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    prime_factors(n);
    return 0;
}
