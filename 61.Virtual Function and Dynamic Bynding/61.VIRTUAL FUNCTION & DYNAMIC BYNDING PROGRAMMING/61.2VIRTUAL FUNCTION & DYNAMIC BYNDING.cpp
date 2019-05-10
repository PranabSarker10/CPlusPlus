///Virtual function & Dynamic Bynding
#include<iostream>
using namespace std;

class Base
{
public:
    virtual void print() {cout<<"Base"<<endl;}
};

class Derive : public Base
{
public:
    void print() {cout<<"Derive"<<endl;}
};

int main()
{
    Base bob;
    Derive dob;

    Base *ptr;

    ptr = &dob;
    ptr->print();///For declaring as virtual the next function of the virtual function will work here.

    return 0;
}

