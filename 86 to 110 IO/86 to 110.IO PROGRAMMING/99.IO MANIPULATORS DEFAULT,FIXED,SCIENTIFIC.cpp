///IO Manipulators default,fixed,scientific.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a = 1234.0;
    double b = 123.34;

    cout<<"default\n";
    cout<<a<<" "<<b<<endl;

    cout<<"fixed\n";
    cout<<fixed<<a<<" "<<b<<endl;

    cout<<"scientific\n";
    cout<<scientific<<a<<" "<<b<<endl;
    return 0;
}

