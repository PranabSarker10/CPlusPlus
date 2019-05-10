///IO MANIPULATORS showpos,noshowpos
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<143024<<endl;
    cout<< showpos << 143024 <<endl;
    cout<<143024<<endl;///As showpos is set so it will show positive value.
    cout<< noshowpos << 143024 <<endl;///It will show non-positive value for noshowpose.
    cout<<showpos << -143024 <<endl;
///Remember: If we give (-) then showpos can't give me the positive value. Thwn it will show (-) value.
    return 0;
}
