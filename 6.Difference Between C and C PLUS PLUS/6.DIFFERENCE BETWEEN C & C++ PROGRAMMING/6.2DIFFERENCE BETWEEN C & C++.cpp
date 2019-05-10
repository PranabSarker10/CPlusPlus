///Difference between C & C++
///A function named boolean, is newly added in C++. This tests true-false condition.
///bool: If true, it shows 1. And if false, it shows 0.
///There are 32 keywords in C language.But in C++, there are 63 keywords.
#include<iostream>
using namespace std;
int main()
{
    bool c;
    bool i=false,j=true;
    bool a = 2;
    bool b;

    cout<<i<<endl;///Shows 0.
    cout<<j<<endl;///Shows 1.
    cout<<a<<endl;///Shows 1.
    cout<<b<<endl;///But here b is showing a garbage value. But why??????
    cout<<c<<endl;///Shows 0. As nothing is assigned in c, so nothing to print. So false(0).

    return 0;
}

