///Formatted output

/**
Generally formatted output is shown by 2 systems.

1)Using ios class member:
IOS means input output stream
Structure:stream.self(flag)
Example:cout.setf(ios::showpos);
Here showpos means if positive number it will show (+) sign at first.

2)Using manipulators:
#include<iomanip>
cout<< hex << 100;
Here by writing that we can show the hexadecimal number of 100.
*/
///IOS and Manipulators are almost same. And we can work with any-part I like.
#include<iostream>
using namespace std;

int main()
{
    cout<<12.34<<endl;
    cout.setf(ios::showpoint);
    cout<<12.345<<endl;
    return 0;
}
