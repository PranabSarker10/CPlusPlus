///IO BOOLEAN INPUT OUTPUT
///True = 1; False = 0.
#include<iostream>
using namespace std;

int main()
{
    bool a;

    cin.setf(ios::boolalpha);///It is set for taking input true or false.
    cout.setf(ios::boolalpha);///It will show true or false in lieu of showing 1 or 0.
    cin>>a;
    cout<<a;
///Remember: Here all digit will show error. And true will show true, false will show false.
    return 0;
}

