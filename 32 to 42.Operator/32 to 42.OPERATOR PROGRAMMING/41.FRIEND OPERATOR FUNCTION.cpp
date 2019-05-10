///Friend Operator Function
/**
1.We can not use this operator(=,(),[],->) in Friend function.Because we can use this pointer(*this) in friend function. And to use this operators this pointer is needed.
*/
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

    friend Number operator + (Number a, Number b)
    {
        Number temp;
        temp.x = a.x + b.x;
        temp.y = a.y + b.y;
        return temp;
    }
///As we can't use this pointer in friend function so we can not set one parameter by default.
///That's why we have to set one parameter(not none) in unary operator & two parameter in binary operator.
};


int main()
{
    Number n1(1,4),n2(2,3),n3;

    n3 = n1 + n2;
    n3.print();

    return 0;
}
