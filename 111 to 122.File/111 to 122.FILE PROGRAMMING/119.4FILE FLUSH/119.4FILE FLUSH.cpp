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
    out.flush();///After using flush hello is saved but not closed.

    char str[100];
    in>>str;
    cout<<str;

    out.close();
    in.close();

    return 0;
}
