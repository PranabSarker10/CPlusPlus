///Type Conversion
///Type conversion means converting one types two another type.
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
};


int main()
{
    Number n1(1,4),n2(2,3),n3;

    int a = 5;
    int c = 5;
    float b = 1.2;
    float d = 1.2;

    a = b;
    cout<<a<<" "<<b<<endl;///Here a is an integer. So floating point value b(1.2) is assaigned as an integer(1) in a.
    d=c;
    cout<<c<<" "<<d<<endl;///Here d is a float. But for the value of 5.00 it prints 5.

    return 0;
}


