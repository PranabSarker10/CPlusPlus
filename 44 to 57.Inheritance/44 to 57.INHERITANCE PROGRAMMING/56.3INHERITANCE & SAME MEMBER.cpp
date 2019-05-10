///Inheritance and Same member(When the  member of base class derive class become same than what we should do?)
#include<iostream>
using namespace std;

class base
{
public:
    int a;
    int get(){return a;}
};

class derive:public base
{
public:
    int a;
    int getd(){return a+get();}
};

int main()
{
    derive ob;
    ob.base::a = 1;
    ob.a = 5;///This is derived class by default.We can write derive here like the previous base.
    cout<<ob.getd()<<endl;

    return 0;
}


