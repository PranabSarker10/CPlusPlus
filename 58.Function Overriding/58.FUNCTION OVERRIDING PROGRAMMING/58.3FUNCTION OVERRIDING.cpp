///Function Overriding: This is a embiguity step. It happens when we use same named function in derive and base class.
///Remember: Though function overloading has same named classes but there parameters are varies from one class to another class.
#include<iostream>
using namespace std;

class Base
{
public:
    void print(int a,int b){cout<<"Base"<<endl;}
};

class Derive : public Base
{
public:

};
///Here print function is checked first in Derive class than in Base class. Checking the derive class from the same named Base and Derive class is called Function overriding.
int main()
{
    Derive ob;
    ob.print(2,3);///As only Base class is presented so it will show proper output.

    return 0;
}


