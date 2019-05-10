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

    cout.unsetf(ios::basefield);/// Here basefield is unset.
    cout.setf(ios::hex);
    cout<<100<<endl;

    cout.setf(ios::showbase);
    cout<<100<<endl;///Now we can easily identify that it is decimal.
    return 0;
}



