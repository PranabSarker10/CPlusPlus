///IO BOOLEAN INPUT OUTPUT
///True = 1; False = 0.
#include<iostream>
using namespace std;

int main()
{
    bool a;

    cout.setf(ios::boolalpha);///It will show true or false in lieu of showing 1 or 0.
    cin>>a;
    cout<<a;
///Remember: As cin is not set so writing true or false will show false. 0 will show false, 1 and all other will show true.
    return 0;
}





