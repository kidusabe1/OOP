#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout<<"Please give an alphabet\n";
    cin>>alpha;
    if(isupper(alpha)==1)
    {
        cout<<alpha<<"is already an uppercase\n";
    }
    else
    {
        alpha=toupper(alpha);
        cout<<alpha;
    }
    return 0;

}