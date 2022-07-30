#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a,b,operation,result;
    cout<<"Please give two numbers\n";
    cin>>a>>b;
    cout<<"Choose the number associated with the operation you want to pperform\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cin>>operation;
    if(operation==1)
    {
        result=a+b;
        cout<<"Result is "<<result<<endl;
    }
    else if(operation==2)
    {
        result=a-b;
        cout<<"Result is "<<result<<endl;
    }
    else if(operation==3)
    {
        result=a*b;
        cout<<"Result is "<<result<<endl;
    }
    else if(operation==4)
    {
        result=a/b;
        cout<<"Result is "<<setprecision(4)<<result<<endl;
    }
    else
        cout<<"Invalid choice"<<endl;
    return 0;
}