///IO IOS MEMBER FLAGS SETS TYPE 2
#include<iostream>
using namespace std;

int main()
{
///Seting flags without using setf function.
    ios::fmtflags f;
    f = ios::showpos | ios::showpoint;
    cout.flags(f);
    cout<<100.1<<endl;

    return 0;
}

