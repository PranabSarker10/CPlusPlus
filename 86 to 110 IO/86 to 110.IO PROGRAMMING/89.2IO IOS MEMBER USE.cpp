///IO ios Member use
#include<iostream>
using namespace std;

int main()
{
    cout<<12.34<<endl;
    cout.setf(ios::scientific);
    cout<<12.345<<endl;
    cout.setf(ios::uppercase);
    cout<<12.345<<endl;

    return 0;
}



