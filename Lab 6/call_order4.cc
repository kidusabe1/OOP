#include <iostream>
using namespace std;

class abc{
    static int count_constructor;
    static int count_destructor;
    int data;
    public:
        abc()
        {
            count_constructor++;
            count_destructor++;
            cout<<"The constructor of obj "<<count_constructor<<" is called"<<endl;
        }

        ~abc()
        {
            cout<<"The destructor of obj "<<count_destructor<<" is called"<<endl;
            count_destructor--;
        }
};
int abc:: count_constructor=0;
int abc:: count_destructor=0;

int main()
{
    abc obj1;
    abc obj2[5];
    cout<<endl;
    return 0;
}


// ??? In which order is the destructor getting called, show through  the program

