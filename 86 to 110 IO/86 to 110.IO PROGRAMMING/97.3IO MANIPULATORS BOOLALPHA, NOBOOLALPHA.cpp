
///IO Manipulators boolalpha, noboolalpha

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    bool b;
///For seting boolalpha we will show true for ture and false for false.
    cin>> boolalpha >> b;
    cout << boolalpha <<b << endl;

    return 0;
}

