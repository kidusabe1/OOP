#include <iostream>
using namespace std;

class pal{
    int f;

    public:
        void get_number()
        {
            cout<<"Give number: ";
            cin>>f;
        }
        int palindrome()
        {
            int rem,temp=0,ten=10, space;
            space=f;
            while(f!=0)
            {
                rem=f%10;
                temp= temp*10+rem;
                f/=10;
            }
            if(temp==space) 
                return 1;

            else
                return 0;        
        }
};

int main()
{
    pal p1;
    p1.get_number();
    if(p1.palindrome()==1)
    {
        cout<<"Yes it is palindrome\n";
    }    
    else
    {
        cout<<"No it is not palindrome\n";
    }

    return 0;
}