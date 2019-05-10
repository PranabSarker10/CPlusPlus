///IO MANIPULATORS SHOWPOINT, NOSHOWPOINT
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<143.24<<endl;
    cout<<showpoint<<143.24<<endl;///Total 6 digits.
    cout<<143.024<<endl;
    cout<<143906924<<endl;///It will not change.Because only floating point is applicable.
    cout<<143.0247<<endl;
    cout<<143024.9<<endl;
    cout<<1430249.9<<endl;///Scientific
    cout<<143024954.334429<<endl;///Scientific
    cout<<noshowpoint<<143.9<<endl;
///Remember: noshowpoint has also the highest limit of 6 digits. But if it is less than 6, then it will print the exact(without using the extra 0/0s to fill 6 digits).
    cout<<noshowpoint<<143.906924<<endl;
    return 0;
}
