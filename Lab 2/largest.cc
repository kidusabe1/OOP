#include <iostream>
using namespace std;
int main()
{
    int a,b,largest;
    cout<<"Give two numbers\n";
    cin>>a>>b;
    largest=a>b?a:b;
    cout<<"The largest of the two is "<<largest;
    return 0;
}