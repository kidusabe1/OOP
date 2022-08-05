#include <iostream>
using namespace std;
void swap(int& c, int&d)
{
    int temp=c;
    c=d;
    d=temp;
}
int main()
{
    int x=9,y=2;
    int &a=x,&b=y;
    cout<<x<<" = "<<a<<endl<<y<<" = "<<b<<endl;
    swap(a,b);
    cout<<x<<" = "<<a<<endl<<y<<" = "<<b<<endl;
    return 0;
}
