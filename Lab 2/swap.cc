#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Give two numbers\n";
    cin>>a>>b;
    cout<<"Values before swap are "<<a<<"and"<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"Values after swap are "<<a<<"and"<<b<<endl;
    return 0;
}