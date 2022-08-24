#include <iostream>
using namespace std;

class sum_of_digits{
    int f;

    public:
        void get_number()
        {
            cout<<"Give number: ";
            cin>>f;
        }
        int digit_sum()
        {
            int rem,temp=0,ten=10, space;
            while(f!=0)
            {
                rem=f%10;
                temp=temp+rem;
                f/=10;
            }    
            return temp;   
        }
};

int main()
{
    sum_of_digits p1;
    p1.get_number();
    cout<<"Sum of the digits of your number is: "<<p1.digit_sum()<<endl;
    return 0;
}