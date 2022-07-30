#include <iostream>
using namespace std;
int main()
{
    int n,rem=0,sum=0;
    cout<<"Provide a number\n";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        sum+=rem;
    }
    cout<<"The sum of the digits of your number is "<<sum<<endl;
    return 0;
}