///WIDTH, PRECISION, FILL
#include<iostream>
using namespace std;

int main()
{
    cout.precision(4);///It is used for printing digit number.
    cout<<15.089<<endl;
    cout.precision(3);
    cout<<15.089<<endl;
    cout.precision(2);
    cout<<15.089<<endl;
    cout.precision(1);
    cout<<15.089<<endl;///Here for 5, 1 will add to 1 abd will show 2e+001.

    cout.precision(1);
    cout<<12.089<<endl;
///Remember: precision don't work for integer value.
    cout<<"Remember: precision don't work for integer value."<<endl;
    cout.precision(1);
    cout<<12089<<endl;///Though precision(1) but all 5 digits will be printed.

    return 0;
}

