#include <iostream>
using namespace std;

class Time{

    int hour;
    int minute;

    public:
        Time()
        {}
        Time(int x,int y)
        {
            hour=x;
            minute=y;
        }

        void display()
        {
            cout<<hour<<" : "<<minute<<endl;
        }

        Time operator +(Time dist)
        {
            Time SUM;
            SUM.hour= hour+dist.hour;
            SUM.minute=minute+dist.minute;
            if(minute+dist.minute>59)
            {
                SUM.minute=0;
                SUM.hour+=1;
            }
            return SUM;
        }

        bool operator ==(Time comp)
        {
            if(hour==comp.hour && minute==comp.minute)
            {
                return true;
            }
            else
            {
                return false;
            }
        }   
};

int main()
{
    Time t1(10,20);
    Time t2(10,20);
    Time t3= t1+t2;
    t3.display();
    if(t1==t2)
        cout<<"Equivalent\n";
    else
        cout<<"Non Equivalent\n";

    return 0;
}