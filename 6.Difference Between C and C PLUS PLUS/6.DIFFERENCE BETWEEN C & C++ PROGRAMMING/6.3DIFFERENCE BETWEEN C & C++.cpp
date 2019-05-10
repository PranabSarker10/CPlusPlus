///Difference between C & C++
#include<iostream>
using namespace std;

struct abc
{
    int a;
};

struct without_using_struct_in_main_function
{
    int b;
};

int main()
{
    struct abc ob;
    ob.a = 5;
    cout<<ob.a<<endl;

    without_using_struct_in_main_function     new_ob;///We have no need to use struct in main function. It's an advantage in C++.
    new_ob.b = 10;
    cout<<new_ob.b<<endl;

    return 0;
}
