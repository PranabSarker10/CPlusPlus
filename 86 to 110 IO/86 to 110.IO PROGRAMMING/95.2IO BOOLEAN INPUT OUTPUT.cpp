///IO BOOLEAN INPUT OUTPUT
///True = 1; False = 0.
#include<iostream>
using namespace std;

int main()
{
    bool a;
    a = 5;
    cout<<a<<endl;
    a=true;
    cout<<a<<endl;
    a=false;
    cout<<a<<endl;

    cout<<"Write true"<<endl;
    cin>>a;
    cout<<a;///Here it will print 0. I mean it is treated as false.

    return 0;
}

