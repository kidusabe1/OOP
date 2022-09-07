#include <iostream>
using namespace std;

class Time{

    int hh;
    int mm;

    public:

        Time()
        {
            cout<<"Time is not yet provided.\n";
        }

        Time(int a, int b=0)
        {
            hh=a;
            mm=b;
            cout<<"Timing given: "<<hh<<":"<<mm<<endl;
        }

        Time(Time &t1)
        {
            cout<<"Timing given: "<<t1.hh<<":"<<t1.mm<<endl;
        }
};

int main()
{
    Time obj1;
    Time obj2(24);
    Time obj3(24,34);
    Time obj4(obj3);

    return 0;
}