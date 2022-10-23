#include <iostream>
using namespace std;

class complex{
    public:

        int real;
        int imag;
        complex()
        {}
        complex(int x,int y)
        {
            real=x;
            imag=y;
        }

        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }

        complex operator +(complex dist)
        {
            complex SUM;
            SUM.real= real+dist.real;
            SUM.imag=imag+dist.imag;
            return SUM;
        }

        // Prefix overload
        void operator ++()
        {
            real=real+1;
            imag=imag+1;
        }

        // Postfix overload
        complex operator ++(int)
        {
            complex temp;
            temp.real=real++;
            temp.imag=imag++;
            return temp;
        }
};

int main()
{
    complex c1(2,3);
    c1.display();
    complex c2(3,7);
    c2.display();
    complex c3=c1+c2;
    c3.display();
    ++c3;
    c3.display();
    complex c4;
    c4=c3++;
    c3.display();
    c4.display();
    return 0;
}