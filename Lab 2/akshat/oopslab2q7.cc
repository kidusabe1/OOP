#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the lowerercase alphabet:";
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        ch=ch-32;
        cout<<"The uppercase alphabet after conversion is:"<<ch;
    }
    else
    {
        cout<<"Please enter the alphabet between a and z";
    }
    return 0;
}