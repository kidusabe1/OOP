#include <iostream>
using namespace std;

class distance{
    public:
        int meters;
    
    distance(){}
    distance (int x)
    {
        meters=x;
    }
    distance operator +(distance dist)
    {
        distance SUM;
        SUM.meters=meters+dist.meters;
        return SUM;
    }

    bool operator ==(distance comp)
    {
        if(meters==comp.meters)
        {
            return true;
        }
        else
        {
            return false;
        }
    }   
    distance operator >(distance comp)
    {
        distance obj;
        obj.meters=meters;
        if(meters==comp.meters)
        {
            printf("They are Equal\n");
            return comp;
        }
        else if(meters>comp.meters)
            return obj;
        else
            return comp;
    }
};

