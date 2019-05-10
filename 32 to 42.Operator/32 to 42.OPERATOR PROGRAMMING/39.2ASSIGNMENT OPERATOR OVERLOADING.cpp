///Assignment Operator overloading
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

    Number operator = (Number ob);
};

Number Number::operator = (Number ob)
{
    x = ob.x;
    y = ob.y;
}

int main()
{
    Number n1(4,0),n2(4,4),n3;

    n1.print();
    n2.print();

    n3 = n1 = n2;
///Here a garbage value is shown so we have to use this pointer(39.3).
    n1.print();
    n2.print();
    n3.print();
    return 0;
}

