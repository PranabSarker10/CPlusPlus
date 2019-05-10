///WIDTH, PRECISION, FILL
#include<iostream>
using namespace std;

int main()
{
    cout<<"PranabParna"<<endl;
    cout.width(20);
    cout.fill('@');///Empty places are filled with at the rate.
    cout<<"PranabParna"<<endl;///As it is the imediate next so it will work here.
///Remember: It will work on the imediate next.
    cout<<"PranabParna"<<endl;///Here it will not work.

    return 0;
}


