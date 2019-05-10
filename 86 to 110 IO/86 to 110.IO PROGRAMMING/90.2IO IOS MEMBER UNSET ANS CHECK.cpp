///IO IOS MEMBER UNSET ANS CHECK
#include<iostream>
using namespace std;

int main()
{
    cout<<12.34<<endl;
    cout.setf(ios::scientific);
    cout<<12.34<<endl;

    cout.unsetf(ios::scientific);
    cout<<12.34<<endl;

    cout.setf(ios::hex);///Here we need to unset decimal and set hexadecimal.
    cout<<100<<endl;

    return 0;
}
