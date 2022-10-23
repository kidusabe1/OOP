#include <iostream>
#define n 5
using namespace std;

class store_array{
    public:
        int i;
        int arr[n];
        store_array()
        {
            i=0;
            cout<<"Array initialised\n";
        }
        void display()
        {
            for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
        }

        friend istream & operator >>(istream &,store_array&);
        friend ostream & operator <<(ostream &,store_array&);
};

istream & operator >>(istream & in,store_array& A)
{
    int i=0;
    while(i<n)
    {
        cout<<"Give Element: ";
        in>>A.arr[i];
        i++; 
    }
    return in;
}
ostream & operator <<(ostream & out,store_array& B)
{
    int i=0;
    while(i<n)
    {
        out<<B.arr[i]<<" ";
        i++;
    }
    return out;
}

int main()
{
    store_array arr;
    cin>>arr;
    cout<<arr;
}

