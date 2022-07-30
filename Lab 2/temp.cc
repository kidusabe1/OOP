#include <iostream>
using namespace std;
int main()
{
    float f,c;
    cout<<"give a temperature in farenheit\n";
    cin>>f;
    c=(f-32) * 5/9;
    cout<<"The temperature in centigrade is "<<c;
    return 0;
}