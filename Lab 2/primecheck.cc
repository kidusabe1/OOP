#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"provide a number\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count!=2)
    {
        cout<<n<<" Is not a prime number\n";
    }
    else
        cout<<n<<" Is a prime number\n";
    return 0;
}