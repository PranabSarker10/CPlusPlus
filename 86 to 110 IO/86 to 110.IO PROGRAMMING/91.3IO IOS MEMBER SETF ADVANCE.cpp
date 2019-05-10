///IO IOS MEMBER SETF ADVANCE

#include<iostream>
using namespace std;

int main()
{
    //cout.set(f1,f2);
    cout.setf(ios::hex | ios::showbase,ios::basefield | ios:: showbase);
///After reseting showbase will come to show base and after reseting basefield will come to hex.
    cout<<100<<endl;
    return 0;
}


