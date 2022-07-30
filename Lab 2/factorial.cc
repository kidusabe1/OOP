#include <iostream>
using namespace std;
int main()
{
    int n,temp,result=1;
    cout<<"Give a number"<<endl;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        result*=i;
    }
    cout<<"The factorial of "<<n<<" is "<<result<<endl;
    return 0;
}