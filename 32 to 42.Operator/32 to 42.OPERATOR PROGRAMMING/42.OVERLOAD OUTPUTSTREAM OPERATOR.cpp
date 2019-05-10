///Overload output stream(<<) operator

#include<iostream>
using namespace std;

class Number
{
    int x,y;///Private member variable
public:
    Number() {x=0; y=0;}///constructor
    Number(int a, int b){x=a; y=b;}///constructor
    void get(int &a,int &b){a=x; b=y;}
    void set(int a, int b){x=a; y=b;}
    void print(){cout<<x<<" "<<y<<endl;}

    friend void operator << (ostream &os, Number ob)
///REMEBER!!!!: WE MUST USE REFERENCE HERE.
    {
        os<<ob.x<<" "<<ob.y<<endl;
    }
///When we print something by cout then it does not return anything. So we use void here.
///As we can't use this pointer in friend function so we can not set one parameter by default.
///That's why we have to set one parameter(not none) in unary operator & two parameter in binary operator.
};


int main()
{
    Number n1(1,4),n2(2,3),n3;

    cout<<n1;///Here we don't know the class of cout. But we know that class of n1 is number class.
    cout<<n2;
    return 0;
}

