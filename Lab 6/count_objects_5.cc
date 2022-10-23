// Q5. WAP to count number of objects created from a class using concept of static data members and
// static member function.

#include <iostream>
using namespace std;

class counter{

    static int count;
    int data;

    public:

    counter()
    {
        count++;
    }

    static void count_function()
    {
        cout<<"Objects of the 'Counter' class have been called "<<count<<" number of times\n";
    }
};

int counter::count;

int main()
{
    int choice=1;
    while(true)
    {
        cout<<"Do you want to create more objects?\n press 1 for yes\n 0 for No\n";
        cin>>choice; 
        if(choice==0)
            break;
        counter* ptr= new counter;
    }
    counter::count_function();
    return 0;
}