///IO MANIPULATORS UPPERCASE, NOUPPERCASE
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<< hex <<showbase << 123<<endl;
    cout<< hex <<showbase<< uppercase << 123<<endl;
    cout<< hex <<showbase<< nouppercase << 123<<endl;
    cout<< scientific<< uppercase<< 123.4<<endl;
    cout<< scientific<< nouppercase << 123.4<<endl;

    return 0;
}
