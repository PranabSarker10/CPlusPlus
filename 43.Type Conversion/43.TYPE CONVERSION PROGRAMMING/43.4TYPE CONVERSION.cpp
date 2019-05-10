///Type Conversion
///Type conversion means converting one types two another type.
/**
3 types of conversion is presented.

1.build -> class  n1 = 5.
2.class -> build  int a = n1.
3.class -> class n1 = x1.

*/
#include<iostream>
using namespace std;

class Number
{
    int x,y;///Private member variable
public:
    Number() {x=0; y=0;}///constructor
    Number(int a, int b){x=a; y=b;}///constructor
        Number(int a){x=a; y=0;}///constructor
    void get(int &a,int &b){a=x; b=y;}
    void set(int a, int b){x=a; y=b;}
    void print(){cout<<x<<" "<<y<<endl;}

    operator int()///As we want to overload number in integer.
    {
        return x+y;
    }
};
int main()
{
    Number n1(1,4),n2(2,3),n3;

///class ->build
    int a=5;
    a = n1;
    cout<<a<<endl;
    return 0;
}





