#include<iostream>
using namespace std;
class account{
    public:
    int acc;
    int bal;
    char name[20];
};
class saving: public account{
    public:
    int min;
    void details(){
    cout<<"enter the name of the employee"<<endl;
    cin>>name;
    cout<<"enter the account number of the employee "<<endl;
    cin>>acc;
    cout<<"enter the balance of the employee"<<endl;
    cin>>bal;
    cout<<"enter the min balance of the employee "<<endl;
    cin>>min;
   }
   void deposit(){
    int mon;
    cout<<"enter the amount you want to deposit "<<endl;
    cin>>mon;
    bal=bal+mon;
 }
 void withdraw(){
    int mon1;
    cout<<"enter the amount you want to withdraw "<<endl;
    cin>>mon1;
    if (bal<min)
    {
        cout<<"not enough balance to withdraw "<<endl;
    }
    else{
        bal=bal-mon1;
    }
 }
 void balance(){
    cout<<" the balance for saving account for "<<name<<"left is"<<endl;
    cout<<bal<<endl;
 }
};