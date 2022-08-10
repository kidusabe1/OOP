#include <iostream>
#include <string>
using namespace std;
class student{
    string name;
    int roll_number;
    float maths;
    float chemistry;
    float physics;
    float biology;
    float english;
    public:

        void get_data()
        {
            cout<<"Name: ";
            cin>>name;
            cout<<"Roll number: ";
            cin>>roll_number;
            cout<<"Maths Result: ";
            cin>>maths;
            cout<<"chemistry result: ";
            cin>>chemistry;
            cout<<"Physics result: ";
            cin>>physics;
            cout<<"biology result: ";
            cin>>biology;
            cout<<"English result: ";
            cin>>english;
        }


        int total_marks()
        {
            int result;
            result= maths+chemistry+physics+biology+english;
            return result;
        }

        int percentage()
        {
            int result;
            result= total_marks()/5;
            return result;
        }

        void display_data()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Roll number: "<<roll_number<<endl;
            cout<<"Chemistry Result: "<<chemistry<<endl;
            cout<<"Physics Result: "<<physics<<endl;
            cout<<"Biology Result: "<<biology<<endl;
            cout<<"Maths Result: "<<maths<<endl;
            cout<<"English reuslt: "<<english<<endl;
        }


};

int main()
{
    student s1;
    cout<<"Give the details of your students\n";
    s1.get_data();
    cout<<"\n\nThe details u have given are\n\n";
    s1.display_data();
    cout<<"Total Marks: "<<s1.total_marks()<<endl;
    cout<<"Percentage: "<<s1.percentage()<<endl;
    return 0;
}