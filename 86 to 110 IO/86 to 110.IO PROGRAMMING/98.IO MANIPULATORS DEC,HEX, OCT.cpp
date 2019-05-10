///IO Manipulators dec, hex, oct

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<200<<endl;///Decimal is set by default. So we have no need to write dec to show it in decimal.
    cout<< oct << 200<<endl;
    cout<< hex << 200<<endl;
    cout<< dec <<200<<endl;///Somehow here decimal of 200 is printed.
    return 0;
}
