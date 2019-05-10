///Virtual function & Dynamic Bynding
#include<iostream>
using namespace std;

class Base
{
public:
    void print() {cout<<"Base"<<endl;}
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

    bob.print();///Base class's function.
    dob.print();///Derive class's function.

    Base *ptr;

    ptr = &bob;
    ptr->print();
///Remember: Pointer used in Base class cannot access the Derive class's functions.
    ptr = &dob;
    ptr->print();
///Remember: Pointer used in Base class cannot access the Derive class's functions.
    return 0;
}
