#include<iostream>
using namespace std;
int main()
{
    float a,b,add,sub,mul,div;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    add=a+b;
    cout<<"Addition of a and b\n"<<add;
    sub=a-b;
    cout<<"\nSubstraction of a and b\n"<<sub;
    mul=a*b;
    cout<<"\nMultiplication of a and b\n"<<mul;
    div=a/b;
    cout<<"\nDivision of a and b\n"<<div;
    return 0;
}