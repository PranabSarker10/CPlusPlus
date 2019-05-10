///IO Manipulators left,right,internal
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<-71<<endl;
    cout<<setw(7)<<-71<<endl;
    cout<<left<<setw(7)<<-71<<endl;
    cout<<right<<setw(7)<<-71<<endl;
    cout<<internal<<setw(7)<<-71<<endl;

    return 0;
}
