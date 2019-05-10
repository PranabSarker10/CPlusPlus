///Inheritance and pointer
#include<iostream>
using namespace std;
class base
{
public:
    int a;
};

class derive:public base
{
public:
    int b;
};

int main()
{
    base b;
    derive d;

    d.a = 5;
    cout<<d.a<<endl;

    d.b = 6;
    cout<<d.b<<endl;

    base *ptr;

    ptr = &d;

    ptr->a = 1;
    cout<<ptr->a<<endl;
///Remember: Writing ptr->b = 2; will show error. Because ptr is of base class. And b was not present in base class.

    return 0;
}

