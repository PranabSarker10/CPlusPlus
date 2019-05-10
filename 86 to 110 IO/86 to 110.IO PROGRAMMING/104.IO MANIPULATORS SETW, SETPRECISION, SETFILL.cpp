///IO MANIPULATORS SETW, SETPRECISION, SETFILL
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"Pranab"<<endl;
    cout<< setw(10) << "Pranab" <<endl;
    cout<< setw(10) << setfill('.') <<"Pranab" <<endl;///Empty place will be filled by ...
    cout<< setprecision(6) << 123.4567354 <<endl;///For precision, it will take 6 digits.
    return 0;
}
