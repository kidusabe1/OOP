#include <iostream>
using namespace std;

class counter{
    public:
    int count_input;
    int count_output;
    void input()
    {
        count_input++;
    }
    void output()
    {
        count_output++;
    }
};
int main()
{
    counter c;
    c.input();
    c.output();
    c.input();
    c.output();
    c.input();
    c.output();
    c.input();
    c.output();
    c.input();
    c.output();
    c.input();
    c.output();
    c.input();
    c.output();
    cout<<"The input function has been called "<< c.count_input<<" times"<<endl;
    cout<<"The output function has been called "<< c.count_output<<" times"<<endl;
    return 0;
}