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

    b.a = 5;
    cout<<b.a<<endl;

    d.b = 6;
    cout<<d.b<<endl;

    return 0;
}
