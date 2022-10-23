#include <iostream>
using namespace std;


class Distance{
    public:

        int feet;
        int inches;
        Distance()
        {}
        Distance(int x,int y)
        {
            feet=x;
            inches=y;
        }

        void display()
        {
            cout<<"Feet: "<<feet<<"\nInches: "<<inches<<endl;
        }

        Distance operator +(Distance dist)
        {
            Distance SUM;
            SUM.feet= feet+dist.feet;
            SUM.inches=inches+dist.inches;
            return SUM;
        } 
        Distance operator +(int dist)
        {
            Distance SUM;
            SUM.inches=inches+dist;
            return SUM;
        }

        void operator -()
        {
            feet=-feet;
            inches=-inches;
        }
};

int main()
{
    Distance d1(1,4);
    Distance d2(3,10);
    Distance d3= d1+d2;
    d1.display();
    d2.display();
    d3.display();

    d3=d3+10;
    d3.display();
    -d3;
    d3.display();
    return 0;
}