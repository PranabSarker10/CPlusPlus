///Inheritance and Constructor
///Here we will discuss the attitude of the constructor of base class when it is inherited in derived class.
/**
Remember:
1.If constructor is presented in base class, it has to be presented in derived class.
2.The base class constructor will be called before from derived class.(The Base class constructor will be called with Derived class)
3.The base class destructor will be called late than derived class.
**/
#include<iostream>
using namespace std;

class base
{
public:
    int a;
    base(int x)
    {
        a=x;
    }
};

class derive:public base
{
public:
    int b;
    derive(int y):base(4)
    {
        b=y;
    }
};

int main()
{
    derive ob(5);
    cout<<ob.a<<endl;
    cout<<ob.b<<endl;
    return 0;
}
