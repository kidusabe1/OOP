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
            if(minute+dist.minute>59)
            SUM.hour= hour+dist.hour;
            SUM.minute=minute+dist.minute;
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
        Time operator >(Time comp)
        {
            Time obj;
            obj.hour=hour;
            obj.minute=minute;
            if(hour>comp.hour)
            {
                return  obj;
            }
            else if(hour<comp.hour)
            {
                return comp;
            }
            else{
                if(minute=comp.minute)
                {
                    printf("They are Equal\n");
                    return comp;
                }
                else if(minute>comp.minute)
                    return obj;
                else
                    return comp;
            }
        }
};

int main()
{
    Time t1(10,56);
    Time t2(10,56);
    Time t3= t1+t2;
    t3.display();
    if(t1==t2)
        cout<<"Equivalent\n";
    else
        cout<<"Non Equivalent\n";
    Time t4= t1>t2;
    t4.display();
    return 0;
}