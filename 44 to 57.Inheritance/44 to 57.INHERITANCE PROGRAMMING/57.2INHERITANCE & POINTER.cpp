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

    return 0;
}
