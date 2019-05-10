///Function Overriding: This is a embiguity step. It happens when we use same named function in derive and base class.
///Remember: Though function overloading has same named classes but there parameters are varies from one class to another class.
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
    Derive ob;
    ob.print();

    return 0;
}
