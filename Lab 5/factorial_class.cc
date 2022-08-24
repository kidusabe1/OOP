#include <iostream>
using namespace std;

class fact{
    int f;

    public:
        void get_number()
        {
            cout<<"\nGive number: ";
            cin>>f;
        }
        int factorial()
        {
            int answer=1;
            for(int i=f;i>0;i--)
            {
                answer=answer*i;
            }
            return answer;
        }
};

int main()
{
    fact f1;
    f1.get_number();
    cout<<"\nThe factorial of the number u gave is "<<f1.factorial()<<endl;
    return 0;
}