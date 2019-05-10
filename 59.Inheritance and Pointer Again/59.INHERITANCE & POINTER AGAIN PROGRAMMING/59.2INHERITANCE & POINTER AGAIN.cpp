///Inheritance & pointer again
#include<iostream>
using namespace std;

class Base
{
public:
    void print(){cout<<"Base"<<endl;}
};

class Derive : public Base
{
public:
    void print(){cout<<"Derive"<<endl;}
};
///Here print function is checked first in Derive class than in Base class. Checking the derive class from the same named Base and Derive class is called Function overriding.
int main()
{
    Base *b;
    Derive d;

    b = &d;
    b->print();///As we taken it as Base classes pointer so it will print the Base classes print function.
    return 0;
}
