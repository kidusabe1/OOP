#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    if(a>b)
    {
        cout<<a<<" is the greatest";
    }
    if(b>a)
    {
        cout<<b<<" is the greatest";
    }
    return 0;
}