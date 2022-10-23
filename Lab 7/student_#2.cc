#include <iostream>
#include<ios>    
using namespace std;

class student
{
    protected:
        string name;
        static int roll_number;
        int age;
    public:
    student()
    {
        roll_number++;
    }
};
int student:: roll_number=0;

class test:public student
{
    int math;
    int eng;
    int chem;
    int oop;
    int dsa;
    public:
        void set_data()
        {
            cout<<"\nGive Name and Age respectively: ";
            cin>>name>>age;
            cout<<"\nMath: ";
            cin>>math;
            cout<<"\nEnglish: ";
            cin>>eng;
            cout<<"\nChemistry: ";
            cin>>chem;
            cout<<"\nOOP: ";
            cin>>oop;
            cout<<"\nDSA: ";
            cin>>dsa;
        }

        void get_data()
        {
            cout<<"Roll number: "<<roll_number<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Math: "<<math<<endl;
            cout<<"English: "<<eng<<endl;
            cout<<"Chemistry: "<<chem<<endl;
            cout<<"OOP: "<<oop<<endl;
            cout<<"DSA: "<<dsa<<endl;
        }
};


int main()
{
    test st[5];
    return 0;
}