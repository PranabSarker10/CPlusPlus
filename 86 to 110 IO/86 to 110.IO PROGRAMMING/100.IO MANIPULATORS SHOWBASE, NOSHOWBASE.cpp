/// IO MANIPULATORS SHOWBASE, NOSHOWBASE
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<< oct << 123<<endl;
    cout<< oct << showbase << 123<<endl;///staring zero(0) means it is octal.
    cout<<noshowbase<<endl;///base is unshown.

    cout<< hex << 123<<endl;///For the previous noshowbase we can't identify hex.
    cout<< hex << showbase << 123<<endl;///0x indicaltes the base od hexadecimal.
    cout<<noshowbase<<endl;///base is unshown.
    //cout<< << 123<<endl;
    //cout<< << showbase << 123<<endl;
    return 0;
}
