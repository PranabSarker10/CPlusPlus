///Overriding & Overloading(Same named functions but works are different(The different works are checked by different parameter))
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
    //void print(){cout<<"Derive"<<endl;}
};

int main()
{
    Derive ob;
    ob.print();

    return 0;
}

