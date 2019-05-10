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
    ob.a = 0;///Here -2 will be printed which is a garbage value. To avoid this we have to set the value in a.
    cout<<ob.getd()<<endl;///This is derive classes 'a'.

    return 0;
}

