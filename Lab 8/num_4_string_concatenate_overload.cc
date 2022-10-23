#include <iostream>
#include <cstring>
using namespace std;

class student{
int length;
char* name;
public:
    student()
    {
        name= new char[20];
    }
    student(char* S)
    {
        length=strlen(S);
        name=new char[length+1];
        strcpy(name,S);
    }
    void get_data()
    {
        cout<<name;
    }
    void set_data(char* S)
    {
        length=strlen(S);
        name=new char[length+1];
        strcpy(name,S);
    }

    student operator +(student nam)
    {
        student result;
        length=strlen(nam.name);
        char* s1= new char[length+1];
        strcpy(s1,nam.name);
        int length1=strlen(name);
        char* s3= new char[length1+1+length];
        strcpy(s3,name);
        strcat(s3,s1);
        result.set_data(s3);
        return result;
    }
};

int main()
{
    student s1,s2;
    s1.set_data("OOP ");
    s2.set_data("Lab 8");
    student s3;
    /////////
    s3=s1+s2;
    s3.get_data();
    return 0;
}