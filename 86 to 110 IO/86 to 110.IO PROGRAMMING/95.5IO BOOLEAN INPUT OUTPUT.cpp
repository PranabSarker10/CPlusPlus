///IO BOOLEAN INPUT OUTPUT
///True = 1; False = 0.
#include<iostream>
using namespace std;

int main()
{
    bool a;

    cin.setf(ios::boolalpha);///It is set for taking input true or false.
///Remember: Without true or false, it will always show 0.

    cout<<"Write false"<<endl;
    cin>>a;
    cout<<a;///Now it will show 0.

    return 0;
}




