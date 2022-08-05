#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"After Swapping value of a:\n"<<a;
    cout<<"\nAfter Swapping value of b:\n"<<b;
    return 0;
}    