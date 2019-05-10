///Template function code
///It reduces 3 functions(same name) of 3 datatypes into 1 functions(same name) of 3 datatypes.
#include<iostream>
using namespace std;

template <class T>
T add (T a, T b)
{
    return a+b;
}

int main()
{
    int num1 = 5, num2 = 6;
    cout<<add(num1,num2)<<endl;

    double num3 = 1.2, num4 = 2.3;
    cout<<add(num3,num4)<<endl;

    string s1 = "Pranab", s2 = " sarker";
    cout<<add(s1,s2)<<endl;
    return 0;
}


