#include<iostream>
using namespace std;
int main()
{
    int n,m,sum=0;
    cout<<"Enter a no:";
    cin>>n;
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    cout<<"The sum of digits of a given no is:"<<sum;
    return 0;
}