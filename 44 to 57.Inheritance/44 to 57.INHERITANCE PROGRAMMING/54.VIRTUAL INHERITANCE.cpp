///Virtual Inheritance
#include<iostream>
using namespace std;
class base
{
public:
    int a;
};

class new1:virtual public base
{
public:
    int b;
};

class new2:virtual public base
{
public:
    int c;
};

class derive:public new1,public new2
///Here the (int a) of base has come in derive class twice which creates embiguity. Two avoid this virtual inheritance is needed.
{
public:
    void set(){ cin>>a>>b>>c; }
    int add(){ return a+b+c; }
};

int main()
{
    derive ob;
    ob.set();
    cout<<ob.add();
    return 0;
}
