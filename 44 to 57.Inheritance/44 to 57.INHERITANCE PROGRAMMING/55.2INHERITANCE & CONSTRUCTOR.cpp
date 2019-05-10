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

class base1
{
public:
    int a;
    base1(int x)
    {
        a=x;
    }
};

class base2
{
public:
    int c;
    base2(int z)
    {
        c=z;
    }
};

class derive:public base1,public base2
{
public:
    int b;
    derive(int x,int y,int z):base1(0),base2(0)
    {
        a=x;
        b=y;
        c=z;
    }
};

int main()
{
    derive ob(1,2,3);
    cout<<ob.a<<endl;
    cout<<ob.b<<endl;
    cout<<ob.c<<endl;
    return 0;
}

