#include <iostream>
using namespace std;
class students{
    char name[20];
    int roll_number;
    static int n;
    int total_marks;
    static int average_mark;
    static int count;

    public:
        void get_data()
        {
            cout<<"\nGive name: ";
            cin>>name;
            cout<<"\nGive roll number: ";
            cin>>roll_number;
            cout<<"\nGive total marks: ";
            cin>>total_marks;
            n+=total_marks;
            cout<<endl<<endl;
            count++;
        }

        static int average_mark_fun()
        {
            average_mark= n/count;
            return average_mark;
        }
};
int students::n;
int students::average_mark;
int students:: count;


int main()
{
    int n;
    cout<<"Give number of students\n";
    cin>>n;
    students s[n];
    for(int i=0;i<n;i++)
    {
        s[i].get_data();
    }
    //calculating the total sum of 3 students//
    cout<<"The average marks of "<<n <<" students is:"<< students::average_mark_fun();
    return 0;
}