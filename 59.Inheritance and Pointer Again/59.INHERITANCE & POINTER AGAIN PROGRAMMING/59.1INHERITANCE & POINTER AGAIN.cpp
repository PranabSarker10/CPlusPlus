///Inheritance & pointer again
#include<iostream>
using namespace std;

class Base
{
public:
    int a;
    //void print(){cout<<"Base"<<endl;}
};

class Derive : public Base
{
public:
    int b;
    //void print(){cout<<"Derive"<<endl;}
};
///Here print function is checked first in Derive class than in Base class. Checking the derive class from the same named Base and Derive class is called Function overriding.
int main()
{
    Base *b;
    Derive d;

    b = &d;
    b->a = 5;
///Writing b->b = 5; will show error. Because b is not found in derive class.
    return 0;
}

