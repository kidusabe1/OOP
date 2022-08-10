#include <iostream>
using namespace std;

class DISTANCE{
    
    int feet;
    int inches;
    int sum_feet;
    int sum_inches;
    public:
        void get_data()
        {
            cout<<"Feet: ";
            cin>>feet;
            cout<<"Inches: ";
            cin>>inches;
        }
        void add1(DISTANCE a1, DISTANCE a2)
        {
            int rem,qou;
            sum_feet=a1.feet+a2.feet;
            sum_inches=a1.inches+a2.inches;
            if(sum_inches>=12)
            {
                sum_feet+=sum_inches/12;
                sum_inches=sum_inches%12;
            }
        }

        DISTANCE add2(DISTANCE a)
        {
            DISTANCE ret;
            ret.sum_feet= feet+ a.feet;
            ret.sum_inches=inches+a.inches;
            if(ret.sum_inches>=12)
            {
                ret.sum_feet+=ret.sum_inches/12;
                ret.sum_inches=ret.sum_inches%12;
            }
            return ret;
        }

        void display_data()
        {
            cout<<"FEET=> "<<sum_feet<<endl;
            cout<<"INCHES=> "<<sum_inches<<endl;
        }
};

int main()
{
    DISTANCE c1,c2,c3;
    cout<<"Give Distance 1...\n";
    c1.get_data();
    cout<<"Give Distance 2...\n";
    c2.get_data();

    c3= c1.add2(c2);
    cout<<"\n\nThe sum of your 2 measurements is\n";
    c3.display_data();

    cout<<"\n\nOR CALCULATING THE OTHER WAY\n";
    DISTANCE c4;
    c4.add1(c1,c2);
    cout<<"The sum of your 2 measurements is\n";
    c4.display_data();
    
    return 0;
}