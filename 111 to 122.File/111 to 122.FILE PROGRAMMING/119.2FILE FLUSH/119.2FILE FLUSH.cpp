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

    char str[100];
    in>>str;
    cout<<str;
///As we don't save or close after write so garbage value is shown.
    out.close();
    in.close();

    return 0;
}
