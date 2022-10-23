#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    char name[20];
    int sal;
};

class regular:public employee{
    public:
    int da;
    int hra;
    int b;
    void setdata(){
        cout<<" DETAILS OF REGULAR EMPLOYEE"<<endl;
        cout<<"enter the name of the employee"<<endl;
        cin>>name;
        cout<<"enter the id of the employee"<<endl;
        cin>>id;
       cout<<"enter the basic salary,da and hra of the employee respectively"<<endl;
       cin>>b;
       cin>>da;
       cin>>hra;
       sal=da+hra+b;
       cout<<"the salary of the employee is "<<endl;
       cout<<sal<<endl;
    }
};
class parttime: public employee{
    public:
    int hour;
    int pay;
     void setdata1(){
        cout<<" DETAILS OF PART TIME EMPLOYEE"<<endl;
        cout<<"enter the name of the employee"<<endl;
        cin>>name;
        cout<<"enter the id of the employee"<<endl;
        cin>>id;
       cout<<"enter the hour and pay per hour of the employee respectively"<<endl;
       cin>>hour;
       cin>>pay;
       sal=hour*pay;
       cout<<"the salary of the employee is "<<endl;
       cout<<sal<<endl;
    }

};
int main(){
regular r;
r.setdata();
parttime p;
p.setdata1();

return 0 ;
}