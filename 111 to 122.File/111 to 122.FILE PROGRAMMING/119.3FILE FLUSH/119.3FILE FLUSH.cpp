///File flush: The imediate process by which we can save a data in file without closing the file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    ifstream in;

    out.open("test.txt");
    in.open("test.txt");

    out<<"hello";
    out.close();///After closing hello is saved.
///But we need to save not close. And close will finish it.
    char str[100];
    in>>str;
    cout<<str;

    in.close();

    return 0;
}
