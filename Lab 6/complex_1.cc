#include <iostream>
using namespace std;

class complex{

    float real;
    float imaginary;

    public:

        complex()
        {
            cout<<"Complex Number is not yet given.\n";
        }
        complex(float a, float b)
        {
            real=a;
            imaginary=b;
            cout<<"Complex Number: "<<real<<" + "<<imaginary<<"i"<<endl;
        }

        complex(complex &c1)
        {
            cout<<"Complex Number: "<<c1.real<<" + "<<c1.imaginary<<"i"<<endl;
        }

        ~complex()
        {
            cout<<"Destructor is invoked!\n";
        }
};

int main()
{
    complex obj1;
    complex obj2(23,2.3);
    complex obj3(obj2);
    return 0;
}