///Inheritance and Same member(When the  member of base class derive class become same than what we should do?)
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
    int a;
};

int main()
{
    derive ob;
    ob.a = 5;
    cout<<ob.a<<endl;///This is derive classes 'a'.

    return 0;
}
