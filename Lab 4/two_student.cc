#include <iostream>
#include <string>
using namespace std;
class student{
    public:
    string name;
    int roll_number;
    int total_marks;
};

int main()
{
    student s1;
    cout<<"Give the name of your student\n";
    cin>>s1.name;
    cout<<"Give the roll number and total marks respectively\n";
    cin>>s1.roll_number>>s1.total_marks;
    //DISPLAYING THE DETAILS
    cout<<"NAME: "<<s1.name<<endl;
    cout<<"ROLL NUMBER: "<<s1.roll_number<<endl;
    cout<<"TOTAL MARKS: "<<s1.total_marks<<endl;
    return 0;
}