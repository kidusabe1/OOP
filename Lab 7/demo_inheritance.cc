#include <iostream>
using namespace std;


class A
{
    public:
        int a;
        A()
        {
            cout<<"Constructor of A"<<endl;
        }
};

class singleton:public A
{
    public:

    singleton()
    {
        cout<<"Constructor of singleton here, single inheritance from A!"<<endl;
    }
};

class B: public A
{
    public:
        int b;
        B()
        {
            cout<<"Hello, constructor of B here"<<endl;
        };
};

class C: public A
{
  public:
    int c;
    C()
    {
        cout<<"Constructor of C here"<<endl;
    }   
};


class D: public B, C
{
    public:
        D()
        {
            cout<<"Constructor of D here\n";
        }
};

class E: public D
{
    public:
        E()
        {
            cout<<"Constructor of E here, has multilevel inheritance\n";
        }
};


int main()
{
    singleton single;
    D obj_d;
    E obj_e;
    return 0;
}