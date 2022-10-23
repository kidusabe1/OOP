#include  <iostream>
#include<string.h>
using namespace std;

class str_operation{

    string my_word;
    int string_len;

    public:

    str_operation()
    {
        cout<<"Constructor is called...\n";
    }

    str_operation(string WORD)
    {
        my_word=WORD;
        string_len=WORD.length();
        cout<<"Your given string is "<<my_word<<"and has a length of "<<string_len<<endl;
    }

    str_operation(str_operation &s1)
    {
        cout<<"Your given string is "<<s1.my_word<<"and has a length of "<<s1.string_len<<endl;
    }

    void str_concatinate()
    {
        string to_be_concatenated,result;
        cout<<"Give a string you want to concatenate with the original string: ";
        //cin>>to_be_concatenated;
        getline(cin,to_be_concatenated);
        my_word.append(to_be_concatenated);
        cout<<"The concatenated string is: "<<my_word<<endl;
    }
};

int main()
{
    str_operation str1;
    str_operation str2("OOP Lab 6 ");
    str_operation str3(str2);
    str2.str_concatinate();
    return 0;
}