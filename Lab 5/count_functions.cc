#include <iostream>
using namespace std;

class count_functions{
    int f;
    static int count_1;
    static int count_2;
    public:
        void get_number()
        {
            cout<<"\nGive number: ";
            cin>>f;
            count_1++;
        }
        void display_number()
        {
            count_2++;
            cout<<"\nThe number you gave is:"<<f;
        }
        static void show_count()
        {
            cout<<"\nThe input function has been called "<<count_1<<" times.";
            cout<<"\nThe output function has been called "<<count_2<<" times.";
        }
};

int count_functions::count_1;
int count_functions::count_2;

int main()
{
    count_functions f1,f2,f3;
    f1.get_number();
    f1.display_number();
    count_functions::show_count();
    f2.get_number();
    f2.display_number();
    count_functions::show_count();
    f3.get_number();
    f3.display_number();
    count_functions::show_count();
    return 0;
}