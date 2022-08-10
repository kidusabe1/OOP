#include <iostream>
#include <algorithm>
using namespace std;

class complex{
    int real;
    int imaginary;
    public:
        void get_data()
        {
            cout<<"Real part: ";
            cin>>real;
            cout<<"Imaginary Part: ";
            cin>>imaginary;
        }
        void display_data()
        {
            cout<<"==> "<<real<<" + ("<<imaginary<<"i)\n";
        }
};
int main()
{
    complex c[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Give the real and imaginary part of complex number "<<i+1<<endl;
        c[i].get_data();
    }
    cout<<"Your complex numbers are:\n";
    for(int i=0;i<5;i++)
    {
        c[i].display_data();
    }
}